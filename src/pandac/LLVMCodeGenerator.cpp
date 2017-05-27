#include "LLVMCodeGenerator.h"
#include "MethodStub.h"

LLVMCodeGenerator::LLVMCodeGenerator(std::ostream* out)
: fOut(*out) {
    fOut << "target datalayout = \"e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-"
            "f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-"
            "n8:16:32:64-S128\"\n";
    fOut << "target triple = \"x86_64-apple-macosx10.8.0\"\n";

    // temporary
    fOut << "declare i32 @printf(i8*, ...)\n";
    fOut << "@fmt = private constant [4 x i8] [i8 37, i8 100, i8 10, i8 0]\n";
    fOut << "define fastcc void @print$builtin_int64(i64 %num) {\n";
    fOut << "    call i32 (i8*, ...)* @printf(i8* bitcast ([4 x i8]* @fmt to i8*), i64 %num)\n";
    fOut << "    ret void\n";
    fOut << "}\n";
}

String LLVMCodeGenerator::llvmType(const Type& type) {
    switch (type.fCategory) {
        case Type::Category::VOID:        return "void";
        case Type::Category::BUILTIN_INT: // fall through
        case Type::Category::BUILTIN_UINT: return "i" + std::to_string(type.fSize);
        case Type::Category::BUILTIN_FLOAT: return "f" + std::to_string(type.fSize);
        case Type::Category::METHOD:      // fall through
        case Type::Category::CLASS:       // fall through
        case Type::Category::PACKAGE:     // fall through
        case Type::Category::INT_LITERAL: // fall through
        case Type::Category::UNRESOLVED: abort();
    }
}

static bool ends_with_branch(const IRNode& block) {
    ASSERT(block.fKind == IRNode::Kind::BLOCK);
    if (block.fChildren.size() == 0) {
        return false;
    }
    switch (block.fChildren[block.fChildren.size() - 1].fKind) {
        case IRNode::Kind::RETURN: return true;
        default: return false;
    }
}

String LLVMCodeGenerator::nextVar() {
    return "%" + std::to_string(fTmpVars++);
}

String LLVMCodeGenerator::nextLabel() {
    return "$l" + std::to_string(fLabels++);
}

void LLVMCodeGenerator::createBlock(const String& label, std::ostream& out) {
    out << "\n" << label << ":" << "\n";
    fCurrentBlock = label;
}

String LLVMCodeGenerator::getVariableReference(const Variable& var, std::ostream& out) {
    if (var.fStorage == Variable::Storage::PARAMETER) {
        return this->varName(var);
    }
    String result = nextVar();
    out << "    " << result << " = load " << this->llvmType(var.fType) << "* " <<
            this->varName(var) << "\n";
    return result;
}


LLVMCodeGenerator::OpClass op_class(Type t) {
    switch (t.fCategory) {
        case Type::Category::BUILTIN_INT:   return LLVMCodeGenerator::OpClass::SIGNED;
        case Type::Category::BUILTIN_UINT:  return LLVMCodeGenerator::OpClass::UNSIGNED;
        case Type::Category::BUILTIN_FLOAT: return LLVMCodeGenerator::OpClass::FLOAT;
        default: abort();
    }
}

