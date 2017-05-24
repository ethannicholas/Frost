#include "IRGenerator.h"

#include "Operator.h"
#include "Variable.h"

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

bool IRGenerator::coerce(IRNode* node, const Type& type, IRNode* out) {
    if (node->fType == type) {
        *out = std::move(*node);
        return true;
    }
    if (type.fCategory == Type::Category::BUILTIN_INT) {
        if (node->fKind == IRNode::Kind::INT) {
            if (required_size(node->fValue.fInt) <= type.fSize) {
                *out = IRNode(node->fPosition, IRNode::Kind::INT, type, node->fValue.fInt);
                return true;
            }
        }
    }
    String value = node->fKind == IRNode::Kind::INT ? std::to_string(node->fValue.fInt) :
            node->fType.fName;
    this->error(node->fPosition, "expected '" + type.fName + "', but found '" + value + "'");
    return false;
}

bool IRGenerator::call(IRNode* method, std::vector<IRNode>* args, IRNode* out) {
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
                if (!this->coerce(&(*args)[i], stub.fParameters[i], &converted)) {
                    return false;
                }
                children.push_back(std::move(converted));
            }
            *out = IRNode(method->fPosition, IRNode::Kind::CALL, stub.fReturnType,
                    std::move(children));
            return true;
        }
        default:
            this->error(method->fPosition, "attempting to call a value which is not a method");
            return false;
    }
}

