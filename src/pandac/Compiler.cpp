#include "Compiler.h"

#include "Class.h"
#include "MethodRef.h"
#include "Methods.h"
#include "Operator.h"
#include "Package.h"
#include "Variable.h"

#include <algorithm>
#include <limits.h>
#include <set>

class AutoSymbolTable {
public:
    AutoSymbolTable(Compiler* compiler)
    : fCompiler(compiler) {
        fCompiler->fSymbolTable = new SymbolTable(fCompiler->fSymbolTable,
                fCompiler->fSymbolTable->fClass);
    }

    ~AutoSymbolTable() {
        SymbolTable* old = fCompiler->fSymbolTable;
        for (auto& ptr : old->fOwnedPtrs) {
            old->fParents[0]->fOwnedPtrs.push_back(std::move(ptr));
        }
        fCompiler->fSymbolTable = old->fParents[0];
        delete old;
    }

private:
    Compiler* fCompiler;
};

class AutoLoop {
public:
    AutoLoop(Compiler* compiler, String text)
    : fCompiler(compiler) {
        fCompiler->fLoops.push_back(text);
    }

    ~AutoLoop() {
        fCompiler->fLoops.pop_back();
    }

private:
    Compiler* fCompiler;
};

void Compiler::scan(ASTNode* file) {
    fScanner.scan(file, &fRoot);
}

static int required_size(int64_t value) {
    if (value >= -128 && value <= 127) {
        return 8;
    }
    if (value >= -32768 && value <= 32767) {
        return 16;
    }
    if (value >= -2147483648 && value <= 2147483647) {
        return 32;
    }
    return 64;
}

static int required_size(uint64_t value) {
    if (value <= 255) {
        return 8;
    }
    if (value <= 65535) {
        return 16;
    }
    if (value <= 4294967295) {
        return 32;
    }
    return 64;
}

void Compiler::resolveType(const SymbolTable& st, Type* t) {
    switch (t->fCategory) {
        case Type::Category::CLASS: {
            Symbol* s = st[t->fName];
            if (s && s->fKind == Symbol::Kind::GENERIC_PARAMETER) {
                std::vector<Type> children;
                Class::GenericParameter& gp = *(Class::GenericParameter*) s;
                children.push_back(gp.fType);
                *t = Type(t->fPosition, Type::Category::PARAMETER, gp.fOwner + "." + t->fName,
                        std::move(children));
                break;
            }
            Class* cl = this->resolveClass(st, *t);
            if (cl) {
                *t = cl->fType;
            }
            break;
        }
        case Type::Category::GENERIC: {
            std::vector<Type> result;
            for (auto& sub : t->fSubtypes) {
                this->resolveType(st, &sub);
                result.push_back(std::move(sub));
            }
            *t = Type(std::move(result));
            break;
        }
        case Type::Category::NULLABLE: {
            ASSERT(t->fSubtypes.size() == 1);
            std::vector<Type> children;
            Type child = std::move(t->fSubtypes[0]);
            this->resolveType(st, &child);
            String name = child.fName + "?";
            children.push_back(std::move(child));
            *t = Type(t->fPosition, Type::Category::NULLABLE, name, std::move(children));
        }
        default:
            break;
    }
}

Class* Compiler::getClass(Type t) {
    if (t.fCategory == Type::Category::GENERIC || t.fCategory == Type::Category::NULLABLE ||
            t.fCategory == Type::Category::PARAMETER) {
        return this->getClass(t.fSubtypes[0]);
    }
    Class* result = fClasses[t.fName];
    return result;
}

Class* Compiler::resolveClass(const SymbolTable& st, Type t) {
    if (t.fCategory == Type::Category::GENERIC || t.fCategory == Type::Category::NULLABLE) {
        return this->resolveClass(st, t.fSubtypes[0]);
    }
    const SymbolTable* current = &st;
    std::stringstream ss;
    ss.str(t.fName);
    std::string token;
    Class* result = nullptr;
    Package* p = nullptr;
    while (std::getline(ss, token, '.')) {
        ASSERT(current);
        Symbol* s = (*current)[token];
        if (!s) {
            this->error(t.fPosition, "no type named '" + t.fName + "'");
            return nullptr;
        }
        switch (s->fKind) {
            case Symbol::Kind::CLASS:
                result = (Class*) s;
                current = &((Class*) s)->fSymbolTable;
                break;
            case Symbol::Kind::PACKAGE:
                result = nullptr;
                p = (Package*) s;
                current = &p->fSymbolTable;
                break;
            case Symbol::Kind::GENERIC_PARAMETER:
                result = this->resolveClass(st, ((Class::GenericParameter*) s)->fType);
                if (!result) {
                    return nullptr;
                }
                current = &result->fSymbolTable;
                break;
            default:
                this->error(t.fPosition, "'" + t.fName + "' is not a type");
                return nullptr;
        }
    }
    if (result) {
        return result;
    }
    ASSERT(p);
    this->error(t.fPosition, "expected a type, but found package '" + p->fName + "'");
    return nullptr;
}

std::vector<const Field*> Compiler::getInstanceFields(const Class& cl) {
    if (cl.fSuper == Type::Void() || cl.isValue()) {
        std::vector<const Field*> result;
        for (const Field* f : cl.fFields) {
            if (!f->fAnnotations.isClass()) {
                result.push_back(f);
            }
        }
        return std::move(result);
    }
    std::vector<const Field*> result = this->getInstanceFields(*this->resolveClass(cl.fSymbolTable,
            cl.fSuper));
    result.insert(result.end(), cl.fFields.begin(), cl.fFields.end());
    return result;
}

int Compiler::matchMethods(const std::vector<const MethodRef*>& methods,
        const std::vector<IRNode>& args, const Type* returnType,
        std::vector<const MethodRef*>* outMatches) {
    *outMatches = { };
    int minCost = INT_MAX;
    for (const auto& m : methods) {
        int newCost = this->callCost(*m, args, returnType);
        if (newCost == INT_MAX) {
            continue;
        }
        if (newCost < minCost) {
            minCost = newCost;
            *outMatches = { };
        }
        if (newCost <= minCost) {
            outMatches->push_back(m);
        }
    }
    return minCost;
}

// returns the type that a variable should have when initialized with the given type
static Type variable_type(const Type& type) {
    if (type.fCategory == Type::Category::NULLABLE) {
        ASSERT(type.fSubtypes.size() == 1);
        std::vector<Type> children;
        Type base = variable_type(type.fSubtypes[0]);
        String name = base.fName + "?";
        children.push_back(std::move(base));
        return Type(type.fPosition, Type::Category::NULLABLE, name, std::move(children));
    }
    if (type == Type::IntLiteral()) {
        return Type::Int();
    }
    if (type == Type::BuiltinBit()) {
        return Type::Bit();
    }
    return type;
}

// returns the type that a variable should have when initialized with the given node
static Type variable_type(const IRNode& node) {
    if (node.fKind == IRNode::Kind::UNRESOLVED_RANGE) {
        Type baseType = node.fChildren[0].fType;
        baseType = baseType.typeUnion(node.fChildren[1].fType);
        baseType = baseType.typeUnion(node.fChildren[2].fType);
        if (baseType == Type::Null()) {
            baseType = baseType.typeUnion(Type::Int());
        }
        baseType = variable_type(baseType);
        return Type::RangeOf(baseType);
    }
    return variable_type(node.fType);
}

bool Compiler::coerce(IRNode* node, const Type& target, IRNode* out) {
    ASSERT(node);
    ASSERT(out);
    if (node->fType == target) {
        if (out != node) {
            *out = std::move(*node);
        }
        return true;
    }
    switch (node->fKind) {
        case IRNode::Kind::BIT:
            if (target != Type::Bit()) {
                if (!this->coerce(node, Type::Bit())) {
                    return false;
                }
                return this->coerce(node, target, out);
            }
            break;
        case IRNode::Kind::INT:
            if (target.fCategory == Type::Category::BUILTIN_INT &&
                    required_size(node->fValue.fInt) <= target.fSize) {
                *out = IRNode(node->fPosition, IRNode::Kind::INT, target, node->fValue.fInt);
                return true;
            }
            else if (target.fCategory == Type::Category::BUILTIN_UINT &&
                    required_size(node->fValue.fInt) <= target.fSize) {
                *out = IRNode(node->fPosition, IRNode::Kind::INT, target, node->fValue.fInt);
                return true;
            }
            if (target.fCategory == Type::Category::CLASS && !target.isNumeric() &&
                    this->coerce(node, variable_type(*node), node)) {
                return this->coerce(node, target, out);
            }
            break;
        case IRNode::Kind::NEGATED_INT:
            if (target.fCategory == Type::Category::BUILTIN_INT &&
                    required_size((int64_t) -node->fValue.fInt) <= target.fSize) {
                *out = IRNode(node->fPosition, IRNode::Kind::NEGATED_INT, target,
                        node->fValue.fInt);
                return true;
            }
            if (target.fCategory == Type::Category::CLASS && !target.isNumeric() &&
                    this->coerce(node, variable_type(*node), node)) {
                return this->coerce(node, target, out);
            }
            break;
        case IRNode::Kind::NULL_LITERAL:
            if (target.fCategory == Type::Category::NULLABLE) {
                *out = IRNode(node->fPosition, IRNode::Kind::NULL_LITERAL, target);
                return true;
            }
            break;
        case IRNode::Kind::UNRESOLVED_CALL: {
            ASSERT(node->fChildren.size() == 2);
            ASSERT(node->fChildren[0].fKind == IRNode::Kind::UNRESOLVED_METHOD_REFERENCE);
            std::vector<const MethodRef*> methods;
            for (int i = 1; i < node->fChildren[0].fChildren.size(); ++i) {
                const auto& m = node->fChildren[0].fChildren[i];
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((MethodRef*) m.fValue.fPtr);
            }
            std::vector<const MethodRef*> matches;
            this->matchMethods(methods, node->fChildren[1].fChildren, &target, &matches);
            if (matches.size() == 1) {
                std::vector<IRNode> children;
                ASSERT(node->fChildren[0].fChildren.size() >= 1);
                children.push_back(std::move(node->fChildren[0].fChildren[0]));
                IRNode method(node->fPosition, IRNode::Kind::METHOD_REFERENCE,
                        Type(Position(), Type::Category::METHOD, "<method>"), matches[0],
                        std::move(children));
                return this->call(std::move(method), std::move(node->fChildren[1].fChildren), out);
            }
            else if (matches.size() == 0) {
                this->reportNoMatch(node->fPosition, methods[0]->fMethod.fName,
                        node->fChildren[1].fChildren, &target);
                return false;
            }
            else {
                this->reportAmbiguousMatch(node->fPosition, matches, node->fChildren[1].fChildren,
                        &target);
                return false;
            }
        }
        case IRNode::Kind::UNRESOLVED_BINARY: {
            std::vector<const MethodRef*> matches;
            Operator op = (Operator) node->fValue.fInt;
            if (this->operatorMatch(&node->fChildren[0], op, &node->fChildren[1], &target,
                    &matches) == INT_MAX) {
                this->error(node->fPosition, String("no '") + operator_text(op) +
                        "' operator on '" + node->fChildren[0].fType.fName + "', '" +
                        node->fChildren[1].fType.fName + "' returns type '" + target.fName + "'");
                return false;
            }
            if (matches.size() > 1) {
                this->reportAmbiguousMatch(node->fPosition, matches, node->fChildren, &target);
                return false;
            }
            *out = this->operatorCall(node->fPosition, &node->fChildren[0], *matches[0],
                    &node->fChildren[1]);
            return true;
        }
        case IRNode::Kind::UNRESOLVED_INDEX: {
            std::vector<const MethodRef*> matches;
            if (this->operatorMatch(&node->fChildren[0], Operator::INDEX, &node->fChildren[1],
                    &target, &matches) == INT_MAX) {
                this->error(node->fPosition, "no '[]' operator on '" +
                        node->fChildren[0].fType.fName + "', '" + node->fChildren[1].fType.fName +
                        "' returns type '" + target.fName + "'");
                return false;
            }
            if (matches.size() > 1) {
                this->reportAmbiguousMatch(node->fPosition, matches, node->fChildren, &target);
                return false;
            }
            *out = this->operatorCall(node->fPosition, &node->fChildren[0], *matches[0],
                    &node->fChildren[1]);
            return true;
        }
        case IRNode::Kind::UNRESOLVED_RANGE: {
            ASSERT(node->fChildren.size() == 3);
            if (target.fCategory == Type::Category::GENERIC &&
                    target.fSubtypes[0].fName == "panda.core.Range") {
                ASSERT(target.fSubtypes.size() == 2);
                const Type& baseType = target.fSubtypes[1];
                std::vector<IRNode> args;
                if (!this->coerce(&node->fChildren[0], baseType)) {
                    return false;
                }
                if (!this->coerce(&node->fChildren[1], baseType)) {
                    return false;
                }
                args.push_back(std::move(node->fChildren[0]));
                args.push_back(std::move(node->fChildren[1]));
                args.push_back(std::move(node->fChildren[2]));
                args.emplace_back(node->fPosition, IRNode::Kind::BIT, Type::BuiltinBit(),
                        node->fValue.fBool);
                Type rangeType = Type::RangeOf(baseType);
                Class* cl = this->resolveClass(*fSymbolTable, rangeType);
                if (!cl) {
                    return false;
                }
                IRNode target(node->fPosition, IRNode::Kind::TYPE_REFERENCE, Type::Class(),
                            this->typePointer(rangeType));
                return this->call(std::move(target), std::move(args), out);
            }
            else {
                if (!this->resolve(node)) {
                    return false;
                }
                ASSERT(node->fKind != IRNode::Kind::UNRESOLVED_RANGE);
                return this->coerce(node, target);
            }
        }
        default:
            break;
    }
    if (this->coercionCost(*node, target) != INT_MAX) {
        Position p = node->fPosition;
        if (target.isClass()) {
            Class* cl = this->resolveClass(fCurrentClass.top()->fSymbolTable, target);
            if (cl) {
                for (const Method* m : cl->fMethods) {
                    if (m->fAnnotations.isImplicit()) {
                        // Internal use feature, sharp edges! We currently assume there's only one
                        // implicit method and it's a single-argument init.
                        ASSERT(m->fMethodKind == Method::Kind::INIT);
                        ASSERT(m->fParameters.size() == 1);
                        if (this->coercionCost(*node, m->fParameters[0].fType) != INT_MAX) {
                            IRNode type = IRNode(node->fPosition, IRNode::Kind::TYPE_REFERENCE,
                                    &cl->fType);
                            std::vector<IRNode> args;
                            args.push_back(std::move(*node));
                            return this->call(std::move(type), std::move(args), out);
                        }
                    }
                }
            }
        }
        std::vector<IRNode> children;
        this->resolve(node);
        return this->cast(p, node, false, target, out);
    }
    if (target.fCategory == Type::Category::NULLABLE) {
        if (this->coerce(node, target.fSubtypes[0])) {
            return this->cast(node->fPosition, node, false, target, out);
        }
        return false;
    }
    String value;
    switch (node->fKind) {
        case IRNode::Kind::INT:
            value = std::to_string(node->fValue.fInt);
            break;
        case IRNode::Kind::NEGATED_INT:
            value = '-' + std::to_string(node->fValue.fInt);
            break;
        default:
            value = node->fType.fName;
    }
    this->error(node->fPosition, "expected '" + target.fName + "', but found '" + value + "'");
    return false;
}