String LLVMCodeGenerator::getBinaryReference(OpClass cl, const String leftRef, Operator op,
        const String rightRef, std::ostream& out) {
    String llvmOp;
    switch (cl) {
        case OpClass::SIGNED:
            switch (op) {
                case Operator::ADD:        llvmOp = "add";      break;
                case Operator::SUB:        llvmOp = "sub";      break;
                case Operator::MUL:        llvmOp = "mul";      break;
                case Operator::INTDIV:     llvmOp = "sdiv";     break;
                case Operator::REM:        llvmOp = "mod";      break;
                case Operator::SHIFTLEFT:  llvmOp = "shl";      break;
                case Operator::SHIFTRIGHT: llvmOp = "ashr";     break;
                case Operator::BITWISEAND: llvmOp = "and";      break;
                case Operator::BITWISEOR:  llvmOp = "or";       break;
                case Operator::XOR:        // fall through
                case Operator::BITWISEXOR: llvmOp = "xor";      break;
                case Operator::EQ:         llvmOp = "icmp eq";  break;
                case Operator::NEQ:        llvmOp = "icmp ne";  break;
                case Operator::GT:         llvmOp = "icmp sgt"; break;
                case Operator::LT:         llvmOp = "icmp slt"; break;
                case Operator::GTEQ:       llvmOp = "icmp sge"; break;
                case Operator::LTEQ:       llvmOp = "icmp sle"; break;
                default:
                    printf("unsupported signed operator: %s\n", operator_text(op));
                    abort();
            }
            break;
        case OpClass::UNSIGNED:
            switch (op) {
                case Operator::ADD:        llvmOp = "add";      break;
                case Operator::SUB:        llvmOp = "sub";      break;
                case Operator::MUL:        llvmOp = "mul";      break;
                case Operator::INTDIV:     llvmOp = "udiv";     break;
                case Operator::REM:        llvmOp = "mod";      break;
                case Operator::SHIFTLEFT:  llvmOp = "shl";      break;
                case Operator::SHIFTRIGHT: llvmOp = "lshr";     break;
                case Operator::BITWISEAND: llvmOp = "and";      break;
                case Operator::BITWISEOR:  llvmOp = "or";       break;
                case Operator::XOR:        // fall through
                case Operator::BITWISEXOR: llvmOp = "xor";      break;
                case Operator::EQ:         llvmOp = "icmp eq";  break;
                case Operator::NEQ:        llvmOp = "icmp ne";  break;
                case Operator::GT:         llvmOp = "icmp ugt"; break;
                case Operator::LT:         llvmOp = "icmp ult"; break;
                case Operator::GTEQ:       llvmOp = "icmp uge"; break;
                case Operator::LTEQ:       llvmOp = "icmp ule"; break;
                default:
                    printf("unsupported unsigned operator: %s\n", operator_text(op));
                    abort();
            }
            break;
        case OpClass::FLOAT:
            switch (op) {
                case Operator::ADD:        llvmOp = "fadd";     break;
                case Operator::SUB:        llvmOp = "fsub";     break;
                case Operator::MUL:        llvmOp = "fmul";     break;
                case Operator::INTDIV:     llvmOp = "fdiv";     break;
                case Operator::EQ:         llvmOp = "fcmp oeq"; break;
                case Operator::NEQ:        llvmOp = "fcmp one"; break;
                case Operator::GT:         llvmOp = "fcmp ogt"; break;
                case Operator::LT:         llvmOp = "fcmp olt"; break;
                case Operator::GTEQ:       llvmOp = "fcmp oge"; break;
                case Operator::LTEQ:       llvmOp = "fcmp ole"; break;
                default:
                    printf("unsupported float operator: %s\n", operator_text(op));
                    abort();
            }
            break;
    }
    String result = this->nextVar();
    out << "    " << result << " = " << llvmOp << " " << leftRef << ", " << rightRef << "\n";
    return result;
}

String LLVMCodeGenerator::getAndReference(const IRNode& left, const IRNode& right,
        std::ostream& out) {
    String leftRef = this->getReference(left, out);
    String start = fCurrentBlock;
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << leftRef << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifTrue, out);
    String rightRef = this->getReference(right, out);
    out << "    br label %" << ifFalse;
    this->createBlock(ifFalse, out);
    String result = this->nextVar();
    out << "    " << result << " = phi i1 [0, %" << start << "], [" << rightRef << ", %" <<
            ifTrue << "]\n";
    return result;
}

String LLVMCodeGenerator::getOrReference(const IRNode& left, const IRNode& right,
        std::ostream& out) {
    String leftRef = this->getReference(left, out);
    String start = fCurrentBlock;
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << leftRef << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifFalse, out);
    String rightRef = this->getReference(right, out);
    out << "    br label %" << ifTrue;
    this->createBlock(ifTrue, out);
    String result = this->nextVar();
    out << "    " << result << " = phi i1 [1, %" << start << "], [" << rightRef << ", %" <<
            ifFalse << "]\n";
    return result;
}