bool IRGenerator::foldInts(Position p, const IRNode& left, Operator op, const IRNode& right,
        IRNode* out) {
    ASSERT(left.fKind == IRNode::Kind::INT && right.fKind == IRNode::Kind::INT);
    int val1 = left.fValue.fInt;
    int val2 = right.fValue.fInt;
    bool result;
    int64_t tmp;
    #define FOLD_BIT(op) \
        *out = IRNode(p, IRNode::Kind::BIT, Type::Bit(), (bool) (val1 op val2)); \
        return true;

    #define FOLD_INT(op) \
        *out = IRNode(p, IRNode::Kind::INT, Type::IntLiteral(), (int64_t) (val1 op val2)); \
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
            int64_t result = val1 / val2;
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
            int64_t result = val1 % val2;
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

bool IRGenerator::foldBits(Position p, const IRNode& left, Operator op, const IRNode& right,
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

bool IRGenerator::convertBinary(const ASTNode& b, IRNode* out) {
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
    if (left.fKind == IRNode::Kind::INT && right.fKind == IRNode::Kind::INT) {
        this->foldInts(b.fPosition, left, (Operator) b.fValue.fInt, right, out);
        return true;
    }
    if (left.fKind == IRNode::Kind::BIT && right.fKind == IRNode::Kind::BIT) {
        this->foldBits(b.fPosition, left, (Operator) b.fValue.fInt, right, out);
        return true;
    }
    if (left.fType == right.fType && left.fType.fCategory == Type::Category::BUILTIN_INT) {
        Type type = left.fType;
        std::vector<IRNode> children;
        children.push_back(std::move(left));
        children.push_back(std::move(right));
        *out = IRNode(b.fPosition, IRNode::Kind::BINARY, type, b.fValue.fInt, std::move(children));
        return true;
    }
    this->error(b.fPosition, String("'") + operator_text((Operator) b.fValue.fInt) +
            "' cannot operate on '" + left.fType.fName + "', '" + right.fType.fName + "'");
    return false;
}

bool IRGenerator::convertIdentifier(const ASTNode& i, IRNode* out) {
    ASSERT(i.fKind == ASTNode::Kind::IDENTIFIER);
    ASSERT(!i.fChildren.size());
    Symbol* symbol = (*fSymbolTable)[i.fText];
    if (symbol) {
        switch (symbol->fKind) {
            case Symbol::Kind::TYPE:
                *out = IRNode(i.fPosition, IRNode::Kind::TYPE_REFERENCE,
                        Type(Type::Category::TYPE, "<type>"), symbol);
                return true;
            case Symbol::Kind::METHOD:
                *out = IRNode(i.fPosition, IRNode::Kind::METHOD_REFERENCE,
                        Type(Type::Category::METHOD, "<method>"), symbol);
                return true;
            case Symbol::Kind::VARIABLE:
                *out = IRNode(i.fPosition, IRNode::Kind::VARIABLE_REFERENCE,
                        ((Variable*) symbol)->fType, symbol);
                return true;
        }
    }
    else {
        this->error(i.fPosition, "unknown identifier '" + i.fText + "'");
        return false;
    }
}

bool IRGenerator::convertCall(const ASTNode& c, IRNode* out) {
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

bool IRGenerator::doConvertExpression(const ASTNode& e, IRNode* out) {
    switch (e.fKind) {
        case ASTNode::Kind::BINARY:
            return this->convertBinary(e, out);
        case ASTNode::Kind::BIT:
            *out = IRNode(e.fPosition, IRNode::Kind::BIT, Type::BuiltinBit(), e.fValue.fBool);
            return true;
        case ASTNode::Kind::CALL:
            return this->convertCall(e, out);
        case ASTNode::Kind::IDENTIFIER:
            return this->convertIdentifier(e, out);
        case ASTNode::Kind::INT:
            *out = IRNode(e.fPosition, IRNode::Kind::INT, Type::IntLiteral(), e.fValue.fInt);
            return true;
        default:
            printf("unhandled expression: %s\n", e.description().c_str());
            abort();
    }
}

bool IRGenerator::convertExpression(const ASTNode& e, IRNode* out) {
    bool result = this->doConvertExpression(e, out);
    ASSERT(!result || out->fType.fCategory != Type::Category::VOID);
    return result;
}

bool IRGenerator::convertIf(const ASTNode& i, IRNode* out) {
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
        return Type(Type::Category::BUILTIN_INT, "builtin_int64", 64);
    }
    return std::move(exprType);
}

bool IRGenerator::convertTarget(const ASTNode& t, IRNode* value, IRNode* out) {
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
                    new Variable(t.fText, std::move(type)));
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

bool IRGenerator::convertDeclaration(const ASTNode& d, IRNode* out) {
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

bool IRGenerator::convertVar(const ASTNode& v, IRNode* out) {
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

bool IRGenerator::convertStatement(const ASTNode& s, IRNode* out) {
    switch (s.fKind) {
        case ASTNode::Kind::BLOCK:
            return this->convertBlock(s, out);
        case ASTNode::Kind::CALL:
            return this->convertCall(s, out);
        case ASTNode::Kind::IF:
            return this->convertIf(s, out);
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

bool IRGenerator::convertBlock(const ASTNode& b, IRNode* out) {
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

bool IRGenerator::convertParameter(const ASTNode& p, IRNode* out) {
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

bool IRGenerator::convertType(const ASTNode& t, IRNode* out) {
    switch (t.fKind) {
        case ASTNode::Kind::VOID:
            *out = IRNode(t.fPosition, IRNode::Kind::TYPE_REFERENCE, &Type::Void());
            return true;
        default:
            printf("unsupported type: %s\n", t.description().c_str());
            abort();
    }
}

bool IRGenerator::convertMethod(const ASTNode& m, IRNode* out) {
    ASSERT(m.fKind == ASTNode::Kind::METHOD);
    ASSERT(m.fChildren.size() == 5);
    ASSERT(m.fChildren[0].fKind == ASTNode::Kind::DOCCOMMENT);
    ASSERT(m.fChildren[1].fKind == ASTNode::Kind::ANNOTATIONS);
    ASSERT(m.fChildren[2].fKind == ASTNode::Kind::PARAMETERS);
    std::vector<IRNode> parameters;
    for (const auto& p : m.fChildren[2].fChildren) {
        IRNode converted;
        if (!this->convertParameter(p, &converted)) {
            return false;
        }
        parameters.push_back(std::move(converted));
    }
    IRNode returnType;
    if (!this->convertType(m.fChildren[3], &returnType)) {
        return false;
    }
    IRNode block;
    if (!this->convertBlock(m.fChildren[4], &block)) {
        return false;
    }
    std::vector<IRNode> children;
    children.emplace_back(m.fPosition, IRNode::Kind::PARAMETERS, std::move(parameters));
    children.push_back(std::move(returnType));
    children.push_back(std::move(block));
    *out = IRNode(m.fPosition, IRNode::Kind::METHOD, m.fText, std::move(children));
    return true;
}

bool IRGenerator::convertBodyEntry(const ASTNode& bodyEntry, IRNode* out) {
    switch (bodyEntry.fKind) {
        case ASTNode::Kind::CALL:
            return this->convertCall(bodyEntry, out);
        case ASTNode::Kind::METHOD:
            return this->convertMethod(bodyEntry, out);
        default:
            printf("unhandled body entry: %s\n", bodyEntry.description().c_str());
            abort();
    }
}

bool IRGenerator::convertFile(const ASTNode& file, IRFile* out) {
    ASSERT(file.fPosition.fName);
    std::vector<IRNode> result;
    ASSERT(file.fKind == ASTNode::Kind::BODY_ENTRIES);
    for (auto& entry : file.fChildren) {
        IRNode converted;
        if (this->convertBodyEntry(entry, &converted)) {
            result.push_back(std::move(converted));
        }
    }
    *out = {
        IRNode(file.fPosition, IRNode::Kind::FILE, std::move(result)),
        std::move(fSymbolTable->fOwned) 
    };
    return true;
}

void IRGenerator::error(Position position, String msg) {
    printf("%s:%d:%d: %s\n", position.fName->c_str(), position.fLine, position.fColumn,
            msg.c_str());
}