static constexpr int kNullCastCost = 1;

int Compiler::coercionCost(const Type& type, const Type& target) {
    if (type == target) {
        return 0;
    }
    if (type == Type::Null()) {
        return target.fCategory == Type::Category::NULLABLE ? 0 : INT_MAX;
    }
    if (type.fCategory != Type::Category::NULLABLE &&
            target.fCategory == Type::Category::NULLABLE) {
        int result = this->coercionCost(type, target.fSubtypes[0]);
        if (result != INT_MAX) {
            result += kNullCastCost;
        }
        return result;
    }
    if (type.fCategory == Type::Category::NULLABLE &&
            target.fCategory != Type::Category::NULLABLE) {
        int result = this->coercionCost(type.fSubtypes[0], target);
        if (result != INT_MAX) {
            result += kNullCastCost;
        }
        return result;
    }
    if (type.fCategory == Type::Category::CLASS && target.fCategory == Type::Category::CLASS) {
        int cost = 0;
        Class* ancestor = this->resolveClass(fCurrentClass.top()->fSymbolTable, type);
        Class* targetClass = this->resolveClass(fCurrentClass.top()->fSymbolTable, target);
        if (!ancestor || !targetClass) {
            return INT_MAX;
        }
        for (;;) {
            if (ancestor == targetClass) {
                return cost;
            }
            ++cost;
            if (ancestor->fSuper == Type::Void()) {
                break;
            }
            ancestor = this->resolveClass(fCurrentClass.top()->fSymbolTable, ancestor->fSuper);
            if (ancestor == nullptr) {
                break;
            }
        }
    }
    if (type == Type::BuiltinBit()) {
        return this->coercionCost(Type::Bit(), target);
    }
    return INT_MAX;
}

int Compiler::coercionCost(const IRNode& node, const Type& target) {
    if (node.fType.fCategory != Type::Category::NULLABLE &&
            target.fCategory == Type::Category::NULLABLE) {
        ASSERT(target.fSubtypes.size() == 1);
        int cost = this->coercionCost(node, target.fSubtypes[0]);
        if (cost != INT_MAX) {
            return cost + kNullCastCost;
        }
    }
    switch (node.fKind) {
        case IRNode::Kind::INT:
            if ((target.fCategory == Type::Category::BUILTIN_INT &&
                    required_size((int64_t) node.fValue.fInt) <= target.fSize) ||
                    (target.fCategory == Type::Category::BUILTIN_UINT &&
                        required_size((uint64_t) node.fValue.fInt) <= target.fSize)) {
                return 0;
            }
            if (!target.isNumeric()) {
                return this->coercionCost(variable_type(node), target);
            }
            break;
        case IRNode::Kind::NEGATED_INT:
            if ((target.fCategory == Type::Category::BUILTIN_INT &&
                    required_size((int64_t) -node.fValue.fInt) <= target.fSize)) {
                return 0;
            }
            if (!target.isNumeric()) {
                return this->coercionCost(variable_type(node), target);
            }
            break;
        case IRNode::Kind::PREFIX: {
            // temporary hack
            return this->coercionCost(node.fChildren[0], target);
        }
        case IRNode::Kind::UNRESOLVED_CALL: {
            std::vector<const MethodRef*> methods;
            for (int i = 1; i < node.fChildren[0].fChildren.size(); ++i) {
                const IRNode& m = node.fChildren[0].fChildren[i];
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((MethodRef*) m.fValue.fPtr);
            }
            std::vector<const MethodRef*> matches;
            return this->matchMethods(methods, node.fChildren[1].fChildren, &target, &matches);
        }
        case IRNode::Kind::UNRESOLVED_BINARY: {
            ASSERT(node.fChildren.size() == 2);
            std::vector<const MethodRef*> ignored;
            return this->operatorMatch((IRNode*) &node.fChildren[0], (Operator) node.fValue.fInt,
                    (IRNode*) &node.fChildren[1], &target, &ignored);
        }
        case IRNode::Kind::UNRESOLVED_INDEX: {
            ASSERT(node.fChildren.size() == 2);
            std::vector<const MethodRef*> ignored;
            return this->operatorMatch((IRNode*) &node.fChildren[0], Operator::INDEX,
                    (IRNode*) &node.fChildren[1], &target, &ignored);
        }
        case IRNode::Kind::UNRESOLVED_RANGE: {
            if (target.fCategory == Type::Category::GENERIC &&
                    target.fSubtypes[0].fName == "panda.core.Range") {
                ASSERT(target.fSubtypes.size() == 2);
                const Type& rangeType = target.fSubtypes[1];
                int total = 0;
                for (const auto& child : node.fChildren) {
                    int cost = this->coercionCost(child, rangeType);
                    if (cost == INT_MAX) {
                        return INT_MAX;
                    }
                    total += cost;
                }
                return total;
            }
            return this->coercionCost(Type::RangeOf(Type::Any()), target);
        }
        default:
            break;
    }
    if (target.fCategory == Type::Category::CLASS) {
        Class* cl = this->resolveClass(fCurrentClass.top()->fSymbolTable, target);
        if (cl) {
            for (const Method* m : cl->fMethods) {
                if (m->fAnnotations.isImplicit()) {
                    // Internal use feature, sharp edges! We currently assume there's only one
                    // implicit method and it's a single-argument init.
                    ASSERT(m->fMethodKind == Method::Kind::INIT);
                    ASSERT(m->fParameters.size() == 1);
                    int result = this->coercionCost(node, m->fParameters[0].fType);
                    if (result != INT_MAX) {
                        return result;
                    }
                }
            }
        }
    }
    return this->coercionCost(node.fType, target);
}

bool Compiler::canCast(const IRNode& node, const Type& target) {
    // unfinished
    if (this->coercionCost(node, target) != INT_MAX) {
        return true;
    }
    if (node.fType.isBuiltinNumber() && target.isBuiltinNumber()) {
        return true;
    }
    return false;
}

bool Compiler::cast(Position p, IRNode* node, bool isExplicit, const Type& target, IRNode* out) {
    ASSERT(target != Type::Void());
    if (isExplicit && !canCast(*node, target)) {
        this->error(p, "value of type '" + node->fType.description() +
                "' cannot possibly be an instance of '" + target.description() + "'");
    }
    std::vector<IRNode> children;
    children.push_back(std::move(*node));
    if (out == nullptr) {
        out = node;
    }
    *out = IRNode(p, IRNode::Kind::CAST, target, isExplicit, std::move(children));
    return true;
}

int Compiler::callCost(const MethodRef& method, const std::vector<IRNode>& args,
        const Type* returnType) {
    if (method.parameterCount() != args.size()) {
        return INT_MAX;
    }
    int result = 0;
    for (int i = 0; i < args.size(); ++i) {
        int cost = this->coercionCost(args[i], method.parameterType(i));
        if (cost == INT_MAX) {
            return INT_MAX;
        }
        result += cost;
    }
    if (returnType != nullptr) {
        int cost = this->coercionCost(method.returnType(), *returnType);
        if (cost == INT_MAX) {
            return INT_MAX;
        }
        result += cost;
    }
    return result;
}

void Compiler::reportNoMatch(Position position, const String& name,
        const std::vector<IRNode>& args, const Type* returnType) {
    String msg = "no match for '" +name + "(";
    const char* separator = "";
    for (const auto& arg : args) {
        msg += separator + arg.fType.fName;
        separator = ", ";
    }
    msg += ")";
    if (returnType) {
        msg += ":" + returnType->fName;
    }
    msg += "'";
    this->error(position, msg);
}

void Compiler::reportAmbiguousMatch(Position position, const std::vector<const MethodRef*>& methods,
        const std::vector<IRNode>& args, const Type* returnType) {
    String msg = "call '" + methods[0]->fMethod.fName + "(";
    const char* separator = "";
    for (const auto& arg : args) {
        msg += separator + arg.fType.fName;
        separator = ", ";
    }
    msg += ")";
    if (returnType) {
        msg += ":" + returnType->fName;
    }
    msg += "' is ambiguous.\nThe following methods are all equally good matches:";
    for (const auto m : methods) {
        msg += "\n    " + m->fMethod.description();
    }
    this->error(position, msg);
}

