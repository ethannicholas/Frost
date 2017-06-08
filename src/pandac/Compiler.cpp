#include "Compiler.h"

#include "Class.h"
#include "Operator.h"
#include "Package.h"
#include "Variable.h"

#include <limits.h>

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
    if (t->fCategory == Type::Category::CLASS) {
        Class* cl = this->resolveClass(st, *t);
        if (cl) {
            *t = cl->fType;
        }
    }
}

Class* Compiler::resolveClass(const SymbolTable& st, Type t) {
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

std::vector<const Field*> Compiler::getAllFields(const Class& cl) {
    if (cl.fSuper == Type::Void()) {
        return cl.fFields;
    }
    std::vector<const Field*> result = this->getAllFields(*this->resolveClass(cl.fSymbolTable,
                                                                              cl.fSuper));
    result.insert(result.end(), cl.fFields.begin(), cl.fFields.end());
    return result;
}

int Compiler::matchMethods(const std::vector<const Method*>& methods,
        const std::vector<IRNode>& args, const Type* returnType,
        std::vector<const Method*>* outMatches) {
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

bool Compiler::coerce(IRNode* node, const Type& type, IRNode* out) {
    ASSERT(node);
    ASSERT(out);
    if (node->fType == type) {
        if (out != node) {
            *out = std::move(*node);
        }
        return true;
    }
    switch (node->fKind) {
        case IRNode::Kind::INT:
            if (type.fCategory == Type::Category::BUILTIN_INT &&
                    required_size(node->fValue.fInt) <= type.fSize) {
                *out = IRNode(node->fPosition, IRNode::Kind::INT, type, node->fValue.fInt);
                return true;
            }
            else if (type.fCategory == Type::Category::BUILTIN_UINT &&
                    required_size(node->fValue.fInt) <= type.fSize) {
                *out = IRNode(node->fPosition, IRNode::Kind::INT, type, node->fValue.fInt);
                return true;
            }
            break;
        case IRNode::Kind::PREFIX: {
            ASSERT(node->fChildren.size() == 1);
            if (node->fChildren[0].fType.isBuiltinNumber()) {
                IRNode base;
                // FIXME: wrong at extremes
                if (!this->coerce(&node->fChildren[0], type, &base)) {
                    return false;
                }
                return this->convertPrefix(node->fPosition, (Operator) node->fValue.fInt,
                        std::move(base), out);
            }
            break;
        }
        case IRNode::Kind::UNRESOLVED_CALL: {
            ASSERT(node->fChildren.size() == 2);
            ASSERT(node->fChildren[0].fKind == IRNode::Kind::UNRESOLVED_METHOD_REFERENCE);
            std::vector<const Method*> methods;
            for (int i = 1; i < node->fChildren[0].fChildren.size(); ++i) {
                const auto& m = node->fChildren[0].fChildren[i];
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((Method*) m.fValue.fPtr);
            }
            std::vector<const Method*> matches;
            this->matchMethods(methods, node->fChildren[1].fChildren, &type, &matches);
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
                this->reportNoMatch(node->fPosition, methods[0]->fName,
                        node->fChildren[1].fChildren, &type);
                return false;
            }
            else {
                this->reportAmbiguousMatch(node->fPosition, matches, node->fChildren[1].fChildren,
                        &type);
                return false;
            }
        }
        case IRNode::Kind::UNRESOLVED_BINARY: {
            std::vector<const Method*> matches;
            Operator op = (Operator) node->fValue.fInt;
            if (this->operatorMatch(&node->fChildren[0], op, &node->fChildren[1], &type,
                    &matches) == INT_MAX) {
                this->error(node->fPosition, String("no '") + operator_text(op) +
                        "' operator on '" + node->fChildren[0].fType.fName + "', '" +
                        node->fChildren[1].fType.fName + "' returns type '" + type.fName + "'");
                return false;
            }
            if (matches.size() > 1) {
                this->reportAmbiguousMatch(node->fPosition, matches, node->fChildren, &type);
                return false;
            }
            *out = this->operatorCall(node->fPosition, &node->fChildren[0], *matches[0],
                    &node->fChildren[1]);
            return true;
        }
        default:
            break;
    }
    if (this->coercionCost(*node, type) != INT_MAX) {
        Position p = node->fPosition;
        if (type.fCategory == Type::Category::CLASS) {
            Class* cl = this->resolveClass(fCurrentClass.top()->fSymbolTable, type);
            if (cl) {
                for (const Method* m : cl->fMethods) {
                    if (m->fAnnotations.isImplicit()) {
                        // Internal use feature, sharp edges! We currently assume there's only one
                        // implicit method and it's a single-argument init.
                        ASSERT(m->fMethodKind == Method::Kind::INIT);
                        ASSERT(m->fParameters.size() == 1);
                        if (this->coercionCost(*node, m->fParameters[0].fType) != INT_MAX) {
                            IRNode type = IRNode(node->fPosition, IRNode::Kind::CLASS_REFERENCE,
                                    cl);
                            std::vector<IRNode> args;
                            args.push_back(std::move(*node));
                            return this->call(std::move(type), std::move(args), out);
                        }
                    }
                }
            }
        }
        std::vector<IRNode> children;
        children.push_back(std::move(*node));
        *out = IRNode(p, IRNode::Kind::CAST, type, std::move(children));
        return true;
    }
    String value = node->fKind == IRNode::Kind::INT ? std::to_string(node->fValue.fInt) :
            node->fType.fName;
    this->error(node->fPosition, "expected '" + type.fName + "', but found '" + value + "'");
    abort();
    return false;
}

int Compiler::coercionCost(const Type& type, const Type& target) {
    if (type == target) {
        return 0;
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
    return INT_MAX;
}

int Compiler::coercionCost(const IRNode& node, const Type& target) {
    switch (node.fKind) {
        case IRNode::Kind::INT:
            if ((target.fCategory == Type::Category::BUILTIN_INT &&
                    required_size((int64_t) node.fValue.fInt) <= target.fSize) ||
                    (target.fCategory == Type::Category::BUILTIN_UINT &&
                        required_size((uint64_t) node.fValue.fInt) <= target.fSize)) {
                return 0;
            }
            break;
        case IRNode::Kind::PREFIX: {
            // temporary hack
            return this->coercionCost(node.fChildren[0], target);
        }
        case IRNode::Kind::UNRESOLVED_CALL: {
            std::vector<const Method*> methods;
            for (int i = 1; i < node.fChildren[0].fChildren.size(); ++i) {
                const IRNode& m = node.fChildren[0].fChildren[i];
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((Method*) m.fValue.fPtr);
            }
            std::vector<const Method*> matches;
            return this->matchMethods(methods, node.fChildren[1].fChildren, &target, &matches);
        }
        case IRNode::Kind::UNRESOLVED_BINARY: {
            ASSERT(node.fChildren.size() == 2);
            std::vector<const Method*> ignored;
            return this->operatorMatch((IRNode*) &node.fChildren[0], (Operator) node.fValue.fInt,
                    (IRNode*) &node.fChildren[1], &target, &ignored);
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

int Compiler::callCost(const Method& method, const std::vector<IRNode>& args,
        const Type* returnType) {
    if (method.fParameters.size() != args.size()) {
        return INT_MAX;
    }
    int result = 0;
    for (int i = 0; i < args.size(); ++i) {
        int cost = this->coercionCost(args[i], method.fParameters[i].fType);
        if (cost == INT_MAX) {
            return INT_MAX;
        }
        result += cost;
    }
    if (returnType != nullptr) {
        int cost = this->coercionCost(method.fReturnType, *returnType);
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
    abort();
}

void Compiler::reportAmbiguousMatch(Position position, const std::vector<const Method*>& methods,
        const std::vector<IRNode>& args, const Type* returnType) {
    String msg = "call '" + methods[0]->fName + "(";
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
        msg += "\n    " + m->description();
    }
    this->error(position, msg);
}

bool Compiler::call(IRNode method, std::vector<IRNode> args, IRNode* out) {
    switch (method.fKind) {
        case IRNode::Kind::METHOD_REFERENCE: {
            const Method& m = *(Method*) method.fValue.fPtr;
            if (m.fParameters.size() != args.size()) {
                this->error(method.fPosition, "'" + m.fName + "' expected " +
                        std::to_string(m.fParameters.size()) + " arguments, but received " +
                        std::to_string(args.size()));
                return false;
            }
            std::vector<IRNode> children;
            if (m.fMethodKind == Method::Kind::INIT) {
                ASSERT(method.fChildren.size() == 0 || (method.fChildren.size() == 1 &&
                        method.fChildren[0].fKind == IRNode::Kind::VOID));
                children.push_back(std::move(method));
            }
            else {
                ASSERT(method.fChildren.size() == 1);
                IRNode target = std::move(method.fChildren[0]);
                method.fChildren.pop_back();
                children.push_back(std::move(method));
                if (m.fAnnotations.isClass()) {
                    if (target.fKind != IRNode::Kind::CLASS_REFERENCE &&
                            target.fKind != IRNode::Kind::VOID) {
                        this->error(method.fPosition, "cannot call class " + m.description() +
                                " on an instance");
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
                        if (!m.fAnnotations.isClass()) {
                            this->coerce(&target, m.fOwner.fType, &target);
                        }
                        children.push_back(std::move(target));
                    }
                }
            }
            for (int i = 0; i < args.size(); i++) {
                IRNode converted;
                if (!this->coerce(&(args)[i], m.fParameters[i].fType, &converted)) {
                    return false;
                }
                children.push_back(std::move(converted));
            }
            *out = IRNode(method.fPosition, IRNode::Kind::CALL, m.fReturnType,
                    std::move(children));
            return true;
        }
        case IRNode::Kind::UNRESOLVED_METHOD_REFERENCE: {
            std::vector<const Method*> min;
            std::vector<const Method*> methodPtrs;
            for (int i = 1; i < method.fChildren.size(); i++) {
                methodPtrs.push_back((Method*) method.fChildren[i].fValue.fPtr);
            }
            this->matchMethods(methodPtrs, args, nullptr, &min);
            if (!min.size()) {
                this->reportNoMatch(method.fPosition, methodPtrs[0]->fName, args, nullptr);
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
                *out = IRNode(method.fPosition, IRNode::Kind::UNRESOLVED_CALL,
                        Type(method.fPosition, Type::Category::UNRESOLVED,
                            "<unresolved method call>"),
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
        case IRNode::Kind::CLASS_REFERENCE: {
            Class& cl = *(Class*) method.fValue.fPtr;
            Symbol* symbol = cl.fSymbolTable["init"];
            ASSERT(symbol);
            IRNode init;
            this->symbolRef(method.fPosition, cl.fSymbolTable, symbol, &init);
            IRNode initCall;
            if (this->call(std::move(init), std::move(args), &initCall)) {
                initCall = this->resolve(&initCall);
                std::vector<IRNode> children;
                children.push_back(std::move(initCall));
                *out = IRNode(method.fPosition, IRNode::Kind::CONSTRUCT, cl.fType,
                        std::move(children));
                return true;
            }
            return false;
        }
        default:
            this->error(method.fPosition, "attempting to call a value which is not a method");
            return false;
    }
}

bool Compiler::foldInts(Position p, const IRNode& left, Operator op, const IRNode& right,
        IRNode* out) {
    ASSERT(left.fKind == IRNode::Kind::INT && right.fKind == IRNode::Kind::INT);
    uint64_t val1 = left.fValue.fInt;
    uint64_t val2 = right.fValue.fInt;
    bool result;
    uint64_t tmp;
    #define FOLD_BIT(op) \
        *out = IRNode(p, IRNode::Kind::BIT, Type::Bit(), (bool) (val1 op val2)); \
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

bool is_assignment(Operator op) {
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

static bool is_lvalue(const IRNode& node) {
    switch (node.fKind) {
        case IRNode::Kind::FIELD_REFERENCE: // fall through
        case IRNode::Kind::VARIABLE_REFERENCE:
            return true;
        default:
            return false;
    }
}

int Compiler::operatorCost(IRNode* left, const Method& m, IRNode* right, const Type* returnType) {
    std::vector<IRNode> args;
    if (m.fAnnotations.isClass()) {
        args.push_back(std::move(*left));
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

int Compiler::operatorMatch(IRNode* left, Operator op, IRNode* right, const Type* returnType,
        std::vector<const Method*>* outResult) {
    int min = INT_MAX;
    if (left->fType.fCategory == Type::Category::CLASS) {
        Class* leftClass = this->resolveClass(fCurrentClass.top()->fSymbolTable, left->fType);
        if (!leftClass) {
            return false;
        }
        ASSERT(!outResult->size());
        const Symbol* leftMethods = leftClass->fSymbolTable[operator_text(op)];
        if (leftMethods) {
            switch (leftMethods->fKind) {
                case Symbol::Kind::METHOD: {
                    const Method& m = (const Method&) *leftMethods;
                    int cost = this->operatorCost(left, m, right, returnType);
                    if (cost < min) {
                        outResult->clear();
                        min = cost;
                    }
                    if (cost == min) {
                        outResult->push_back(&m);
                    }
                    break;
                }
                case Symbol::Kind::METHODS: {
                    for (const Method* m : ((Methods&) *leftMethods).fMethods) {
                        int cost = this->operatorCost(left, *m, right, returnType);
                        if (cost < min) {
                            outResult->clear();
                            min = cost;
                        }
                        if (cost == min) {
                            outResult->push_back(m);
                        }
                    }
                    break;
                }
                default:
                    abort();
            }
        }
        if (left->fType == right->fType) {
            return min;
        }
    }
    if (right->fType.fCategory == Type::Category::CLASS) {
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
                        int cost = this->operatorCost(left, m, right, returnType);
                        if (cost < min) {
                            outResult->clear();
                            min = cost;
                        }
                        if (cost == min) {
                            outResult->push_back((const Method*) &m);
                        }
                    }
                    break;
                }
                case Symbol::Kind::METHODS: {
                    for (const Method* m : ((Methods&) *rightMethods).fMethods) {
                        if (m->fAnnotations.isClass()) {
                            int cost = this->operatorCost(left, *m, right, returnType);
                            if (cost < min) {
                                outResult->clear();
                                min = cost;
                            }
                            if (cost == min) {
                                outResult->push_back(m);
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

IRNode Compiler::operatorCall(Position position, IRNode* left, const Method& m, IRNode* right) {
    IRNode methodRef;
    std::vector<IRNode> args;
    if (m.fAnnotations.isClass()) {
        std::vector<IRNode> children;
        children.push_back(IRNode(position, IRNode::Kind::VOID));
        methodRef = IRNode(position, IRNode::Kind::METHOD_REFERENCE,
                Type(Position(), Type::Category::METHOD, "<method>"), &m, std::move(children));
        args.push_back(std::move(*left));
        args.push_back(std::move(*right));
    }
    else {
        std::vector<IRNode> children;
        children.push_back(std::move(*left));
        methodRef = IRNode(position, IRNode::Kind::METHOD_REFERENCE,
                Type(Position(), Type::Category::METHOD, "<method>"), &m, std::move(children));
        args.push_back(std::move(*right));
    }
    IRNode result;
    bool success = this->call(std::move(methodRef), std::move(args), &result);
    ASSERT(success);
    return std::move(result);
}

bool Compiler::operatorCall(Position position, IRNode* left, Operator op, IRNode* right,
        IRNode* outResult) {
    std::vector<const Method*> matches;
    if (this->operatorMatch(left, op, right, nullptr, &matches) == INT_MAX) {
        return false;
    }
    if (matches.size() > 1) {
        std::vector<IRNode> children;
        children.push_back(std::move(*left));
        children.push_back(std::move(*right));
        *outResult = IRNode(position, IRNode::Kind::UNRESOLVED_BINARY,
                Type(Position(), Type::Category::UNRESOLVED, "<unresolved binary operator>"),
                (int) op, std::move(children));
        return true;
    }
    ASSERT(matches.size() == 1);
    *outResult = this->operatorCall(position, left, *matches[0], right);
    return true;
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
    if (left.fType.fCategory == Type::Category::BUILTIN_INT &&
            right.fType.fCategory == Type::Category::INT_LITERAL) {
        if (!coerce(&right, left.fType, &right)) {
            return false;
        }
    }
    if (left.fType.fCategory == Type::Category::INT_LITERAL &&
            right.fType.fCategory == Type::Category::BUILTIN_INT) {
        if (!coerce(&left, right.fType, &left)) {
            return false;
        }
    }
    Operator op = (Operator) b.fValue.fInt;
    if ((op == Operator::AND || op == Operator::OR || op == Operator::ANDEQ || 
                op == Operator::OREQ) && left.fType == Type::Bit() && right.fType == Type::Bit()) {
        Class* bit = fClasses["panda.core.Bit"];
        ASSERT(bit);
        Field* value = (Field*) bit->fSymbolTable["value"];
        std::vector<IRNode> children;
        children.push_back(std::move(left));
        left = IRNode(b.fPosition, IRNode::Kind::FIELD_REFERENCE, Type::BuiltinBit(), value,
                std::move(children));
        children.clear();
        children.push_back(std::move(right));
        right = IRNode(b.fPosition, IRNode::Kind::FIELD_REFERENCE, Type::BuiltinBit(), value,
                std::move(children));
    }
    if (op == Operator::INDEX) {
        std::vector<IRNode> children;
        children.push_back(std::move(left));
        children.push_back(std::move(right));
        *out = IRNode(b.fPosition, IRNode::Kind::UNRESOLVED_INDEX,
                Type(b.fPosition, Type::Category::UNRESOLVED, "<unresolved index expression>"),
                std::move(children));
        return true;
    }
    IRNode call;
    if (this->operatorCall(b.fPosition, &left, op, &right, &call)) {
        *out = std::move(call);
        return true;
    }
    if (is_assignment(op)) {
        if (!this->coerce(&right, left.fType, &right)) {
            return false;
        }
        if (!is_lvalue(left)) {
            this->error(left.fPosition, "cannot assign to this expression");
            return false;
        }
        std::vector<IRNode> children;
        children.push_back(std::move(left));
        children.push_back(std::move(right));
        *out = IRNode(b.fPosition, IRNode::Kind::BINARY, left.fType, (uint64_t) op,
                std::move(children));
        return true;
    }
    if (left.fKind == IRNode::Kind::INT && right.fKind == IRNode::Kind::INT) {
        this->foldInts(b.fPosition, left, op, right, out);
        return true;
    }
    if (left.fKind == IRNode::Kind::BIT && right.fKind == IRNode::Kind::BIT) {
        this->foldBits(b.fPosition, left, op, right, out);
        return true;
    }
    if (left.fType == right.fType && left.fType.isBuiltinInt()) {
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
            case Operator::SHIFTRIGHTEQ: // fall through
            case Operator::NOT:          // fall through
            case Operator::BITWISENOT:
                type = left.fType;
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
        children.push_back(std::move(left));
        children.push_back(std::move(right));
        *out = IRNode(b.fPosition, IRNode::Kind::BINARY, type, (uint64_t) op, std::move(children));
        return true;
    }
    this->error(b.fPosition, String("'") + operator_text(op) + "' cannot operate on '" +
            left.fType.fName + "', '" + right.fType.fName + "'");
    return false;
}

void Compiler::addMethod(Position p, const SymbolTable& st, Method* m,
        std::vector<IRNode>* methods) {
    for (const IRNode& n : *methods) {
        if (n.fKind == IRNode::Kind::METHOD_REFERENCE && ((Method*) n.fValue.fPtr)->matches(*m)) {
            return;
        }
    }
    methods->push_back(IRNode(p, IRNode::Kind::METHOD_REFERENCE,
            Type(Position(), Type::Category::METHOD, "<method>"), m));
}

static bool is_heritable(Method* m) {
    return m->fMethodKind != Method::Kind::INIT;
}

void Compiler::addAllMethods(Position p, const SymbolTable& st, const String& name,
        std::vector<IRNode>* methods, bool start) {
    for (const SymbolTable* parent : st.fParents) {
        this->addAllMethods(p, *parent, name, methods, false);
    }
    auto found = st.fSymbols.find(name);
    if (found != st.fSymbols.end()) {
        Symbol* s = found->second;
        switch (s->fKind) {
            case Symbol::Kind::METHOD:
                if (start || is_heritable((Method*) s)) {
                    this->addMethod(p, st, (Method*) s, methods);
                }
                break;
            case Symbol::Kind::METHODS:
                for (const auto& m : ((Methods*) s)->fMethods) {
                    if (start || is_heritable((Method*) s)) {
                        this->addMethod(p, st, m, methods);
                    }
                }
                break;
            default:
                break;
        }
    }
}

void Compiler::symbolRef(Position p, const SymbolTable& st, Symbol* symbol, IRNode* out,
        IRNode* target) {
    switch (symbol->fKind) {
        case Symbol::Kind::CLASS:
            *out = IRNode(p, IRNode::Kind::CLASS_REFERENCE,
                    Type(Position(), Type::Category::CLASS, "<type>"), symbol);
            return;
        case Symbol::Kind::TYPE:
            ASSERT(!target);
            *out = IRNode(p, IRNode::Kind::TYPE_REFERENCE,
                    Type(Position(), Type::Category::CLASS, "<type>"), symbol);
            return;
        case Symbol::Kind::METHOD: {
            std::vector<IRNode> children;
            children.push_back(target ? std::move(*target) : IRNode(p, IRNode::Kind::VOID));
            this->addAllMethods(p, st, symbol->fName, &children);
            if (children.size() == 2) {
                *out = IRNode(p, IRNode::Kind::METHOD_REFERENCE,
                        Type(Position(), Type::Category::METHOD, "<method>"), symbol);
                out->fChildren.push_back(target ? std::move(*target) :
                        IRNode(p, IRNode::Kind::VOID));
            }
            *out = IRNode(p, IRNode::Kind::UNRESOLVED_METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), &st, std::move(children));
            return;
        }
        case Symbol::Kind::METHODS: {
            std::vector<IRNode> children;
            children.push_back(target ? std::move(*target) : IRNode(p, IRNode::Kind::VOID));
            this->addAllMethods(p, st, symbol->fName, &children);
            *out = IRNode(p, IRNode::Kind::UNRESOLVED_METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), &st, std::move(children));
            return;
        }
        case Symbol::Kind::FIELD:
            *out = IRNode(p, IRNode::Kind::FIELD_REFERENCE, ((Field*) symbol)->fType, symbol);
            if (target) {
                out->fChildren.push_back(std::move(*target));
            }
            else {
                out->fChildren.push_back(IRNode(p, IRNode::Kind::SELF, fCurrentClass.top()->fType));
            }
            return;
        case Symbol::Kind::VARIABLE:
            ASSERT(!target);
            *out = IRNode(p, IRNode::Kind::VARIABLE_REFERENCE, ((Variable*) symbol)->fType, symbol);
            return;
        case Symbol::Kind::PACKAGE:
            *out = IRNode(p, IRNode::Kind::PACKAGE_REFERENCE,
                    Type(Position(), Type::Category::PACKAGE, "<package>"), symbol);
            return;
        case Symbol::Kind::GENERIC_PARAMETER:
            abort();
    }
}

bool Compiler::convertIdentifier(const ASTNode& i, IRNode* out) {
    ASSERT(i.fKind == ASTNode::Kind::IDENTIFIER);
    ASSERT(!i.fChildren.size());
    Symbol* symbol = (*fSymbolTable)[i.fText];
    if (symbol) {
        this->symbolRef(i.fPosition, *fSymbolTable, symbol, out);
        return true;
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
    if (base.fType.fCategory == Type::Category::CLASS) {
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
                std::vector<IRNode> children;
                children.push_back(std::move(base));
                IRNode methodRef(p, IRNode::Kind::METHOD_REFERENCE,
                        Type(Position(), Type::Category::METHOD, "<method>"), m,
                        std::move(children));
                return this->call(std::move(methodRef), {}, out);
            }
        }
    }
    switch (op) {
        case Operator::SUB:
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
            if (!this->coerce(&base, Type::BuiltinBit(), &base)) {
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
    String name;
    SymbolTable* st;
    switch (left.fKind) {
        case IRNode::Kind::CLASS_REFERENCE: {
            Class& cl = *((Class*) left.fValue.fPtr);
            st = &cl.fSymbolTable;
            name = "class " + cl.fName;
            break;
        }
        case IRNode::Kind::PACKAGE_REFERENCE: {
            Package& p = *((Package*) left.fValue.fPtr);
            st = &p.fSymbolTable;
            name = "package " + p.fName;
            break;
        }
        default:
            if (left.fType.fCategory == Type::Category::CLASS) {
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
        this->symbolRef(d.fPosition, *st, symbol, out, &left);
        return true;
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
    }
    *out = IRNode(s.fPosition, IRNode::Kind::SELF, fCurrentClass.top()->fType);
    return true;
}

bool Compiler::doConvertExpression(const ASTNode& e, IRNode* out) {
    switch (e.fKind) {
        case ASTNode::Kind::BINARY:
            return this->convertBinary(e, out);
        case ASTNode::Kind::BIT:
            *out = IRNode(e.fPosition, IRNode::Kind::BIT, Type::BuiltinBit(), e.fValue.fBool);
            return true;
        case ASTNode::Kind::CALL:
            return this->convertCall(e, out);
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
            *out = IRNode(e.fPosition, IRNode::Kind::INT, Type::BuiltinBit(), true);
            return true;
        case ASTNode::Kind::FALSE_LITERAL:
            *out = IRNode(e.fPosition, IRNode::Kind::INT, Type::BuiltinBit(), false);
            return true;
        case ASTNode::Kind::SELF:
            return this->convertSelf(e, out);
        case ASTNode::Kind::CLASS_TYPE:
            return this->convertType(e, out);
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
    ASSERT(i.fChildren.size() == 3);
    IRNode test;
    if (this->convertExpression(i.fChildren[0], &test)) {
        this->coerce(&test, Type::Bit(), &test);
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
    if (i.fChildren[2].fKind == ASTNode::Kind::VOID) {
        *out = IRNode(i.fPosition, IRNode::Kind::IF, std::move(children));
        return true;
    }
    IRNode ifFalse;
    this->convertStatement(i.fChildren[2], &ifFalse);
    children.push_back(std::move(ifFalse));
    *out = IRNode(i.fPosition, IRNode::Kind::IF, std::move(children));
    return true;
}

// returns the type that a variable should have when initialized with an expression of exprType
static Type variable_type(Type exprType) {
    if (exprType == Type::IntLiteral()) {
        return Type::Int64();
    }
    if (exprType == Type::BuiltinBit()) {
        return Type::Bit();
    }
    return std::move(exprType);
}

IRNode Compiler::resolve(IRNode* value) {
    switch (value->fKind) {
        case IRNode::Kind::UNRESOLVED_METHOD_REFERENCE:
            ASSERT(value->fChildren.size() >= 2);
            ASSERT(value->fChildren[1].fKind == IRNode::Kind::METHOD_REFERENCE);
            this->error(value->fPosition, "ambiguous reference to method '" +
                    ((Method*) value->fChildren[1].fValue.fPtr)->fName + "'");
            break;
        case IRNode::Kind::UNRESOLVED_CALL: {
            std::vector<const Method*> methods;
            for (int i = 1; i < value->fChildren[0].fChildren.size(); ++i) {
                const auto& m = value->fChildren[0].fChildren[i];
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((Method*) m.fValue.fPtr);
            }
            this->reportAmbiguousMatch(value->fPosition, methods, value->fChildren[1].fChildren,
                    nullptr);
            break;
        }
        default:
            break;
    }
    return std::move(*value);
}

bool Compiler::convertTarget(const ASTNode& t, IRNode* value, IRNode* out) {
    switch (t.fKind) {
        case ASTNode::Kind::IDENTIFIER: {
            Type type;
            if (t.fChildren.size() == 1) {
                IRNode typeNode;
                if (!this->convertType(t.fChildren[0], &typeNode)) {
                    return false;
                }
                type = *(Type*) typeNode.fValue.fPtr;
            }
            else {
                *value = this->resolve(value);
                type = variable_type(value->fType);
            }
            if (!this->coerce(value, type, value)) {
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
    if (!this->convertTarget(d.fChildren[0], valuePtr, &target)) {
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

bool Compiler::convertReturn(const ASTNode& s, IRNode* out) {
    ASSERT(s.fKind == ASTNode::Kind::RETURN);
    if (s.fChildren.size() == 1) {
        IRNode converted;
        if (!this->convertExpression(s.fChildren[0], &converted)) {
            return false;
        }
        if (!this->coerce(&converted, fCurrentMethod.top()->fReturnType, &converted)) {
            return false;
        }
        std::vector<IRNode> children;
        children.push_back(std::move(converted));
        *out = IRNode(s.fPosition, IRNode::Kind::RETURN, std::move(children));
        return true;
    }
    ASSERT(s.fChildren.size() == 0);
    *out = IRNode(s.fPosition, IRNode::Kind::RETURN);
    return true;
}

bool Compiler::convertStatement(const ASTNode& s, IRNode* out) {
    switch (s.fKind) {
        case ASTNode::Kind::BLOCK:
            return this->convertBlock(s, out);
        case ASTNode::Kind::BINARY:
            return this->convertBinary(s, out);
        case ASTNode::Kind::CALL: {
            bool result = this->convertCall(s, out);
            if (!result) {
                return false;
            }
            *out = resolve(out);
            return true;
        }
        case ASTNode::Kind::IF:
            return this->convertIf(s, out);
        case ASTNode::Kind::RETURN:
            return this->convertReturn(s, out);
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

bool Compiler::convertType(const ASTNode& t, IRNode* out) {
    switch (t.fKind) {
        case ASTNode::Kind::VOID:
            *out = IRNode(t.fPosition, IRNode::Kind::TYPE_REFERENCE, &Type::Void());
            return true;
        case ASTNode::Kind::CLASS_TYPE: {
            Symbol* symbol = (*fSymbolTable)[t.fText];
            if (!symbol) {
                String name = t.fText;
                Class* context = fCurrentClass.top();
                Class* cl = fClasses[name];
                if (cl) {
                    *out = IRNode(t.fPosition, IRNode::Kind::CLASS_REFERENCE, Type::Class(),
                            &cl->fType);
                    return true;
                }
                this->error(t.fPosition, "unknown type '" + t.fText + "'");
                return false;
            }
            switch (symbol->fKind) {
                case Symbol::Kind::TYPE:
                    *out = IRNode(t.fPosition, IRNode::Kind::CLASS_REFERENCE, Type::Class(),
                            symbol);
                    return true;
                case Symbol::Kind::CLASS:
                    *out = IRNode(t.fPosition, IRNode::Kind::CLASS_REFERENCE, Type::Class(),
                            &((Class*) symbol)->fType);
                    return true;
                default:
                    this->error(t.fPosition, "'" + t.fText + "' is not a type");
                    return false;
            }
        }
        default:
            printf("unsupported type: %s\n", t.description().c_str());
            abort();
    }
}

void Compiler::compile(const SymbolTable& parent, const Method& method) {
    if (method.fBody.fKind == ASTNode::Kind::VOID) {
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
        for (const auto& field : this->getAllFields(method.fOwner)) {
            if (field->fValue) {
                Position p = field->fValue->fPosition;
                std::vector<IRNode> fieldChildren;
                fieldChildren.push_back(IRNode(p, IRNode::Kind::SELF, field->fOwner.fType));
                IRNode fieldRef(p, IRNode::Kind::FIELD_REFERENCE, field->fType, field,
                        std::move(fieldChildren));
                std::vector<IRNode> stmtChildren;
                stmtChildren.push_back(std::move(fieldRef));
                stmtChildren.push_back(field->fValue->copy());
                IRNode stmt = IRNode(p, IRNode::Kind::BINARY, Type(), (int) Operator::ASSIGNMENT,
                        std::move(stmtChildren));
                insertPoint = block.fChildren.insert(insertPoint, std::move(stmt)) + 1;
            }
        }
    }
    if (fErrors.fErrorCount == 0) {
        fCodeGenerator.writeMethod(method, block, *this);
    }
    fSymbolTable = nullptr;
}

void Compiler::compile(const SymbolTable& symbols) {
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
    const SymbolTable& st = m->fOwner.fSymbolTable;
    this->resolveType(st, &m->fReturnType);
    for (auto& p : m->fParameters) {
        this->resolveType(st, &p.fType);
    }
}

void Compiler::findClassesAndResolveTypes(Class& cl) {
    this->resolveType(cl.fSymbolTable, &cl.fSuper);
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

void Compiler::processFieldValues() {
    // index of each value within its parent class
    std::vector<int> valueIndices;
    for (const auto& ownerValuePair : fScanner.fFieldValues) {
        IRNode node;
        if (this->convertExpression(*ownerValuePair.second, &node)) {
            valueIndices.push_back(ownerValuePair.first->fFieldValues.size());
            ownerValuePair.first->fFieldValues.push_back(std::move(node));
        }
        else {
            return;
        }
    }
    for (const auto& desc : fScanner.fFieldDescriptors) {
        ASSERT(desc.fTupleIndices.size() == 0); // until tuple support is in...
        ASSERT(desc.fValueIndex < valueIndices.size());
        ASSERT(valueIndices[desc.fValueIndex] < desc.fField.fOwner.fFieldValues.size());
        desc.fField.fValue = &desc.fField.fOwner.fFieldValues[valueIndices[desc.fValueIndex]];
        desc.fField.fType = variable_type(desc.fField.fValue->fType);
        fCurrentClass.push(&desc.fField.fOwner);
        this->coerce(desc.fField.fValue, desc.fField.fType, desc.fField.fValue);
    }
}

void Compiler::compile() {
    this->findClassesAndResolveTypes(fRoot);
    this->buildVTables(fRoot);
    this->processFieldValues();
    this->compile(fRoot);
}

void Compiler::error(Position position, String msg) {
    fErrors.error(position, msg);
}