String LLVMCodeGenerator::getBinaryReference(const IRNode& left, Operator op, const IRNode& right,
        std::ostream& out) {
    ASSERT(left.fType == right.fType);
    switch (op) {
        case Operator::AND: return this->getAndReference(left, right, out);
        case Operator::OR:  return this->getOrReference(left, right, out);
        default:
            String leftRef = this->getTypedReference(left, out);
            String rightRef = this->getReference(right, out);
            return this->getBinaryReference(op_class(left.fType), leftRef, op, rightRef, out);
    }
}

String LLVMCodeGenerator::getPrefixReference(const IRNode& expr, std::ostream& out) {
    ASSERT(expr.fKind == IRNode::Kind::PREFIX);
    ASSERT(expr.fChildren.size() == 1);
    String base = this->getReference(expr.fChildren[0], out);
    String result = this->nextVar();
    switch ((Operator) expr.fValue.fInt) {
        case Operator::SUB: {
            out << "    " << result << " = sub " << this->llvmType(expr.fType) << " 0, " << base <<
                    "\n";
            return result;
        }
        case Operator::NOT: // fall through
        case Operator::BITWISENOT: {
            out << "    " << result << " = xor " << this->llvmType(expr.fType) << " -1, " << base <<
                    "\n";
            return result;
        }
        default:
            printf("unsupported prefix operator: %s\n", operator_text((Operator) expr.fValue.fInt));
            abort();
    }
}

String LLVMCodeGenerator::getCallReference(const IRNode& call, std::ostream& out) {
    std::vector<String> args;
    for (int i = 1; i < call.fChildren.size(); ++i) {
        args.push_back(this->getTypedReference(call.fChildren[i], out));
    }
    String result = this->nextVar();
    out << "    " << result << " = call " << this->llvmType(call.fType) << " " <<
            this->getReference(call.fChildren[0], out) << "(";
    const char* separator = "";
    for (const auto& arg : args) {
        out << separator << arg; 
        separator = ", ";
    }
    out << ")\n";
    return result;
}

String LLVMCodeGenerator::getReference(const IRNode& expr, std::ostream& out) {
    switch (expr.fKind) {
        case IRNode::Kind::BIT:
            return std::to_string(expr.fValue.fBool);
        case IRNode::Kind::BINARY:
            ASSERT(expr.fChildren.size() == 2);
            return this->getBinaryReference(expr.fChildren[0], (Operator) expr.fValue.fInt,
                    expr.fChildren[1], out);
        case IRNode::Kind::CALL:
            return this->getCallReference(expr, out);
        case IRNode::Kind::INT:
            return std::to_string(expr.fValue.fInt);
        case IRNode::Kind::METHOD_REFERENCE:
            return this->methodName(*(MethodStub*) expr.fValue.fPtr);
        case IRNode::Kind::PREFIX:
            return this->getPrefixReference(expr, out);
        case IRNode::Kind::VARIABLE_REFERENCE:
            return this->getVariableReference(*((Variable*) expr.fValue.fPtr), out);
        default:
            printf("unsupported expression: %s\n", expr.description().c_str());
            abort();
    }
}

String LLVMCodeGenerator::getTypedReference(const IRNode& expr, std::ostream& out) {
    return this->llvmType(expr.fType) + " " + this->getReference(expr, out);
}

String LLVMCodeGenerator::getLValue(const IRNode& lvalue, std::ostream& out) {
    ASSERT(lvalue.fKind == IRNode::Kind::VARIABLE_REFERENCE);
    Variable* var = (Variable*) lvalue.fValue.fPtr;
    return this->llvmType(var->fType) + "* " + this->varName(*var);
}

void LLVMCodeGenerator::writeAndEq(const String& lvalue, const IRNode& right, std::ostream& out) {
    String left = this->nextVar();
    out << "    " << left << " = load " << lvalue << "\n";
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << left << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifTrue, out);
    String rightRef = this->getTypedReference(right, out);
    out << "    store " << rightRef << ", " << lvalue << "\n";
    out << "    br label %" << ifFalse;
    this->createBlock(ifFalse, out);
}

void LLVMCodeGenerator::writeOrEq(const String& lvalue, const IRNode& right, std::ostream& out) {
    String left = this->nextVar();
    out << "    " << left << " = load " << lvalue << "\n";
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << left << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifFalse, out);
    String rightRef = this->getTypedReference(right, out);
    out << "    store " << rightRef << ", " << lvalue << "\n";
    out << "    br label %" << ifTrue;
    this->createBlock(ifTrue, out);
}