bool Compiler::call(IRNode method, std::vector<IRNode> args, IRNode* out) {
    switch (method.fKind) {
        case IRNode::Kind::METHOD_REFERENCE: {
            const MethodRef& m = *(MethodRef*) method.fValue.fPtr;
            if (m.parameterCount() != args.size()) {
                this->error(method.fPosition, "'" + m.fMethod.fName + "' expected " +
                        std::to_string(m.parameterCount()) + " argument" +
                        (m.parameterCount() == 1 ? "" : "s") + ", but received " +
                        std::to_string(args.size()));
                return false;
            }
            std::vector<IRNode> children;
            if (m.fMethod.fMethodKind == Method::Kind::INIT) {
                ASSERT(method.fChildren.size() == 1);
                IRNode target = std::move(method.fChildren[0]);
                method.fChildren.pop_back();
                children.push_back(std::move(method));
                switch (target.fKind) {
                    case IRNode::Kind::SELF:
                        children.push_back(std::move(target));
                        break;
                    case IRNode::Kind::SUPER: {
                        IRNode super(method.fPosition, IRNode::Kind::SELF,
                                fCurrentClass.top()->fType);
                        if (!this->cast(method.fPosition, &super, false,
                                fCurrentClass.top()->fSuper)) {
                            return false;
                        }
                        children.push_back(std::move(super));
                        break;
                    }
                    case IRNode::Kind::VOID:
                        if (fCurrentMethod.size() &&
                                fCurrentMethod.top()->fMethodKind == Method::Kind::INIT) {
                            children.push_back(IRNode(method.fPosition, IRNode::Kind::SELF,
                                    fCurrentClass.top()->fType));
                        }
                        else {
                            this->error(method.fPosition, "self.init() can only be called from "
                                    "within another init method");
                            return false;
                        }
                        break;
                    case IRNode::Kind::TYPE_REFERENCE:
                        break;
                    default:
                        this->error(method.fPosition, "init() can only be directly called on "
                                "'self' or 'super'");
                        return false;
                }
            }
            else {
                ASSERT(method.fChildren.size() == 1);
                IRNode target = std::move(method.fChildren[0]);
                method.fChildren.pop_back();
                children.push_back(std::move(method));
                if (m.fMethod.fAnnotations.isClass()) {
                    if (target.fKind != IRNode::Kind::TYPE_REFERENCE &&
                            target.fKind != IRNode::Kind::VOID) {
                        this->error(method.fPosition, "cannot call class " +
                                m.fMethod.description() + " on an instance");
                    }
                }
                else {
                    if (target.fKind == IRNode::Kind::VOID) {
                        IRNode self;
                        if (fCurrentMethod.top()->fAnnotations.isClass()) {
                            this->error(method.fPosition, "cannot call instance method in a "
                                    "@class context");
                        }
                        children.push_back(IRNode(method.fPosition, IRNode::Kind::SELF,
                                fCurrentClass.top()->fType));
                    }
                    else {
                        if (!m.fMethod.fAnnotations.isClass() &&
                                target.fType != m.fMethod.fOwner.fType) {
                            if (!this->cast(target.fPosition, &target, false,
                                    m.fMethod.fOwner.fType)) {
                                return false;
                            }
                        }
                        children.push_back(std::move(target));
                    }
                }
            }
            for (int i = 0; i < args.size(); i++) {
                IRNode converted;
                if (!this->coerce(&args[i], m.parameterType(i), &converted)) {
                    return false;
                }
                if (m.fMethod.fOwner.fName != "panda.core.Pointer" &&
                        converted.fType != m.fMethod.fParameters[i].fType) {
                    if (!this->cast(converted.fPosition, &converted, false,
                            m.fMethod.fParameters[i].fType)) {
                        return false;
                    }
                }
                children.push_back(std::move(converted));
            }
            *out = IRNode(method.fPosition, IRNode::Kind::CALL, m.fMethod.fReturnType,
                    std::move(children));
            Type effective = m.returnType();
            if (out->fType != effective) {
                if (!this->cast(method.fPosition, out, false, effective)) {
                    return false;
                }
            }
            return true;
        }
        case IRNode::Kind::UNRESOLVED_METHOD_REFERENCE: {
            std::vector<const MethodRef*> min;
            std::vector<const MethodRef*> methodPtrs;
            for (int i = 1; i < method.fChildren.size(); i++) {
                methodPtrs.push_back((MethodRef*) method.fChildren[i].fValue.fPtr);
            }
            ASSERT(methodPtrs.size());
            this->matchMethods(methodPtrs, args, nullptr, &min);
            if (!min.size()) {
                this->reportNoMatch(method.fPosition, methodPtrs[0]->fMethod.fName, args, nullptr);
                return false;
            }
            if (min.size() > 1) {
                std::vector<IRNode> methodsChildren;
                methodsChildren.push_back(std::move(method.fChildren[0]));
                method.fChildren.pop_back();
                for (const auto m : min) {
                    IRNode ref = IRNode(method.fPosition, IRNode::Kind::METHOD_REFERENCE,
                            Type(Position(), Type::Category::METHOD, "<method>"), m);
                    methodsChildren.push_back(std::move(ref));
                }
                std::vector<IRNode> children;
                children.push_back(IRNode(method.fPosition,
                        IRNode::Kind::UNRESOLVED_METHOD_REFERENCE, std::move(methodsChildren)));
                children.emplace_back(method.fPosition, IRNode::Kind::ARGUMENTS, std::move(args));
                ASSERT(method.fValue.fPtr);
                std::set<Type> types;
                for (const MethodRef* m : min) {
                    types.insert(m->returnType());
                }
                *out = IRNode(method.fPosition, IRNode::Kind::UNRESOLVED_CALL,
                        Type(method.fPosition, std::move(types)),
                        method.fValue.fPtr,
                        std::move(children));
                return true;
            }
            std::vector<IRNode> children;
            children.push_back(std::move(method.fChildren[0]));
            IRNode m(method.fPosition, IRNode::Kind::METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), min[0],
                    std::move(children));
            return this->call(std::move(m), std::move(args), out);
        }
        case IRNode::Kind::TYPE_REFERENCE: {
            Type& t = *(Type*) method.fValue.fPtr;
            Class* cl = this->resolveClass(*fSymbolTable, t);
            if (!cl) {
                return false;
            }
            Symbol* symbol = cl->fSymbolTable["init"];
            ASSERT(symbol);
            IRNode target(method.fPosition, IRNode::Kind::TYPE_REFERENCE, this->typePointer(t));
            IRNode init;
            if (!this->symbolRef(method.fPosition, cl->fSymbolTable, symbol, &init, &target)) {
                return false;
            }
            IRNode initCall;
            if (this->call(std::move(init), std::move(args), &initCall)) {
                if (!this->resolve(&initCall)) {
                    return false;
                }
                std::vector<IRNode> children;
                children.push_back(std::move(initCall));
                *out = IRNode(method.fPosition, IRNode::Kind::CONSTRUCT, t, std::move(children));
                return true;
            }
            return false;
        }
        default:
            this->error(method.fPosition, "attempting to call a value which is not a method");
            return false;
    }
}

bool Compiler::call(IRNode target, String methodName, std::vector<IRNode> args, Type* returnType,
        IRNode* out) {
    Class* cl = this->resolveClass(fCurrentClass.top()->fSymbolTable, target.fType);
    if (!cl) {
        return false;
    }
    Symbol* symbol = cl->fSymbolTable[methodName];
    if (!symbol) {
        this->error(target.fPosition, "'" + target.fType.description() +
                "' does not have a method named '" + methodName + "'");
        return false;
    }
    IRNode method;
    Position p = target.fPosition;
    if (!this->symbolRef(p, cl->fSymbolTable, symbol, &method, &target)) {
        return false;
    }
    return this->call(std::move(method), std::move(args), out);
}

bool Compiler::foldInts(Position p, const IRNode& left, Operator op, const IRNode& right,
        IRNode* out) {
    ASSERT(left.fKind == IRNode::Kind::INT && right.fKind == IRNode::Kind::INT);
    uint64_t val1 = left.fValue.fInt;
    uint64_t val2 = right.fValue.fInt;
    bool result;
    uint64_t tmp;
    #define FOLD_BIT(op) \
        *out = IRNode(p, IRNode::Kind::BIT, Type::BuiltinBit(), (bool) (val1 op val2)); \
        return true;

    #define FOLD_INT(op) \
        *out = IRNode(p, IRNode::Kind::INT, Type::IntLiteral(), (uint64_t) (val1 op val2)); \
        return true;

    #define FOLD_OVERFLOW(op) \
        result =__builtin_ ## op ## _overflow(val1, val2, &tmp); \
        if (!result) { \
            *out = IRNode(p, IRNode::Kind::INT, Type::IntLiteral(), tmp); \
            return true; \
        } \
        else { \
            this->error(p, "arithmetic overflow"); \
            return false; \
        }
    switch (op) {
        case Operator::ADD: FOLD_OVERFLOW(add);
        case Operator::SUB: FOLD_OVERFLOW(sub);
        case Operator::MUL: FOLD_OVERFLOW(mul);
        case Operator::INTDIV: {
            if (right.fValue.fInt == 0) {
                this->error(p, "division by zero");
            }
            uint64_t result = val1 / val2;
            if (result == val1 && val2 != 1) {
                this->error(p, "arithmetic overflow");
            }
            *out = IRNode(p, IRNode::Kind::INT, Type::IntLiteral(), result);
            return true;
        }
        case Operator::REM: {
            if (right.fValue.fInt == 0) {
                this->error(p, "division by zero");
            }
            uint64_t result = val1 % val2;
            if (result == val1 && val2 != 1) {
                this->error(p, "arithmetic overflow");
            }
            *out = IRNode(p, IRNode::Kind::INT, Type::IntLiteral(), result);
            return true;
        }
        case Operator::EQ:         FOLD_BIT(==)
        case Operator::NEQ:        FOLD_BIT(!=)
        case Operator::GT:         FOLD_BIT(>)
        case Operator::GTEQ:       FOLD_BIT(>=)
        case Operator::LT:         FOLD_BIT(<)
        case Operator::LTEQ:       FOLD_BIT(<=)
        case Operator::BITWISEAND: FOLD_INT(&)
        case Operator::BITWISEOR:  FOLD_INT(|)
        case Operator::BITWISEXOR: FOLD_INT(^)
        case Operator::SHIFTLEFT:
            if (right.fValue.fInt >= 64) {
                this->error(p, "cannot shift by more than 63 bits");
            }
            FOLD_INT(<<)
        case Operator::SHIFTRIGHT:
            if (right.fValue.fInt >= 64) {
                this->error(p, "cannot shift by more than 63 bits");
            }
            FOLD_INT(>>)
        default:
            break;
    }
    #undef FOLD_BIT
    #undef FOLD_INT
    #undef FOLD_OVERFLOW
    this->error(p, String("'") + operator_text(op) + "' cannot operate on '" + left.fType.fName +
            "', '" + right.fType.fName + "'");
    return false;
}

bool Compiler::foldBits(Position p, const IRNode& left, Operator op, const IRNode& right,
        IRNode* out) {
    ASSERT(left.fKind == IRNode::Kind::BIT && right.fKind == IRNode::Kind::BIT);
    bool val1 = left.fValue.fBool;
    bool val2 = right.fValue.fBool;
    bool result;
    #define FOLD(op) \
        *out = IRNode(p, IRNode::Kind::BIT, Type::Bit(), (bool) (val1 op val2)); \
        return true;

    switch (op) {
        case Operator::EQ:  FOLD(==)
        case Operator::NEQ: FOLD(!=)
        case Operator::AND: FOLD(&&)
        case Operator::OR:  FOLD(||)
        case Operator::XOR: FOLD(^)
        default:
            break;
    }
    #undef FOLD
    this->error(p, String("'") + operator_text(op) + "' cannot operate on '" + left.fType.fName +
            "', '" + right.fType.fName + "'");
    return false;
}

static bool is_assignment(Operator op) {
    switch (op) {
        case Operator::ASSIGNMENT:   // fall through
        case Operator::ADDEQ:        // fall through
        case Operator::SUBEQ:        // fall through
        case Operator::MULEQ:        // fall through
        case Operator::DIVEQ:        // fall through
        case Operator::INTDIVEQ:     // fall through
        case Operator::REMEQ:        // fall through
        case Operator::POWEQ:        // fall through
        case Operator::OREQ:         // fall through
        case Operator::ANDEQ:        // fall through
        case Operator::XOREQ:        // fall through
        case Operator::BITWISEOREQ:  // fall through
        case Operator::BITWISEANDEQ: // fall through
        case Operator::BITWISEXOREQ: // fall through
        case Operator::SHIFTLEFTEQ:  // fall through
        case Operator::SHIFTRIGHTEQ:
            return true;
        default:
            return false;
    }
}

static Operator remove_assignment(Operator op) {
    switch (op) {
        case Operator::ADDEQ:        return Operator::ADD;
        case Operator::SUBEQ:        return Operator::SUB;
        case Operator::MULEQ:        return Operator::MUL;
        case Operator::DIVEQ:        return Operator::DIV;
        case Operator::INTDIVEQ:     return Operator::INTDIV;
        case Operator::REMEQ:        return Operator::REM;
        case Operator::POWEQ:        return Operator::POW;
        case Operator::OREQ:         return Operator::OR;
        case Operator::ANDEQ:        return Operator::AND;
        case Operator::XOREQ:        return Operator::XOR;
        case Operator::BITWISEOREQ:  return Operator::BITWISEOR;
        case Operator::BITWISEANDEQ: return Operator::BITWISEAND;
        case Operator::BITWISEXOREQ: return Operator::BITWISEXOR;
        case Operator::SHIFTLEFTEQ:  return Operator::SHIFTLEFT;
        case Operator::SHIFTRIGHTEQ: return Operator::SHIFTRIGHT;
        default: abort();
    }
}


