#include "Compiler.h"

#include "ClassStub.h"
#include "Operator.h"
#include "Package.h"
#include "Variable.h"

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

int Compiler::matchMethods(const std::vector<MethodStub*>& methods, const std::vector<IRNode>& args,
        const Type* returnType, std::vector<MethodStub*>* outMatches) {
    int minCost = INT_MAX;
    for (const auto& m : methods) {
        int newCost = this->callCost(*m, args, returnType);
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
        case IRNode::Kind::PREFIX: {
            IRNode base;
            if (!this->coerce(&node->fChildren[0], type, &base)) {
                return false;
            }
            std::vector<IRNode> children;
            children.push_back(std::move(base));
            *out = IRNode(node->fPosition, IRNode::Kind::PREFIX, type, node->fValue.fInt,
                    std::move(children));
            return true;
        }
        case IRNode::Kind::UNRESOLVED_CALL: {
            ASSERT(node->fChildren.size() == 2);
            ASSERT(node->fChildren[0].fKind == IRNode::Kind::UNRESOLVED_METHOD_REFERENCE);
            std::vector<MethodStub*> methods;
            for (const auto& m : node->fChildren[0].fChildren) {
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((MethodStub*) m.fValue.fPtr);
            }
            std::vector<MethodStub*> matches;
            this->matchMethods(methods, node->fChildren[1].fChildren, &type, &matches);
            if (matches.size() == 1) {
                Type returnType = matches[0]->fReturnType;
                std::vector<IRNode> children;
                IRNode method;
                this->symbolRef(node->fPosition, matches[0], &method);
                children.push_back(std::move(method));
                for (auto& arg : node->fChildren[1].fChildren) {
                    children.push_back(std::move(arg));
                }
                *out = IRNode(node->fPosition, IRNode::Kind::CALL, returnType, std::move(children));
                return true;
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
        default:
            break;
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
        case IRNode::Kind::UNRESOLVED_CALL: {
            std::vector<MethodStub*> methods;
            for (const auto& m : node.fChildren[0].fChildren) {
                ASSERT(m.fKind == IRNode::Kind::METHOD_REFERENCE);
                methods.push_back((MethodStub*) m.fValue.fPtr);
            }
            std::vector<MethodStub*> matches;
            return this->matchMethods(methods, node.fChildren[1].fChildren, &target, &matches);
        }
        default:
            break;
    }
    return this->coercionCost(node.fType, target);
}

int Compiler::callCost(const MethodStub& method, const std::vector<IRNode>& args,
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
}

void Compiler::reportAmbiguousMatch(Position position, const std::vector<MethodStub*>& methods,
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

bool Compiler::call(IRNode* method, std::vector<IRNode>* args, IRNode* out) {
    switch (method->fKind) {
        case IRNode::Kind::METHOD_REFERENCE: {
            const MethodStub& stub = *(MethodStub*) method->fValue.fPtr;
            if (stub.fParameters.size() != args->size()) {
                this->error(method->fPosition, "'" + stub.fName + "' expected " +
                        std::to_string(stub.fParameters.size()) + " arguments, but received " +
                        std::to_string(args->size()));
                return false;
            }
            std::vector<IRNode> children;
            children.push_back(std::move(*method));
            for (int i = 0; i < args->size(); i++) {
                IRNode converted;
                if (!this->coerce(&(*args)[i], stub.fParameters[i].fType, &converted)) {
                    return false;
                }
                children.push_back(std::move(converted));
            }
            *out = IRNode(method->fPosition, IRNode::Kind::CALL, stub.fReturnType,
                    std::move(children));
            return true;
        }
        case IRNode::Kind::UNRESOLVED_METHOD_REFERENCE: {
            std::vector<MethodStub*> min;
            const Methods& methods = *(Methods*) method->fValue.fPtr;
            std::vector<MethodStub*> methodPtrs;
            for (const auto& m : methods.fMethods) {
                methodPtrs.push_back(m.get());
            }
            this->matchMethods(methodPtrs, *args, nullptr, &min);
            if (!min.size()) {
                this->reportNoMatch(method->fPosition, methodPtrs[0]->fName, *args, nullptr);
                return false;
            }
            if (min.size() > 1) {
                std::vector<IRNode> methodNodes;
                for (const auto m : min) {
                    IRNode ref;
                    this->symbolRef(method->fPosition, m, &ref);
                    methodNodes.push_back(std::move(ref));
                }
                std::vector<IRNode> children;
                children.push_back(IRNode(method->fPosition,
                        IRNode::Kind::UNRESOLVED_METHOD_REFERENCE, std::move(methodNodes)));
                children.emplace_back(method->fPosition, IRNode::Kind::ARGUMENTS, std::move(*args));
                *out = IRNode(method->fPosition, IRNode::Kind::UNRESOLVED_CALL,
                        Type(method->fPosition, Type::Category::UNRESOLVED,
                            "<unresolved method call>"),
                        std::move(children));
                return true;
            }
            IRNode m(min[0]->fPosition, IRNode::Kind::METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), min[0]);
            return this->call(&m, args, out);
        }
        default:
            printf("%s\n", method->description().c_str());
            this->error(method->fPosition, "attempting to call a value which is not a method");
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
    return node.fKind == IRNode::Kind::VARIABLE_REFERENCE;
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
                type = Type::Bit();
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

void Compiler::symbolRef(Position p, Symbol* symbol, IRNode* out) {
    switch (symbol->fKind) {
        case Symbol::Kind::CLASS:
            *out = IRNode(p, IRNode::Kind::CLASS_REFERENCE,
                    Type(Position(), Type::Category::CLASS, "<type>"), symbol);
            return;
        case Symbol::Kind::TYPE:
            *out = IRNode(p, IRNode::Kind::TYPE_REFERENCE,
                    Type(Position(), Type::Category::CLASS, "<type>"), symbol);
            return;
        case Symbol::Kind::METHOD:
            *out = IRNode(p, IRNode::Kind::METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), symbol);
            return;
        case Symbol::Kind::METHODS:
            *out = IRNode(p, IRNode::Kind::UNRESOLVED_METHOD_REFERENCE,
                    Type(Position(), Type::Category::METHOD, "<method>"), symbol);
            return;
        case Symbol::Kind::VARIABLE:
            *out = IRNode(p, IRNode::Kind::VARIABLE_REFERENCE,
                    ((Variable*) symbol)->fType, symbol);
            return;
        case Symbol::Kind::PACKAGE:
            *out = IRNode(p, IRNode::Kind::PACKAGE_REFERENCE,
                    Type(Position(), Type::Category::PACKAGE, "<package>"), symbol);
            return;
    }
}

bool Compiler::convertIdentifier(const ASTNode& i, IRNode* out) {
    ASSERT(i.fKind == ASTNode::Kind::IDENTIFIER);
    ASSERT(!i.fChildren.size());
    Symbol* symbol = (*fSymbolTable)[i.fText];
    if (symbol) {
        this->symbolRef(i.fPosition, symbol, out);
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
    return this->call(&m, &args, out);
}

bool Compiler::convertPrefix(const ASTNode& p, IRNode* out) {
    ASSERT(p.fKind == ASTNode::Kind::PREFIX);
    ASSERT(p.fChildren.size() == 1);
    IRNode base;
    if (!this->convertExpression(p.fChildren[0], &base)) {
        return false;
    }
    Operator op = (Operator) p.fValue.fInt;
    switch (op) {
        case Operator::SUB:
            if (base.fType.isBuiltinNumber()) {
                Type type = base.fType;
                std::vector<IRNode> children;
                children.push_back(std::move(base));
                *out = IRNode(p.fPosition, IRNode::Kind::PREFIX, type, (uint64_t) op,
                        std::move(children));
                return true;
            }
            else {
                this->error(base.fPosition, "expected a number, but found '" + base.fType.fName +
                        "'");
                return false;
            }
        case Operator::NOT: {
            IRNode bit;
            if (!this->coerce(&base, Type::BuiltinBit(), &bit)) {
                return false;
            }
            Type type = base.fType;
            std::vector<IRNode> children;
            children.push_back(std::move(base));
            *out = IRNode(p.fPosition, IRNode::Kind::PREFIX, type, (uint64_t) op,
                    std::move(children));
            return true;
        }
        default:
            abort();
    }
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
            ClassStub& cl = *((ClassStub*) left.fValue.fPtr);
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
        default: this->error(d.fPosition, "cannot use '.' on value of type '" + left.fType.fName +
                "'");
    }
    Symbol* symbol = (*st)[d.fText];
    if (symbol) {
        this->symbolRef(d.fPosition, symbol, out);
        return true;
    }
    else {
        this->error(d.fPosition, name + " does not contain '" + d.fText + "'");
        return false;
    }
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
        return Type(Position(), Type::Category::BUILTIN_INT, "builtin_int64", 64);
    }
    return std::move(exprType);
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
        case ASTNode::Kind::CALL:
            return this->convertCall(s, out);
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
                this->error(t.fPosition, "unknown identifier '" + t.fText + "'");
                return false;
            }
            if (symbol->fKind != Symbol::Kind::TYPE) {
                this->error(t.fPosition, "'" + t.fText + "' is not a type");
                return false;
            }
            *out = IRNode(t.fPosition, IRNode::Kind::TYPE_REFERENCE, symbol);
            return true;
        }
        default:
            printf("unsupported type: %s\n", t.description().c_str());
            abort();
    }
}