void LLVMCodeGenerator::writeAssignment(const IRNode& a, std::ostream& out) {
    ASSERT(a.fKind == IRNode::Kind::BINARY);
    ASSERT(a.fChildren.size() == 2);
    String lvalue = this->getLValue(a.fChildren[0], out);
    String value;
    String type = this->llvmType(a.fChildren[0].fType);
    Operator op = (Operator) a.fValue.fInt;
    if (op == Operator::ASSIGNMENT) {
        String right = this->getReference(a.fChildren[1], out);
        value = type + " " + right;
    }
    else {
        Operator binOp;
        switch (op) {
            case Operator::ADDEQ:        binOp = Operator::ADD;                         break;
            case Operator::SUBEQ:        binOp = Operator::SUB;                         break;
            case Operator::MULEQ:        binOp = Operator::MUL;                         break;
            case Operator::DIVEQ:        binOp = Operator::DIV;                         break;
            case Operator::INTDIVEQ:     binOp = Operator::INTDIV;                      break;
            case Operator::REMEQ:        binOp = Operator::REM;                         break;
            case Operator::POWEQ:        binOp = Operator::POW;                         break;
            case Operator::XOREQ:        binOp = Operator::XOR;                         break;
            case Operator::BITWISEOREQ:  binOp = Operator::BITWISEOR;                   break;
            case Operator::BITWISEANDEQ: binOp = Operator::BITWISEAND;                  break;
            case Operator::BITWISEXOREQ: binOp = Operator::BITWISEXOR;                  break;
            case Operator::SHIFTLEFTEQ:  binOp = Operator::SHIFTLEFT;                   break;
            case Operator::SHIFTRIGHTEQ: binOp = Operator::SHIFTRIGHT;                  break;
            case Operator::ANDEQ:        this->writeAndEq(lvalue, a.fChildren[1], out); return;
            case Operator::OREQ:         this->writeOrEq(lvalue, a.fChildren[1], out);  return;
            default: abort();
        }
        String left = this->nextVar();
        out << "    " << left << " = load " << lvalue << "\n";
        String right = this->getReference(a.fChildren[1], out);
        value = type + " " +
                this->getBinaryReference(op_class(a.fChildren[0].fType), type + " " + left, binOp,
                        right, out);
    }
    out << "    store " << value << ", " << lvalue << "\n";
}

void LLVMCodeGenerator::writeCall(const IRNode& stmt, std::ostream& out) {
    std::vector<String> args;
    for (int i = 1; i < stmt.fChildren.size(); ++i) {
        args.push_back(this->getTypedReference(stmt.fChildren[i], out));
    }
    out << "    call " << this->llvmType(stmt.fType) << " " <<
            this->getReference(stmt.fChildren[0], out) << "(";
    const char* separator = "";
    for (const auto& arg : args) {
        out << separator << arg; 
        separator = ", ";
    }
    out << ")\n";
}

void LLVMCodeGenerator::writeIf(const IRNode& s, std::ostream& out) {
    ASSERT(s.fKind == IRNode::Kind::IF);
    ASSERT(s.fChildren.size() == 2 || s.fChildren.size() == 3);
    String test = this->getReference(s.fChildren[0], out);
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << test << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifTrue, out);
    this->writeStatement(s.fChildren[1], out);
    String end = s.fChildren.size() == 3 ? this->nextLabel() : ifFalse;
    if (!ends_with_branch(s.fChildren[1])) {
        out << "    br label %" << end << "\n";
    }
    if (s.fChildren.size() == 3) {
        this->createBlock(ifFalse, out);
        this->writeStatement(s.fChildren[2], out);
        if (!ends_with_branch(s.fChildren[2])) {
            out << "    br label %" << end << "\n";
        }
    }
    this->createBlock(end, out);
}