static bool is_lvalue(const IRNode& node) {
    switch (node.fKind) {
        case IRNode::Kind::CAST:
            ASSERT(node.fChildren.size() == 1);
            if (!node.fValue.fBool) {
                return is_lvalue(node.fChildren[0]);
            }
            return false;
        case IRNode::Kind::FIELD_REFERENCE: // fall through
        case IRNode::Kind::VARIABLE_REFERENCE:
            return true;
        case IRNode::Kind::REUSED_VALUE_DEFINITION:
            return is_lvalue(node.fChildren[0]);
        default:
            return false;
    }
}

int Compiler::operatorCost(IRNode* left, const MethodRef& m, IRNode* right,
        const Type* returnType) {
    std::vector<IRNode> args;
    if (m.fMethod.fAnnotations.isClass()) {
        if (left->fKind != IRNode::Kind::TYPE_REFERENCE | m.fMethod.fParameters.size() == 2) {
            args.push_back(std::move(*left));
        }
        args.push_back(std::move(*right));
        int result = this->callCost(m, args, returnType);
        *left = std::move(args[0]);
        *right = std::move(args[1]);
        return result;
    }
    else {
        args.push_back(std::move(*right));
        int result = this->callCost(m, args, returnType);
        *right = std::move(args[0]);
        return result;
    }
}

static std::vector<Type> type_parameters(Type type) {
    std::vector<Type> result;
    if (type.fCategory == Type::Category::GENERIC) {
        ASSERT(type.fSubtypes.size() >= 2);
        result.assign(type.fSubtypes.begin() + 1, type.fSubtypes.end());
    }
    return std::move(result);
}

static std::vector<Type> type_parameters(const IRNode& node) {
    if (node.fKind == IRNode::Kind::TYPE_REFERENCE) {
        return type_parameters(*(Type*) node.fValue.fPtr);
    }
    return type_parameters(node.fType);
}

bool Compiler::convertArrow(const ASTNode& a, IRNode* outResult) {
    ASSERT(a.fKind == ASTNode::Kind::ARROW);
    ASSERT(a.fChildren.size() == 2);
    IRNode value;
    if (!this->convertExpression(a.fChildren[0], &value)) {
        return false;
    }
    Type type = fScanner.convertType(a.fChildren[1], *fSymbolTable);
    this->resolveType(*fSymbolTable, &type);
    switch ((Operator) a.fValue.fInt) {
        case Operator::CAST:
            if (this->coercionCost(value, type) != INT_MAX) {
                return this->coerce(&value, type, outResult);
            }
            if (this->canCast(value, type)) {
                return this->cast(a.fPosition, &value, true, type, outResult);
            }
            else {
                this->error(a.fPosition, "value of type '" + value.fType.description() +
                        "' cannot possibly be an instance of '" + type.description() + "'");
                return false;
            }
        default:
            abort();
    }
}

int Compiler::operatorMatchLeft(const Class& leftClass, IRNode* left, Operator op, IRNode* right,
        const Type* returnType, std::vector<const MethodRef*>* outResult) {
    int min = INT_MAX;
    ASSERT(!outResult->size());
    const Symbol* leftMethods = leftClass.fSymbolTable[operator_text(op)];
    if (leftMethods) {
        switch (leftMethods->fKind) {
            case Symbol::Kind::METHOD: {
                MethodRef* ref = new MethodRef((const Method*) leftMethods,
                        type_parameters(*left));
                ((const Method*) leftMethods)->fMethodRefs.emplace_back(ref);
                int cost = this->operatorCost(left, *ref, right, returnType);
                if (cost < min) {
                    outResult->clear();
                    min = cost;
                }
                if (cost == min) {
                    outResult->push_back(ref);
                }
                break;
            }
            case Symbol::Kind::METHODS: {
                for (const Method* m : ((Methods&) *leftMethods).fMethods) {
                    MethodRef* ref = new MethodRef(m, type_parameters(*left));
                    m->fMethodRefs.emplace_back(ref);
                    int cost = this->operatorCost(left, *ref, right, returnType);
                    if (cost < min) {
                        outResult->clear();
                        min = cost;
                    }
                    if (cost == min) {
                        outResult->push_back(ref);
                    }
                }
                break;
            }
            default:
                abort();
        }
    }
    return min;
}

int Compiler::operatorMatch(IRNode* left, Operator op, IRNode* right, const Type* returnType,
        std::vector<const MethodRef*>* outResult) {
    int min = INT_MAX;
    if (left->fKind == IRNode::Kind::TYPE_REFERENCE) {
        Class* leftClass = this->resolveClass(fCurrentClass.top()->fSymbolTable,
                *(Type*) left->fValue.fPtr);
        if (!leftClass) {
            return false;
        }
        min = this->operatorMatchLeft(*leftClass, left, op, right, returnType, outResult);
    }
    else if (left->fType.isClass()) {
        Class* leftClass = this->resolveClass(fCurrentClass.top()->fSymbolTable, left->fType);
        if (!leftClass) {
            return false;
        }
        min = this->operatorMatchLeft(*leftClass, left, op, right, returnType, outResult);
    }
    else if (left->fType.fCategory == Type::Category::UNRESOLVED) {
        for (const Type& t : left->fType.fSubtypes) {
            Class* leftClass = this->resolveClass(fCurrentClass.top()->fSymbolTable, t);
            if (!leftClass) {
                return false;
            }
            std::vector<const MethodRef*> matches;
            int cost = this->operatorMatchLeft(*leftClass, left, op, right, returnType, &matches);
            if (cost < min) {
                min = cost;
                outResult->clear();
            }
            if (cost == min) {
                outResult->insert(outResult->end(), matches.begin(), matches.end());
            }
        }
    }
    if (left->fType == right->fType) {
        return min;
    }
    if (right->fType.isClass()) {
        Class* rightClass = this->resolveClass(fCurrentClass.top()->fSymbolTable, right->fType);
        if (!rightClass) {
            return false;
        }
        const Symbol* rightMethods = rightClass->fSymbolTable[operator_text(op)];
        if (rightMethods) {
            switch (rightMethods->fKind) {
                case Symbol::Kind::METHOD: {
                    const Method& m = (const Method&) *rightMethods;
                    if (m.fAnnotations.isClass()) {
                        MethodRef* ref = new MethodRef(&m, type_parameters(*right));
                        m.fMethodRefs.emplace_back(ref);
                        int cost = this->operatorCost(left, *ref, right, returnType);
                        if (cost < min) {
                            outResult->clear();
                            min = cost;
                        }
                        if (cost == min) {
                            outResult->push_back(ref);
                        }
                    }
                    break;
                }
                case Symbol::Kind::METHODS: {
                    for (const Method* m : ((Methods&) *rightMethods).fMethods) {
                        if (m->fAnnotations.isClass()) {
                            MethodRef* ref = new MethodRef(m, type_parameters(*right));
                            m->fMethodRefs.emplace_back(ref);
                            int cost = this->operatorCost(left, *ref, right, returnType);
                            if (cost < min) {
                                outResult->clear();
                                min = cost;
                            }
                            if (cost == min) {
                                outResult->push_back(ref);
                            }
                        }
                    }
                    break;
                }
                default:
                    abort();
            }
        }
    }
    return min;
}

IRNode Compiler::operatorCall(Position position, IRNode* left, const MethodRef& m, IRNode* right) {
    IRNode methodRef;
    std::vector<IRNode> args;
    if (m.fMethod.fAnnotations.isClass()) {
        std::vector<IRNode> children;
        children.push_back(IRNode(position, IRNode::Kind::VOID));
        methodRef = IRNode(position, IRNode::Kind::METHOD_REFERENCE,
                Type(Position(), Type::Category::METHOD, "<method>"), &m,
                std::move(children));
        args.push_back(std::move(*left));
        args.push_back(std::move(*right));
    }
    else {
        std::vector<IRNode> children;
        this->coerce(left, m.owner());
        children.push_back(std::move(*left));
        methodRef = IRNode(position, IRNode::Kind::METHOD_REFERENCE,
                Type(Position(), Type::Category::METHOD, "<method>"), &m,
                std::move(children));
        args.push_back(std::move(*right));
    }
    IRNode result;
    bool success = this->call(std::move(methodRef), std::move(args), &result);
    ASSERT(success);
    return std::move(result);
}

bool Compiler::operatorCall(Position position, IRNode* left, Operator op, IRNode* right,
        IRNode* outResult) {
    std::vector<const MethodRef*> matches;
    if (this->operatorMatch(left, op, right, nullptr, &matches) == INT_MAX) {
        return false;
    }
    if (matches.size() > 1) {
        std::vector<IRNode> children;
        children.push_back(std::move(*left));
        children.push_back(std::move(*right));
        std::set<Type> types;
        for (const MethodRef* m : matches) {
            types.insert(m->returnType());
        }
        *outResult = IRNode(position, IRNode::Kind::UNRESOLVED_BINARY,
                Type(Position(), std::move(types)),
                (uint64_t) op, std::move(children));
        return true;
    }
    ASSERT(matches.size() == 1);
    *outResult = this->operatorCall(position, left, *matches[0], right);
    return true;
}

bool Compiler::convertIndexedAssignment(Position p, IRNode left, Operator op, IRNode right,
        IRNode* out) {
    ASSERT(left.fKind == IRNode::Kind::UNRESOLVED_INDEX);
    ASSERT(left.fChildren.size() == 2);
    if (op == Operator::ASSIGNMENT) {
        std::vector<IRNode> args;
        args.push_back(std::move(left.fChildren[1]));
        args.push_back(std::move(right));
        return this->call(std::move(left.fChildren[0]), "[]:=", std::move(args), nullptr, out);
    }
    ASSERT(is_assignment(op));
    // compound indexed assignment (e.g. foo[bar] += 1), which needs to get converted to
    // foo.[]:=(bar, foo.[](bar) + 1). We need to reuse both the base and the index so they're only
    // evaluated once.
    Position basePosition = left.fChildren[0].fPosition;
    Type baseType = left.fChildren[0].fType;
    std::vector<IRNode> children;
    children.push_back(std::move(left.fChildren[0]));
    uint64_t baseId = ++fReusedValues;
    IRNode base = IRNode(basePosition, IRNode::Kind::REUSED_VALUE_DEFINITION, baseType, baseId,
            std::move(children));
    children.clear();

    Position indexPosition = left.fChildren[1].fPosition;
    Type indexType = left.fChildren[1].fType;
    children.push_back(std::move(left.fChildren[1]));
    uint64_t indexId = ++fReusedValues;
    IRNode index = IRNode(indexPosition, IRNode::Kind::REUSED_VALUE_DEFINITION, indexType, indexId,
            std::move(children));
    IRNode rhsIndex; // in our example, foo.[](bar)
    IRNode baseRef = IRNode(base.fPosition, IRNode::Kind::REUSED_VALUE, baseType, baseId);
    IRNode indexRef = IRNode(index.fPosition, IRNode::Kind::REUSED_VALUE, indexType, indexId);
    if (!this->convertBinary(p, &baseRef, Operator::INDEX, &indexRef, &rhsIndex)) {
        return false;
    }
    IRNode value; // foo.[](bar) + 1
    if (!this->convertBinary(p, &rhsIndex, remove_assignment(op), &right, &value)) {
        return false;
    }
    children.clear();
    children.push_back(std::move(index));
    children.push_back(std::move(value));
    return this->call(std::move(base), "[]:=", std::move(children), nullptr, out);
}