void Compiler::compile(const SymbolTable& parent, const MethodStub& method) {
    if (method.fBody.fKind == ASTNode::Kind::VOID) {
        return;
    }
    SymbolTable symbols(&parent);
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
    fCodeGenerator.writeMethod(*fCurrentClass.top(), method, block);
    fSymbolTable = nullptr;
}

void Compiler::compile(const SymbolTable& symbols) {
    symbols.foreach([this, &symbols](const Symbol& s) {
        switch (s.fKind) {
            case Symbol::Kind::PACKAGE:
                this->compile(((Package&) s).fSymbolTable);
                break;
            case Symbol::Kind::CLASS:
                fCurrentClass.push((ClassStub*) &s);
                this->compile(((ClassStub&) s).fSymbolTable);
                fCurrentClass.pop();
                break;
            case Symbol::Kind::METHOD:
                fCurrentMethod.push((MethodStub*) &s);
                this->compile(symbols, (MethodStub&) s);
                fCurrentMethod.pop();
                break;
            case Symbol::Kind::METHODS:
                for (const auto& m : ((Methods&) s).fMethods) {
                    fCurrentMethod.push((MethodStub*) m.get());
                    this->compile(symbols, (MethodStub&) *m);
                    fCurrentMethod.pop();
                }
                break;
            case Symbol::Kind::TYPE:
                break;
            case Symbol::Kind::VARIABLE:
                abort();
        }
    });
}

void Compiler::compile() {
    this->compile(fRoot);
}

void Compiler::error(Position position, String msg) {
    printf("%s:%d:%d: %s\n", position.fName->c_str(), position.fLine, position.fColumn,
            msg.c_str());
}