void LLVMCodeGenerator::writeVarTarget(const IRNode& target, const IRNode* value,
            std::ostream& out) {
    if (target.fKind == IRNode::Kind::TUPLE_TARGET) {
        abort();
    }
    else {
        ASSERT(target.fKind == IRNode::Kind::VARIABLE_REFERENCE);
        Variable& var = *((Variable*) target.fValue.fPtr);
        fMethodHeader << "    " << this->varName(var) << " = alloca " <<
                this->llvmType(var.fType) << "\n";
        if (value) {
            String ref = this->getTypedReference(*value, out);
            out << "    store " << ref << ", " << this->llvmType(var.fType) << "* " <<
                    this->varName(var) << "\n";
        }
    }
}

void LLVMCodeGenerator::writeVar(const IRNode& var, std::ostream& out) {
    ASSERT(var.fKind == IRNode::Kind::VAR ||
            var.fKind == IRNode::Kind::DEF ||
            var.fKind == IRNode::Kind::PROPERTY ||
            var.fKind == IRNode::Kind::CONSTANT);
    for (const auto& decl : var.fChildren) {
        ASSERT(decl.fKind == IRNode::Kind::DECLARATION);
        this->writeVarTarget(decl.fChildren[0], 
                decl.fChildren.size() > 1 ? &decl.fChildren[1] : nullptr,
                out);
    }
}

void LLVMCodeGenerator::writeBlock(const IRNode& block, std::ostream& out) {
    ASSERT(block.fKind == IRNode::Kind::BLOCK);
    for (const auto& s : block.fChildren) {
        this->writeStatement(s, out);
    }
}

void LLVMCodeGenerator::writeReturn(const IRNode& ret, std::ostream& out) {
    ASSERT(ret.fKind == IRNode::Kind::RETURN);
    if (ret.fChildren.size() == 1) {
        String ref = this->getTypedReference(ret.fChildren[0], out);
        out << "    ret " << ref << "\n";
    }
    else {
        ASSERT(ret.fChildren.size() == 0);
        out << "ret void\n`";
    }
}

void LLVMCodeGenerator::writeStatement(const IRNode& stmt, std::ostream& out) {
    switch (stmt.fKind) {
        case IRNode::Kind::BINARY:   this->writeAssignment(stmt, out); break;
        case IRNode::Kind::BLOCK:    this->writeBlock     (stmt, out); break;
        case IRNode::Kind::CALL:     this->writeCall      (stmt, out); break;
        case IRNode::Kind::IF:       this->writeIf        (stmt, out); break;
        case IRNode::Kind::RETURN:   this->writeReturn    (stmt, out); break;
        case IRNode::Kind::VAR:      // fall through
        case IRNode::Kind::DEF:      // fall through
        case IRNode::Kind::PROPERTY: // fall through
        case IRNode::Kind::CONSTANT: this->writeVar(stmt, out); break;
        default:
            printf("unsupported statement: %s\n", stmt.description().c_str());
            abort();
    }
}

static String escape_type_name(String name) {
    return name;
}

String LLVMCodeGenerator::methodName(const MethodStub& method) {
    String result = "@" + method.fName;
    for (const auto& p : method.fParameters) {
        result += "$" + escape_type_name(p.fType.fName);
    }
    if (method.fReturnType != Type::Void()) {
        result += "$R$" + escape_type_name(method.fReturnType.fName);
    }
    return result;
}

String LLVMCodeGenerator::varName(const Variable& var) {
    return "%" + var.fName;
}

void LLVMCodeGenerator::writeMethod(const ClassStub& cl, const MethodStub& method,
        const IRNode& body) {
    fTmpVars = 1;
    fOut << "\ndefine fastcc " << this->llvmType(method.fReturnType) << " " <<
            this->methodName(method) << "(";
    const char* separator = "";
    for (const auto& p : method.fParameters) {
        fOut << separator << this->llvmType(p.fType) << " %" << p.fName;
        separator = ", ";
    }
    fOut << ") {\n";
    fMethodHeader = std::stringstream();
    std::stringstream bodyCode;
    ASSERT(body.fKind == IRNode::Kind::BLOCK);
    for (const auto& s : body.fChildren) {
        this->writeStatement(s, bodyCode);
    }
    fOut << fMethodHeader.str();
    fOut << bodyCode.str();
    if (!ends_with_branch(body)) {
        fOut << "    ret void\n";
    }
    fOut << "}\n";
}