bool Compiler::convertBinary(Position p, IRNode* left, Operator op, IRNode* right, IRNode* out) {
    if (left->fType.fCategory == Type::Category::INT_LITERAL &&
            this->coercionCost(*left, right->fType) != INT_MAX) {
        coerce(left, right->fType);
    }
    if (right->fType.fCategory == Type::Category::INT_LITERAL &&
            this->coercionCost(*right, left->fType) != INT_MAX) {
        coerce(right, left->fType);
    }
    if (op == Operator::EQ || op == Operator::NEQ || op == Operator::IDENTITY ||
            op == Operator::NIDENTITY) {
        IRNode::Kind kind = (op == Operator::EQ || op == Operator::IDENTITY) ? 
                IRNode::Kind::IS_NULL : IRNode::Kind::IS_NONNULL;
        if (left->fKind == IRNode::Kind::NULL_LITERAL) {
            std::vector<IRNode> children;
            if (!this->resolve(right)) {
                return false;
            }
            children.push_back(std::move(*right));
            *out = IRNode(p, kind, Type::Bit(), std::move(children));
            return true;
        }
        if (right->fKind == IRNode::Kind::NULL_LITERAL) {
            std::vector<IRNode> children;
            if (!this->resolve(left)) {
                return false;
            }
            children.push_back(std::move(*left));
            *out = IRNode(p, kind, Type::Bit(), std::move(children));
            return true;
        }
    }
    if (op == Operator::INDEX) {
        // index expressions are always unresolved at first, because it might turn out to be an
        // indexed assignment
        std::vector<const MethodRef*> matches;
        this->operatorMatch(left, op, right, nullptr, &matches);
        std::set<Type> types;
        for (const MethodRef* m : matches) {
            types.insert(m->returnType());
        }
        std::vector<IRNode> children;
        children.push_back(std::move(*left));
        children.push_back(std::move(*right));
        *out = IRNode(p, IRNode::Kind::UNRESOLVED_INDEX,
                Type(p, std::move(types)),
                std::move(children));
        return true;
    }
    IRNode call;
    if (this->operatorCall(p, left, op, right, &call)) {
        *out = std::move(call);
        return true;
    }
    if (op == Operator::ASSIGNMENT) {
        if (left->fKind == IRNode::Kind::UNRESOLVED_INDEX) {
            return this->convertIndexedAssignment(p, std::move(*left), op, std::move(*right), out);
        }
        if (!this->resolve(left)) {
            return false;
        }
        if (!this->coerce(right, left->fType)) {
            return false;
        }
        if (!is_lvalue(*left)) {
            this->error(left->fPosition, "cannot assign to this expression");
            return false;
        }
        std::vector<IRNode> children;
        Type resultType = left->fType;
        children.push_back(std::move(*left));
        children.push_back(std::move(*right));
        *out = IRNode(p, IRNode::Kind::BINARY, std::move(resultType), (uint64_t) op,
                std::move(children));
        return true;
    }
    if (is_assignment(op)) {
        if (left->fKind == IRNode::Kind::UNRESOLVED_INDEX) {
            return this->convertIndexedAssignment(p, std::move(*left), op, std::move(*right), out);
        }
        if (!this->resolve(left)) {
            return false;
        }
        if (!is_lvalue(*left)) {
            this->error(left->fPosition, "cannot assign to this expression");
            return false;
        }
        Position leftP = left->fPosition;
        Type leftT = left->fType;
        std::vector<IRNode> children;
        children.push_back(std::move(*left));
        *left = IRNode(leftP, IRNode::Kind::REUSED_VALUE_DEFINITION, leftT, ++fReusedValues,
                std::move(children));
        IRNode reusedLeft = IRNode(leftP, IRNode::Kind::REUSED_VALUE, leftT, fReusedValues);
        if (!this->convertBinary(p, &reusedLeft, remove_assignment(op), right, right)) {
            return false;
        }
        return this->convertBinary(p, left, Operator::ASSIGNMENT, right, out);
    }
    if (left->fKind == IRNode::Kind::INT && right->fKind == IRNode::Kind::INT) {
        this->foldInts(p, *left, op, *right, out);
        return true;
    }
    if (left->fKind == IRNode::Kind::BIT && right->fKind == IRNode::Kind::BIT) {
        this->foldBits(p, *left, op, *right, out);
        return true;
    }
    if (left->fType == right->fType && left->fType.isBuiltinInt()) {
        Type type;
        switch (op) {
            case Operator::ADD:          // fall through
            case Operator::SUB:          // fall through
            case Operator::MUL:          // fall through
            case Operator::DIV:          // fall through
            case Operator::INTDIV:       // fall through
            case Operator::REM:          // fall through
            case Operator::POW:          // fall through
            case Operator::OR:           // fall through
            case Operator::AND:          // fall through
            case Operator::XOR:          // fall through
            case Operator::BITWISEOR:    // fall through
            case Operator::BITWISEAND:   // fall through
            case Operator::BITWISEXOR:   // fall through
            case Operator::SHIFTLEFT:    // fall through
            case Operator::SHIFTRIGHT:   // fall through
            case Operator::ASSIGNMENT:   // fall through
                type = left->fType;
                break;
            case Operator::EQ:           // fall through
            case Operator::NEQ:          // fall through
            case Operator::IDENTITY:     // fall through
            case Operator::NIDENTITY:    // fall through
            case Operator::GT:           // fall through
            case Operator::LT:           // fall through
            case Operator::GTEQ:         // fall through
            case Operator::LTEQ:
                type = Type::BuiltinBit();
                break;
            default:
                abort();
        }
        std::vector<IRNode> children;
        children.push_back(std::move(*left));
        children.push_back(std::move(*right));
        *out = IRNode(p, IRNode::Kind::BINARY, type, (uint64_t) op, std::move(children));
        return true;
    }
    this->error(p, String("'") + operator_text(op) + "' cannot operate on '" + left->fType.fName +
            "', '" + right->fType.fName + "'");
    return false;
}

bool Compiler::convertBinary(const ASTNode& b, IRNode* out) {
    ASSERT(b.fKind == ASTNode::Kind::BINARY);
    ASSERT(b.fChildren.size() == 2);
    IRNode left;
    if (!this->convertExpression(b.fChildren[0], &left)) {
        return false;
    }
    IRNode right;
    if (!this->convertExpression(b.fChildren[1], &right)) {
        return false;
    }
    return this->convertBinary(b.fPosition, &left, (Operator) b.fValue.fInt, &right, out);
}

void Compiler::addMethod(Position p, const SymbolTable& st, Method* m,
        const std::vector<Type>& types, std::vector<IRNode>* methods) {
    for (const IRNode& n : *methods) {
        if (n.fKind == IRNode::Kind::METHOD_REFERENCE &&
                ((MethodRef*) n.fValue.fPtr)->fMethod.matches(*m)) {
            return;
        }
    }
    MethodRef* ref = new MethodRef(m, types);
    m->fMethodRefs.emplace_back(ref);
    methods->push_back(IRNode(p, IRNode::Kind::METHOD_REFERENCE,
            Type(Position(), Type::Category::METHOD, "<method>"), ref));
}

static bool is_heritable(Method* m) {
    return m->fMethodKind != Method::Kind::INIT;
}

void Compiler::addAllMethods(Position p, const SymbolTable& st, const IRNode* target,
        const String& name, std::vector<IRNode>* methods, const Class* startClass) {
    std::vector<Type> types;
    if (target) {
        types = type_parameters(*target);
    }
    for (const SymbolTable* parent : st.fParents) {
        this->addAllMethods(p, *parent, target, name, methods, startClass);
    }
    auto found = st.fSymbols.find(name);
    if (found != st.fSymbols.end()) {
        Symbol* s = found->second;
        switch (s->fKind) {
            case Symbol::Kind::METHOD:
                if (st.fClass == startClass || is_heritable((Method*) s)) {
                    this->addMethod(p, st, (Method*) s, types, methods);
                }
                break;
            case Symbol::Kind::METHODS:
                for (const auto& m : ((Methods*) s)->fMethods) {
                    if (st.fClass == startClass || is_heritable(m)) {
                        this->addMethod(p, st, m, types, methods);
                    }
                }
                break;
            default:
                break;
        }
    }
}

bool Compiler::symbolRef(Position p, const SymbolTable& st, Symbol* symbol, IRNode* out,
        IRNode* target) {
    switch (symbol->fKind) {
        case Symbol::Kind::CLASS:
            *out = IRNode(p, IRNode::Kind::TYPE_REFERENCE,
                    Type(Position(), Type::Category::CLASS, "<type>"), &((Class*) symbol)->fType);
            return true;
        case Symbol::Kind::TYPE:
            ASSERT(!target);
            *out = IRNode(p, IRNode::Kind::TYPE_REFERENCE,
                    Type(Position(), Type::Category::CLASS, "<type>"), symbol);
            return true;
        case Symbol::Kind::METHOD: {
            std::vector<Type> types;
            if (target) {
                types = type_parameters(*target);
            }
            std::vector<IRNode> children;
            children.push_back(target ? std::move(*target) : IRNode(p, IRNode::Kind::VOID));
            this->addAllMethods(p, st, &children[0], symbol->fName, &children, st.fClass);
            if (children.size() == 2) {
                MethodRef* ref = new MethodRef((Method*) symbol, types);
                ((Method*) symbol)->fMethodRefs.emplace_back(ref);
                *out = IRNode(p, IRNode::Kind::METHOD_REFERENCE,
                        Type(Position(), Type::Category::METHOD, "<method>"), ref);
                out->fChildren.push_back(target ? std::move(children[0]) :
                        IRNode(p, IRNode::Kind::VOID));
                return true;
            }
            *out = IRNode(p, IRNode::Kind::UNRESOLVED_METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), &st, std::move(children));
            return true;
        }
        case Symbol::Kind::METHODS: {
            std::vector<IRNode> children;
            children.push_back(target ? std::move(*target) : IRNode(p, IRNode::Kind::VOID));
            this->addAllMethods(p, st, target, symbol->fName, &children, st.fClass);
            *out = IRNode(p, IRNode::Kind::UNRESOLVED_METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), &st, std::move(children));
            return true;
        }
        case Symbol::Kind::FIELD: {
            if (!this->inferFieldType((Field*) symbol)) {
                return false;
            }
            std::vector<IRNode> children;
            if (target) {
                if (target->fKind == IRNode::Kind::SUPER) {
                    this->error(target->fPosition,
                            "'super' can only be used as part of a method call");
                }
                Type effectiveType = ((Field*) symbol)->fType;
                if (target->fType.fCategory == Type::Category::GENERIC) {
                    ASSERT(target->fType.fSubtypes.size() >= 2);
                    std::map<String, Type> typeMap;
                    const Type& owner = target->fType.fSubtypes[0];
                    Class* cl = this->resolveClass(*fSymbolTable, owner);
                    if (cl) {
                        for (int i = 1; i < target->fType.fSubtypes.size(); ++i) {
                            typeMap[cl->fName + "." + cl->fParameters[i - 1].fName] =
                                    target->fType.fSubtypes[i];
                        }
                        effectiveType = ((Field*) symbol)->fType.remap(typeMap);
                    }
                }
                children.push_back(std::move(*target));
                *out = IRNode(p, IRNode::Kind::FIELD_REFERENCE, ((Field*) symbol)->fType, symbol,
                        std::move(children));
                if (effectiveType != out->fType) {
                    if (!this->cast(p, out, false, effectiveType)) {
                        return false;
                    }
                }
            }
            else {
                children.push_back(IRNode(p, IRNode::Kind::SELF, fCurrentClass.top()->fType));
                *out = IRNode(p, IRNode::Kind::FIELD_REFERENCE, ((Field*) symbol)->fType, symbol,
                        std::move(children));
            }
            return true;
        }
        case Symbol::Kind::VARIABLE:
            ASSERT(!target);
            *out = IRNode(p, IRNode::Kind::VARIABLE_REFERENCE, ((Variable*) symbol)->fType, symbol);
            return true;
        case Symbol::Kind::PACKAGE:
            *out = IRNode(p, IRNode::Kind::PACKAGE_REFERENCE,
                    Type(Position(), Type::Category::PACKAGE, "<package>"), symbol);
            return true;
        case Symbol::Kind::GENERIC_PARAMETER:
            abort();
    }
}

bool Compiler::convertIdentifier(const ASTNode& i, IRNode* out) {
    ASSERT(i.fKind == ASTNode::Kind::IDENTIFIER);
    ASSERT(!i.fChildren.size());
    Symbol* symbol = (*fSymbolTable)[i.fText];
    if (symbol) {
        return this->symbolRef(i.fPosition, *fSymbolTable, symbol, out);
    }
    else {
        this->error(i.fPosition, "unknown identifier '" + i.fText + "'");
        return false;
    }
}

bool Compiler::convertCall(const ASTNode& c, IRNode* out) {
    ASSERT(c.fKind == ASTNode::Kind::CALL);
    ASSERT(c.fChildren.size() >= 1);
    std::vector<IRNode> args;
    for (auto& child : c.fChildren) {
        IRNode arg;
        if (!this->convertExpression(child, &arg)) {
            return false;
        }
        args.push_back(std::move(arg));
    }
    ASSERT(args.size());
    IRNode m(std::move(args[0]));
    args.erase(args.begin());
    return this->call(std::move(m), std::move(args), out);
}

bool Compiler::convertPrefix(Position p, Operator op, IRNode base, IRNode* out) {
    if (base.fType.isClass()) {
        String name = operator_text(op);
        Class* cl = this->resolveClass(fCurrentClass.top()->fSymbolTable, base.fType);
        if (!cl) {
            return false;
        }
        Symbol* s = cl->fSymbolTable[name];
        if (s) {
            const Method* m = nullptr;
            switch (s->fKind) {
                case Symbol::Kind::METHOD:
                    m = (Method*) s;
                    ASSERT(m->fParameters.size() == 0);
                    ASSERT(!m->fAnnotations.isClass());
                    break;
                case Symbol::Kind::METHODS:
                    for (const auto& test : ((Methods*) s)->fMethods) {
                        if (!test->fAnnotations.isClass() && test->fParameters.size() == 0) {
                            m = test;
                            break;
                        }
                    }
                    break;
                default:
                    abort();
            }
            if (m) {
                MethodRef* ref = new MethodRef(m, type_parameters(base));
                m->fMethodRefs.emplace_back(ref);
                std::vector<IRNode> children;
                children.push_back(std::move(base));
                IRNode methodRef(p, IRNode::Kind::METHOD_REFERENCE,
                        Type(Position(), Type::Category::METHOD, "<method>"), ref,
                        std::move(children));
                return this->call(std::move(methodRef), {}, out);
            }
        }
    }
    switch (op) {
        case Operator::SUB:
            switch (base.fKind) {
                case IRNode::Kind::INT:
                    *out = IRNode(p, IRNode::Kind::NEGATED_INT, base.fType, base.fValue.fInt);
                    return true;
                case IRNode::Kind::NEGATED_INT:
                    *out = IRNode(p, IRNode::Kind::INT, base.fType, base.fValue.fInt);
                    return true;
                default:
                    if (base.fType.isBuiltinNumber()) {
                        Type type = base.fType;
                        std::vector<IRNode> children;
                        children.push_back(std::move(base));
                        *out = IRNode(p, IRNode::Kind::PREFIX, type, (uint64_t) Operator::SUB,
                                std::move(children));
                        return true;
                    }
            }
            this->error(base.fPosition, "expected a number, but found '" + base.fType.fName +
                    "'");
            return false;
        case Operator::BITWISENOT:
            if (base.fType.isBuiltinNumber()) {
                Type type = base.fType;
                std::vector<IRNode> children;
                children.push_back(std::move(base));
                *out = IRNode(p, IRNode::Kind::PREFIX, type, (uint64_t) op,
                        std::move(children));
                return true;
            }
            else {
                this->error(base.fPosition, "expected a number, but found '" + base.fType.fName +
                        "'");
                return false;
            }
        case Operator::NOT: {
            if (!this->coerce(&base, Type::BuiltinBit())) {
                return false;
            }
            Type type = base.fType;
            std::vector<IRNode> children;
            children.push_back(std::move(base));
            *out = IRNode(p, IRNode::Kind::PREFIX, type, (uint64_t) op,
                    std::move(children));
            return true;
        }
        default:
            abort();
    }
}

bool Compiler::convertPrefix(const ASTNode& p, IRNode* out) {
    ASSERT(p.fKind == ASTNode::Kind::PREFIX);
    ASSERT(p.fChildren.size() == 1);
    IRNode base;
    if (!this->convertExpression(p.fChildren[0], &base)) {
        return false;
    }
    Operator op = (Operator) p.fValue.fInt;
    return this->convertPrefix(p.fPosition, op, std::move(base), out);
}

bool Compiler::convertDot(const ASTNode& d, IRNode* out) {
    ASSERT(d.fKind == ASTNode::Kind::DOT);
    ASSERT(d.fChildren.size() == 1);
    IRNode left;
    if (!this->convertExpression(d.fChildren[0], &left)) {
        return false;
    }
    if (left.fKind != IRNode::Kind::SUPER && !this->resolve(&left)) {
        return false;
    }
    String name;
    SymbolTable* st;
    switch (left.fKind) {
        case IRNode::Kind::TYPE_REFERENCE: {
            Type& t = *((Type*) left.fValue.fPtr);
            Class* cl = this->resolveClass(*fSymbolTable, t);
            if (!cl) {
                return false;
            }
            st = &cl->fSymbolTable;
            name = "class " + cl->fName;
            break;
        }
        case IRNode::Kind::PACKAGE_REFERENCE: {
            Package& p = *((Package*) left.fValue.fPtr);
            st = &p.fSymbolTable;
            name = "package " + p.fName;
            break;
        }
        case IRNode::Kind::SUPER: {
            Class* super = this->resolveClass(fCurrentClass.top()->fSymbolTable,
                    fCurrentClass.top()->fSuper);
            ASSERT(super);
            st = &super->fSymbolTable;
            name = "class " + super->fName;
            break;
        }
        default:
            if (left.fType.isClass()) {
                Class* cl = this->resolveClass(fCurrentClass.top()->fSymbolTable, left.fType);
                if (!cl) {
                    return false;
                }
                st = &cl->fSymbolTable;
                name = "class " + cl->fName;
            }
            else {
                this->error(d.fPosition, "cannot use '.' on value of type '" + left.fType.fName +
                        "'");
            }
    }
    Symbol* symbol = (*st)[d.fText];
    if (symbol) {
        return this->symbolRef(d.fPosition, *st, symbol, out, &left);
    }
    else {
        this->error(d.fPosition, name + " does not have a member named '" + d.fText + "'");
        return false;
    }
}

bool Compiler::convertSelf(const ASTNode& s, IRNode* out) {
    ASSERT(s.fKind == ASTNode::Kind::SELF);
    if (fCurrentMethod.top()->fAnnotations.isClass()) {
        this->error(s.fPosition, "cannot reference 'self' from a @class method");
        return false;
    }
    *out = IRNode(s.fPosition, IRNode::Kind::SELF, fCurrentClass.top()->fType);
    return true;
}

bool Compiler::convertSuper(const ASTNode& s, IRNode* out) {
    ASSERT(s.fKind == ASTNode::Kind::SUPER);
    if (fCurrentMethod.top()->fAnnotations.isClass()) {
        this->error(s.fPosition, "cannot reference 'super' from a @class method");
        return false;
    }
    *out = IRNode(s.fPosition, IRNode::Kind::SUPER, fCurrentClass.top()->fSuper);
    return true;
}

bool Compiler::convertString(const ASTNode& s, IRNode* out) {
    *out = IRNode(s.fPosition, IRNode::Kind::STRING, Type::PandaString(), s.fText);
    return true;
}

bool Compiler::convertRange(const ASTNode& r, IRNode* out) {
    ASSERT(r.fKind == ASTNode::Kind::RANGE_EXCLUSIVE || r.fKind == ASTNode::Kind::RANGE_INCLUSIVE);
    ASSERT(r.fChildren.size() == 3);
    IRNode start;
    if (r.fChildren[0].fKind == ASTNode::Kind::VOID) {
        start = IRNode(r.fPosition, IRNode::Kind::NULL_LITERAL, Type::Null());
    }
    else if (!this->convertExpression(r.fChildren[0], &start)) {
        return false;
    }
    IRNode end;
    if (r.fChildren[1].fKind == ASTNode::Kind::VOID) {
        end = IRNode(r.fPosition, IRNode::Kind::NULL_LITERAL, Type::Null());
    }
    else if (!this->convertExpression(r.fChildren[1], &end)) {
        return false;
    }
    IRNode step;
    if (r.fChildren[2].fKind == ASTNode::Kind::VOID) {
        step = IRNode(r.fPosition, IRNode::Kind::NULL_LITERAL, Type::Null());
    }
    else if (!this->convertExpression(r.fChildren[2], &step)) {
        return false;
    }
    std::vector<IRNode> children;
    children.push_back(std::move(start));
    children.push_back(std::move(end));
    children.push_back(std::move(step));
    *out = IRNode(r.fPosition, IRNode::Kind::UNRESOLVED_RANGE,
            Type(r.fPosition, Type::Category::UNRESOLVED, "<unresolved range>"),
            r.fKind == ASTNode::Kind::RANGE_INCLUSIVE,
            std::move(children));
    return true;
}

bool Compiler::doConvertExpression(const ASTNode& e, IRNode* out) {
    switch (e.fKind) {
        case ASTNode::Kind::ARROW:
            return this->convertArrow(e, out);
        case ASTNode::Kind::BINARY:
            return this->convertBinary(e, out);
        case ASTNode::Kind::BIT:
            *out = IRNode(e.fPosition, IRNode::Kind::BIT, Type::BuiltinBit(), e.fValue.fBool);
            return true;
        case ASTNode::Kind::CALL: {
            bool result = this->convertCall(e, out);
            if (result && out->fType == Type::Void()) {
                ASSERT(out->fKind == IRNode::Kind::CALL);
                ASSERT(out->fChildren.size() >= 1);
                ASSERT(out->fChildren[0].fKind == IRNode::Kind::METHOD_REFERENCE);
                MethodRef* m = (MethodRef*) out->fChildren[0].fValue.fPtr;
                this->error(e.fPosition, "method '" + m->fMethod.fName +
                        "' does not return a value");
                return false;
            }
            return result;
        }
        case ASTNode::Kind::DOT:
            return this->convertDot(e, out);
        case ASTNode::Kind::IDENTIFIER:
            return this->convertIdentifier(e, out);
        case ASTNode::Kind::INT:
            *out = IRNode(e.fPosition, IRNode::Kind::INT, Type::IntLiteral(), e.fValue.fInt);
            return true;
        case ASTNode::Kind::PREFIX:
            return this->convertPrefix(e, out);
        case ASTNode::Kind::TRUE_LITERAL:
            *out = IRNode(e.fPosition, IRNode::Kind::BIT, Type::BuiltinBit(), true);
            return true;
        case ASTNode::Kind::FALSE_LITERAL:
            *out = IRNode(e.fPosition, IRNode::Kind::BIT, Type::BuiltinBit(), false);
            return true;
        case ASTNode::Kind::NULL_LITERAL:
            *out = IRNode(e.fPosition, IRNode::Kind::NULL_LITERAL, Type::Null());
            return true;
        case ASTNode::Kind::SELF:
            return this->convertSelf(e, out);
        case ASTNode::Kind::SUPER:
            return this->convertSuper(e, out);
        case ASTNode::Kind::CLASS_TYPE:
            return this->convertType(e, out);
        case ASTNode::Kind::STRING:
            return this->convertString(e, out);
        case ASTNode::Kind::RANGE_EXCLUSIVE: // fall through
        case ASTNode::Kind::RANGE_INCLUSIVE:
            return this->convertRange(e, out);
        default:
            printf("unhandled expression: %s\n", e.description().c_str());
            abort();
    }
}

bool Compiler::convertExpression(const ASTNode& e, IRNode* out) {
    bool result = this->doConvertExpression(e, out);
    ASSERT(!result || out->fType.fCategory != Type::Category::VOID);
    return result;
}

bool Compiler::convertIf(const ASTNode& i, IRNode* out) {
    ASSERT(i.fKind == ASTNode::Kind::IF);
    ASSERT(i.fChildren.size() == 2 || i.fChildren.size() == 3);
    IRNode test;
    if (this->convertExpression(i.fChildren[0], &test)) {
        if (!this->coerce(&test, Type::Bit())) {
            return false;
        }
        Class* bit = fClasses["panda.core.Bit"];
        ASSERT(bit);
        Field* value = (Field*) bit->fSymbolTable["value"];
        std::vector<IRNode> children;
        children.push_back(std::move(test));
        test = IRNode(i.fPosition, IRNode::Kind::FIELD_REFERENCE, Type::BuiltinBit(), value,
                std::move(children));
    }
    IRNode ifTrue;
    this->convertStatement(i.fChildren[1], &ifTrue);
    std::vector<IRNode> children;
    children.push_back(std::move(test));
    children.push_back(std::move(ifTrue));
    if (i.fChildren.size() == 2) {
        *out = IRNode(i.fPosition, IRNode::Kind::IF, std::move(children));
        return true;
    }
    IRNode ifFalse;
    this->convertStatement(i.fChildren[2], &ifFalse);
    children.push_back(std::move(ifFalse));
    *out = IRNode(i.fPosition, IRNode::Kind::IF, std::move(children));
    return true;
}

bool Compiler::convertWhile(const ASTNode& w, IRNode* out) {
    ASSERT(w.fKind == ASTNode::Kind::WHILE);
    ASSERT(w.fChildren.size() == 2);
    AutoLoop loop(this, w.fText);
    IRNode test;
    if (this->convertExpression(w.fChildren[0], &test)) {
        if (!this->coerce(&test, Type::Bit())) {
            return false;
        }
        Class* bit = fClasses["panda.core.Bit"];
        ASSERT(bit);
        Field* value = (Field*) bit->fSymbolTable["value"];
        std::vector<IRNode> children;
        children.push_back(std::move(test));
        test = IRNode(w.fPosition, IRNode::Kind::FIELD_REFERENCE, Type::BuiltinBit(), value,
                std::move(children));
    }
    IRNode block;
    this->convertBlock(w.fChildren[1], &block);
    std::vector<IRNode> children;
    children.push_back(std::move(test));
    children.push_back(std::move(block));
    *out = IRNode(w.fPosition, IRNode::Kind::WHILE, w.fText, std::move(children));
    return true;
}

bool Compiler::convertDo(const ASTNode& d, IRNode* out) {
    ASSERT(d.fKind == ASTNode::Kind::DO);
    ASSERT(d.fChildren.size() == 2);
    AutoLoop loop(this, d.fText);
    IRNode block;
    this->convertBlock(d.fChildren[0], &block);
    IRNode test;
    if (this->convertExpression(d.fChildren[1], &test)) {
        if (!this->coerce(&test, Type::Bit())) {
            return false;
        }
        Class* bit = fClasses["panda.core.Bit"];
        ASSERT(bit);
        Field* value = (Field*) bit->fSymbolTable["value"];
        std::vector<IRNode> children;
        children.push_back(std::move(test));
        test = IRNode(d.fPosition, IRNode::Kind::FIELD_REFERENCE, Type::BuiltinBit(), value,
                std::move(children));
    }
    std::vector<IRNode> children;
    children.push_back(std::move(block));
    children.push_back(std::move(test));
    *out = IRNode(d.fPosition, IRNode::Kind::DO, d.fText, std::move(children));
    return true;
}

bool Compiler::convertLoop(const ASTNode& l, IRNode* out) {
    ASSERT(l.fKind == ASTNode::Kind::LOOP);
    ASSERT(l.fChildren.size() == 1);
    AutoLoop loop(this, l.fText);
    IRNode block;
    this->convertBlock(l.fChildren[0], &block);
    std::vector<IRNode> children;
    children.push_back(std::move(block));
    *out = IRNode(l.fPosition, IRNode::Kind::LOOP, l.fText, std::move(children));
    return true;
}

bool Compiler::convertFor(const ASTNode& f, IRNode* out) {
    ASSERT(f.fKind == ASTNode::Kind::FOR);
    ASSERT(f.fChildren.size() == 3);
    AutoSymbolTable st(this);
    AutoLoop loop(this, f.fText);
    IRNode list;
    if (!this->convertExpression(f.fChildren[1], &list)) {
        return false;
    }
    if (!this->resolve(&list)) {
        return false;
    }
    if (list.fType.fCategory == Type::Category::GENERIC &&
            list.fType.fSubtypes[0].fName == "panda.core.Range" &&
            list.fType.fSubtypes[1].isNumeric()) {
        IRNode target;
        Type indexType = list.fType.fSubtypes[1];
        if (indexType.fCategory == Type::Category::NULLABLE) {
            ASSERT(indexType.fSubtypes.size() == 1);
            indexType = indexType.fSubtypes[0];
        }
        if (!this->convertTarget(f.fChildren[0], nullptr, &indexType, &target)) {
            return false;
        }
        IRNode block;
        this->convertBlock(f.fChildren[2], &block);
        std::vector<IRNode> children;
        children.push_back(std::move(target));
        children.push_back(std::move(list));
        children.push_back(std::move(block));
        *out = IRNode(f.fPosition, IRNode::Kind::RANGE_FOR, f.fText, std::move(children));
        return true;
    }
    else {
        this->error(list.fPosition, "'for' loop expected a Range or Iterable, but found '" +
                list.fType.description() + "'");
        return false;
    }
}


bool Compiler::resolve(IRNode* value) {
    switch (value->fKind) {
        case IRNode::Kind::UNRESOLVED_METHOD_REFERENCE:
            ASSERT(value->fChildren.size() >= 2);
            ASSERT(value->fChildren[1].fKind == IRNode::Kind::METHOD_REFERENCE);
            this->error(value->fPosition, "ambiguous reference to method '" +
                    ((Method*) value->fChildren[1].fValue.fPtr)->fName + "'");
            return false;
        case IRNode::Kind::UNRESOLVED_CALL: {
            std::vector<const MethodRef*> methods;
            for (int i = 1; i < value->fChildren[0].fChildren.size(); ++i) {
                const auto& m = value->fChildren[0].fChildren[i];
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((MethodRef*) m.fValue.fPtr);
            }
            this->reportAmbiguousMatch(value->fPosition, methods, value->fChildren[1].fChildren,
                    nullptr);
            return false;
        }
        case IRNode::Kind::UNRESOLVED_INDEX: {
            IRNode call;
            if (this->operatorCall(value->fPosition, &value->fChildren[0], Operator::INDEX,
                    &value->fChildren[1], &call)) {
                *value = std::move(call);
                return this->resolve(value);
            }
            else {
                this->error(value->fPosition, "'[]' cannot operate on '" +
                        value->fChildren[0].fType.fName + "', '" + value->fChildren[1].fType.fName +
                        "'");
                return false;
            }
        }
        case IRNode::Kind::INT:
            return this->coerce(value, Type::Int());
        case IRNode::Kind::NEGATED_INT:
            return this->coerce(value, Type::Int());
        case IRNode::Kind::PREFIX:
            ASSERT(value->fChildren.size() == 1);
            if (!this->resolve(&value->fChildren[0])) {
                return false;
            }
            return this->convertPrefix(value->fPosition, (Operator) value->fValue.fInt,
                    std::move(value->fChildren[0]), value);
        case IRNode::Kind::UNRESOLVED_RANGE: {
            return this->coerce(value, variable_type(*value));
        }
        case IRNode::Kind::SUPER:
            this->error(value->fPosition, "'super' can only be used as part of a method call");
            return false;
        default:
            return true;
    }
}

bool Compiler::convertTarget(const ASTNode& t, IRNode* value, const Type* valueType, IRNode* out) {
    ASSERT(!value || !valueType);
    switch (t.fKind) {
        case ASTNode::Kind::IDENTIFIER: {
            Type type;
            if (t.fChildren.size() == 1) {
                type = fScanner.convertType(t.fChildren[0], *fSymbolTable);
                this->resolveType(*fSymbolTable, &type);
            }
            else if (value) {
                if (!this->resolve(value)) {
                    return false;
                }
                type = variable_type(*value);
            }
            else if (valueType) {
                type = *valueType;
            }
            else {
                this->error(t.fPosition, "declaration has neither a type nor a value");
                return false;
            }
            if (value && !this->coerce(value, type)) {
                return false;
            }
            std::unique_ptr<Variable> v = std::unique_ptr<Variable>(
                    new Variable(t.fPosition, t.fText, std::move(type)));
            *out = IRNode(t.fPosition, IRNode::Kind::VARIABLE_REFERENCE, v.get());
            fSymbolTable->add(std::move(v));
            return true;
        }
        case ASTNode::Kind::TUPLE_TARGET:
            abort();
        default:
            abort();
    }
}

bool Compiler::convertDeclaration(const ASTNode& d, IRNode* out) {
    ASSERT(d.fKind == ASTNode::Kind::DECLARATION);
    ASSERT(d.fChildren.size() == 1 || d.fChildren.size() == 2);
    IRNode value;
    IRNode* valuePtr;
    if (d.fChildren.size() == 2) {
        if (!this->convertExpression(d.fChildren[1], &value)) {
            return false;
        }
        valuePtr = &value;
    }
    else {
        valuePtr = nullptr;
    }
    IRNode target;
    if (!this->convertTarget(d.fChildren[0], valuePtr, nullptr, &target)) {
        return false;
    }
    std::vector<IRNode> children;
    children.push_back(std::move(target));
    if (valuePtr) {
        children.push_back(std::move(*valuePtr));
    }
    *out = IRNode(d.fPosition, IRNode::Kind::DECLARATION, std::move(children));
    return true;
}

bool Compiler::convertVar(const ASTNode& v, IRNode* out) {
    ASSERT(v.fKind == ASTNode::Kind::VAR ||
           v.fKind == ASTNode::Kind::DEF ||
           v.fKind == ASTNode::Kind::PROPERTY ||
           v.fKind == ASTNode::Kind::CONSTANT);
    std::vector<IRNode> decls;
    for (const auto& astDecl : v.fChildren) {
        IRNode decl;
        if (!this->convertDeclaration(astDecl, &decl)) {
            return false;
        }
        decls.push_back(std::move(decl));
    }
    IRNode::Kind kind;
    switch (v.fKind) {
        case ASTNode::Kind::VAR:      kind = IRNode::Kind::VAR;      break;
        case ASTNode::Kind::DEF:      kind = IRNode::Kind::DEF;      break;
        case ASTNode::Kind::PROPERTY: kind = IRNode::Kind::PROPERTY; break;
        case ASTNode::Kind::CONSTANT: kind = IRNode::Kind::CONSTANT; break;
        default: abort();
    }
    *out = IRNode(v.fPosition, kind, std::move(decls));
    return true;
}

bool Compiler::convertReturn(const ASTNode& r, IRNode* out) {
    ASSERT(r.fKind == ASTNode::Kind::RETURN);
    if (r.fChildren.size() == 1) {
        IRNode converted;
        if (!this->convertExpression(r.fChildren[0], &converted)) {
            return false;
        }
        if (!this->coerce(&converted, fCurrentMethod.top()->fReturnType)) {
            return false;
        }
        std::vector<IRNode> children;
        children.push_back(std::move(converted));
        *out = IRNode(r.fPosition, IRNode::Kind::RETURN, std::move(children));
        return true;
    }
    ASSERT(r.fChildren.size() == 0);
    *out = IRNode(r.fPosition, IRNode::Kind::RETURN);
    return true;
}

bool Compiler::convertBreak(const ASTNode& b, IRNode* out) {
    ASSERT(b.fKind == ASTNode::Kind::BREAK);
    if (b.fText.size()) {
        bool found = false;
        for (const String& l : fLoops) {
            if (l == b.fText) {
                found = true;
                break;
            }
        }
        if (!found) {
            this->error(b.fPosition, "'break " + b.fText + "' must be inside a loop labelled '" +
                    b.fText + ":'");
        }
    }
    else if (!fLoops.size()) {
        this->error(b.fPosition, "'break' must be inside a loop");
    }
    *out = IRNode(b.fPosition, IRNode::Kind::BREAK, b.fText);
    return true;
}

bool Compiler::convertContinue(const ASTNode& c, IRNode* out) {
    ASSERT(c.fKind == ASTNode::Kind::CONTINUE);
    if (c.fText.size()) {
        bool found = false;
        for (const String& l : fLoops) {
            if (l == c.fText) {
                found = true;
                break;
            }
        }
        if (!found) {
            this->error(c.fPosition, "'continue " + c.fText + "' must be inside a loop labelled '" +
                    c.fText + ":'");
        }
    }
    else if (!fLoops.size()) {
        this->error(c.fPosition, "'continue' must be inside a loop");
    }
    *out = IRNode(c.fPosition, IRNode::Kind::CONTINUE, c.fText);
    return true;
}

bool Compiler::convertAssert(const ASTNode& a, IRNode* out) {
    ASSERT(a.fKind == ASTNode::Kind::ASSERT);
    ASSERT(a.fChildren.size() == 1 || a.fChildren.size() == 2);
    IRNode test;
    if (this->convertExpression(a.fChildren[0], &test)) {
        if (!this->coerce(&test, Type::Bit())) {
            return false;
        }
        Class* bit = fClasses["panda.core.Bit"];
        ASSERT(bit);
        Field* value = (Field*) bit->fSymbolTable["value"];
        std::vector<IRNode> children;
        children.push_back(std::move(test));
        test = IRNode(a.fPosition, IRNode::Kind::FIELD_REFERENCE, Type::BuiltinBit(), value,
                std::move(children));
    }
    else {
        return false;
    }
    std::vector<IRNode> children;
    children.push_back(std::move(test));
    if (a.fChildren.size() == 2) {
        IRNode msg;
        if (!this->convertExpression(a.fChildren[1], &msg)) {
            return false;
        }
        if (!this->coerce(&msg, Type::PandaString())) {
            return false;
        }
        children.push_back(std::move(msg));
    }
    *out = IRNode(a.fPosition, IRNode::Kind::ASSERT, std::move(children));
    return true;
}

bool Compiler::convertStatement(const ASTNode& s, IRNode* out) {
    switch (s.fKind) {
        case ASTNode::Kind::BLOCK:
            return this->convertBlock(s, out);
        case ASTNode::Kind::BINARY:
            return this->convertBinary(s, out);
        case ASTNode::Kind::CALL: {
            if (this->convertCall(s, out)) {
                this->resolve(out);
            }
            if (out->fKind == IRNode::Kind::CAST) {
                ASSERT(out->fChildren.size() == 1);
                *out = std::move(out->fChildren[0]);
            }
            return true;
        }
        case ASTNode::Kind::IF:
            return this->convertIf(s, out);
        case ASTNode::Kind::WHILE:
            return this->convertWhile(s, out);
        case ASTNode::Kind::DO:
            return this->convertDo(s, out);
        case ASTNode::Kind::LOOP:
            return this->convertLoop(s, out);
        case ASTNode::Kind::FOR:
            return this->convertFor(s, out);
        case ASTNode::Kind::RETURN:
            return this->convertReturn(s, out);
        case ASTNode::Kind::BREAK:
            return this->convertBreak(s, out);
        case ASTNode::Kind::CONTINUE:
            return this->convertContinue(s, out);
        case ASTNode::Kind::ASSERT:
            return this->convertAssert(s, out);
        case ASTNode::Kind::VAR:      // fall through
        case ASTNode::Kind::DEF:      // fall through
        case ASTNode::Kind::PROPERTY: // fall through
        case ASTNode::Kind::CONSTANT:
            return this->convertVar(s, out);
        default:
            printf("unhandled statement: %s\n", s.description().c_str());
            abort();
    }
}

bool Compiler::convertBlock(const ASTNode& b, IRNode* out) {
    ASSERT(b.fKind == ASTNode::Kind::BLOCK);
    AutoSymbolTable st(this);
    std::vector<IRNode> statements;
    for (const auto& s : b.fChildren) {
        IRNode converted;
        if (!this->convertStatement(s, &converted)) {
            return false;
        }
        statements.push_back(std::move(converted));
    }
    *out = IRNode(b.fPosition, IRNode::Kind::BLOCK, std::move(statements));
    return true;
}

bool Compiler::convertParameter(const ASTNode& p, IRNode* out) {
    ASSERT(p.fKind == ASTNode::Kind::PARAMETER);
    ASSERT(p.fChildren.size() == 1);
    IRNode type;
    if (!this->convertType(p.fChildren[0], &type)) {
        return false;
    }
    std::vector<IRNode> children;
    children.push_back(std::move(type));
    *out = IRNode(p.fPosition, IRNode::Kind::PARAMETER, p.fText, std::move(children));
    return true;
}

Type* Compiler::typePointer(const Type& type) {
    auto found = fTypes.find(type.fName);
    if (found != fTypes.end()) {
        return found->second.get();
    }
    Type* result = new Type(type);
    fTypes[result->fName] = std::unique_ptr<Type>(result);
    return result;
}

bool Compiler::convertType(const ASTNode& t, IRNode* out) {
    Type converted = fScanner.convertType(t, *fSymbolTable);
    this->resolveType(*fSymbolTable, &converted);
    *out = IRNode(converted.fPosition, IRNode::Kind::TYPE_REFERENCE, Type::Class(),
            this->typePointer(converted));
    return true;
}

IRNode Compiler::defaultValue(Position p, const Type& type) {
    if (type.isNumeric()) {
        return IRNode(p, IRNode::Kind::INT, Type::IntLiteral(), (uint64_t) 0);
    }
    if (type == Type::Bit()) {
        return IRNode(p, IRNode::Kind::BIT, Type::BuiltinBit(), false);
    }
    return IRNode(p, IRNode::Kind::VOID);
}

void Compiler::compile(SymbolTable& parent, const Method& method) {
    if (method.fBody.fKind == ASTNode::Kind::VOID) {
        fCodeGenerator.writeMethodDeclaration(method, *this);
        return;
    }
    SymbolTable symbols(&parent, &method.fOwner);
    fSymbolTable = &symbols;
    for (const auto& p : method.fParameters) {
        symbols.add(std::unique_ptr<Symbol>(new Variable(method.fPosition, p.fName, p.fType,
                Variable::Storage::PARAMETER)));
    }
    IRNode block;
    if (!this->convertBlock(method.fBody, &block)) {
        fSymbolTable = nullptr;
        return;
    }
    if (method.fMethodKind == Method::Kind::INIT) {
        auto insertPoint = block.fChildren.begin();
        for (const auto& field : method.fOwner.fFields) {
            if (field->fAnnotations.isClass()) {
                continue;
            }
            IRNode* value = field->fValue;
            IRNode defaultValue;
            if (!value) {
                defaultValue = this->defaultValue(field->fPosition, field->fType);
                if (defaultValue.fKind != IRNode::Kind::VOID) {
                    value = &defaultValue;
                }
            }
            if (value) {
                Position p = value->fPosition;
                std::vector<IRNode> fieldChildren;
                fieldChildren.push_back(IRNode(p, IRNode::Kind::SELF, field->fOwner.fType));
                IRNode fieldRef(p, IRNode::Kind::FIELD_REFERENCE, field->fType, field,
                        std::move(fieldChildren));
                std::vector<IRNode> stmtChildren;
                stmtChildren.push_back(std::move(fieldRef));
                this->coerce(value, field->fType);
                stmtChildren.push_back(value->copy());
                IRNode stmt = IRNode(p, IRNode::Kind::BINARY, Type(),
                        (uint64_t) Operator::ASSIGNMENT, std::move(stmtChildren));
                insertPoint = block.fChildren.insert(insertPoint, std::move(stmt)) + 1;
            }
        }
    }
    if (fErrors.fErrorCount == 0) {
        fCodeGenerator.writeMethod(method, block, *this);
    }
    fSymbolTable = nullptr;
}

void Compiler::compile(SymbolTable& symbols) {
    symbols.foreach_const([this, &symbols](const Symbol& s) {
        switch (s.fKind) {
            case Symbol::Kind::PACKAGE:
                this->compile(((Package&) s).fSymbolTable);
                break;
            case Symbol::Kind::CLASS:
                fCurrentClass.push((Class*) &s);
                this->compile(((Class&) s).fSymbolTable);
                fCurrentClass.pop();
                break;
            case Symbol::Kind::METHOD:
                fCurrentMethod.push((Method*) &s);
                this->compile(symbols, (Method&) s);
                fCurrentMethod.pop();
                break;
            case Symbol::Kind::METHODS:
                for (const auto& m : ((Methods&) s).fMethods) {
                    fCurrentMethod.push((Method*) m);
                    this->compile(symbols, (Method&) *m);
                    fCurrentMethod.pop();
                }
                break;
            case Symbol::Kind::FIELD: // fall through
            case Symbol::Kind::TYPE:  // fall through
            case Symbol::Kind::GENERIC_PARAMETER:
                break;
            case Symbol::Kind::VARIABLE:
                abort();
        }
    });
}

void Compiler::resolveTypes(Method* m) {
    if (m->fOwner.fAnnotations.isFinal()) {
        m->fAnnotations.fFlags |= Annotations::Flag::FINAL;
    }
    const SymbolTable& st = m->fOwner.fSymbolTable;
    this->resolveType(st, &m->fReturnType);
    for (auto& p : m->fParameters) {
        this->resolveType(st, &p.fType);
    }
}

void Compiler::resolveType(Field* f) {
    const SymbolTable& st = f->fOwner.fSymbolTable;
    this->resolveType(st, &f->fType);
}

void Compiler::findClassesAndResolveTypes(Class& cl) {
    this->resolveType(cl.fSymbolTable, &cl.fSuper);
    if (cl.isValue()) {
        cl.fAnnotations.fFlags |= Annotations::Flag::FINAL;
    }
    fClasses[cl.fName] = &cl;
    for (const auto& u : cl.fUses) {
        if (u.fAlias.size()) {
            Class* resolved = this->resolveClass(cl.fSymbolTable,
                    Type(u.fPosition, Type::Category::CLASS, u.fImport));
            if (resolved) {
                cl.fAliasTable.addAlias(u.fAlias, resolved);
            }
        }
    }
    this->findClassesAndResolveTypes(cl.fSymbolTable);
}

void Compiler::findClassesAndResolveTypes(SymbolTable& symbols) {
    symbols.foreach([this, &symbols](Symbol& s) {
        switch (s.fKind) {
            case Symbol::Kind::PACKAGE:
                this->findClassesAndResolveTypes(((Package&) s).fSymbolTable);
                break;
            case Symbol::Kind::CLASS: {
                Class& cl = (Class&) s;
                this->findClassesAndResolveTypes(cl);
                break;
            }
            case Symbol::Kind::METHOD:
                this->resolveTypes((Method*) &s);
                break;
            case Symbol::Kind::METHODS:
                for (const auto& m : ((Methods&) s).fMethods) {
                    this->resolveTypes(m);
                }
                break;
            case Symbol::Kind::FIELD:
                this->resolveType((Field*) &s);
                break;
            default:
                break;
        }
    });
}

void Compiler::buildVTable(Class& cl) {
    if (cl.fVirtualMethods.size()) {
        return;
    }
    if (cl.fSuper != Type::Void()) {
        Class* super = this->resolveClass(cl.fSymbolTable, cl.fSuper);
        if (!super) {
            return;
        }
        cl.fSymbolTable.fParents.push_back(&super->fSymbolTable);
        this->buildVTable(*super);
        cl.fVirtualMethods = super->fVirtualMethods;
    }
    for (const Method* derived : cl.fMethods) {
        if (derived->fMethodKind == Method::Kind::INIT || derived->fAnnotations.isClass()) {
            continue;
        }
        bool found = false;
        for (int i = 0; i < cl.fVirtualMethods.size(); ++i) {
            const Method* base = cl.fVirtualMethods[i];
            if (derived->matches(*base)) {
                found = true;
                cl.fVirtualMethods[i] = derived;
                break;
            }
        }
        if (!found) {
            cl.fVirtualMethods.push_back(derived);
        }
    }
}

void Compiler::buildVTables(SymbolTable& symbols) {
    symbols.foreach([this, &symbols](Symbol& s) {
        switch (s.fKind) {
            case Symbol::Kind::PACKAGE:
                this->buildVTables(((Package&) s).fSymbolTable);
                break;
            case Symbol::Kind::CLASS:
                this->buildVTable((Class&) s);
                break;
            default:
                break;
        }
    });
}

bool Compiler::inferFieldType(Field* field) {
    if (field->fType != Type::Void()) {
        return true;
    }
    if (fCurrentlyInferring.find(field) != fCurrentlyInferring.end()) {
        String msg = "unable to resolve field types due to a circular dependency involving:";
        // jump through some hoops to ensure the message is always identical, for testing purposes
        std::vector<String> lines;
        std::vector<Position> positions;
        for (const Field* f : fCurrentlyInferring) {
            lines.push_back("\n    " + f->fOwner.fName + "." + f->fName + " (" +
                    f->fPosition.description() + ")");
            positions.push_back(f->fPosition);
        }
        std::sort(lines.begin(), lines.end());
        std::sort(positions.begin(), positions.end());
        for (const String& line : lines) {
            msg += line;
        }
        this->error(positions[0], msg);
        return false;
    }
    fCurrentlyInferring.insert(field);
    ASSERT(fScanner.fFieldDescriptors.find(field) != fScanner.fFieldDescriptors.end());
    Scanner::FieldDescriptor& desc = fScanner.fFieldDescriptors[field];
    ASSERT(desc.fValueIndex < fScanner.fFieldValues.size());
    Scanner::FieldValue& value = fScanner.fFieldValues[desc.fValueIndex];
    if (value.fConvertedValue.fKind == IRNode::Kind::VOID) {
        fCurrentClass.push(&field->fOwner);
        SymbolTable* old = fSymbolTable;
        fSymbolTable = &field->fOwner.fSymbolTable;
        if (!this->convertExpression(*value.fUnconvertedValue, &value.fConvertedValue)) {
            fCurrentClass.pop();
            fSymbolTable = old;
            fCurrentlyInferring.erase(field);
            return false;
        }
        fCurrentClass.pop();
        fSymbolTable = old;
        fCurrentlyInferring.erase(field);
    }
    ASSERT(desc.fTupleIndices.size() == 0); // until tuple support is in...
    field->fValue = &value.fConvertedValue;
    field->fType = variable_type(*field->fValue);
    fCurrentClass.push(&field->fOwner);
    fSymbolTable = &field->fOwner.fSymbolTable;
    this->coerce(field->fValue, field->fType);
    fCurrentClass.pop();
    fFieldInitializationOrder.push_back(field);
    return true;
}

bool Compiler::processFieldValues() {
    for (auto pair : fScanner.fFieldDescriptors) {
        if (!this->inferFieldType(pair.first)) {
            return false;
        }
    }
    return true;
}

void Compiler::compile() {
    this->findClassesAndResolveTypes(fRoot);
    this->buildVTables(fRoot);
    if (this->processFieldValues()) {
        this->compile(fRoot);
    }
}

void Compiler::error(Position position, String msg) {
    fErrors.error(position, msg);
}

