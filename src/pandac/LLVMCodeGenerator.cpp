#include "LLVMCodeGenerator.h"
#include "MethodStub.h"

String LLVMCodeGenerator::llvmType(const Type& type) {
    switch (type.fCategory) {
        case Type::Category::VOID:        return "void";
        case Type::Category::BUILTIN_INT: return "i" + std::to_string(type.fSize);
        case Type::Category::METHOD: abort();
        case Type::Category::TYPE: abort();
        case Type::Category::INT_LITERAL: abort();
    }
}

static bool ends_with_branch(const IRNode& block) {
    ASSERT(block.fKind == IRNode::Kind::BLOCK);
    if (block.fChildren.size() == 0) {
        return false;
    }
    switch (block.fChildren[block.fChildren.size() - 1].fKind) {
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
    String result = nextVar();
    out << "    " << result << " = load " << this->llvmType(var.fType) << "* " <<
            this->varName(var) << "\n";
    return result;
}

String LLVMCodeGenerator::getBinaryReference(const String leftRef, Operator op,
        const String rightRef, std::ostream& out) {
    String llvmOp;
    switch (op) {
        case Operator::ADD:        llvmOp = "add";      break;
        case Operator::SUB:        llvmOp = "sub";      break;
        case Operator::MUL:        llvmOp = "mul";      break;
        case Operator::DIV:        llvmOp = "div";      break;
        case Operator::REM:        llvmOp = "mod";      break;
        case Operator::SHIFTLEFT:  llvmOp = "shl";      break;
        case Operator::SHIFTRIGHT: llvmOp = "shr";      break;
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
            printf("unsupported operator: %s\n", operator_text(op));
            abort();
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
            return this->getBinaryReference(leftRef, op, rightRef, out);
    }
}

String LLVMCodeGenerator::getReference(const IRNode& expr, std::ostream& out) {
    switch (expr.fKind) {
        case IRNode::Kind::BIT:
            return std::to_string(expr.fValue.fBool);
        case IRNode::Kind::INT:
            return std::to_string(expr.fValue.fInt);
        case IRNode::Kind::BINARY:
            ASSERT(expr.fChildren.size() == 2);
            return this->getBinaryReference(expr.fChildren[0], (Operator) expr.fValue.fInt,
                    expr.fChildren[1], out);
        case IRNode::Kind::METHOD_REFERENCE:
            return this->methodName(((MethodStub*) expr.fValue.fPtr)->fName);
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
                this->getBinaryReference(type + " " + left, binOp, right, out);
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

void LLVMCodeGenerator::writeStatement(const IRNode& stmt, std::ostream& out) {
    switch (stmt.fKind) {
        case IRNode::Kind::BINARY:   this->writeAssignment(stmt, out); break;
        case IRNode::Kind::BLOCK:    this->writeBlock     (stmt, out); break;
        case IRNode::Kind::CALL:     this->writeCall      (stmt, out); break;
        case IRNode::Kind::IF:       this->writeIf        (stmt, out); break;
        case IRNode::Kind::VAR:      // fall through
        case IRNode::Kind::DEF:      // fall through
        case IRNode::Kind::PROPERTY: // fall through
        case IRNode::Kind::CONSTANT: this->writeVar(stmt, out); break;
        default:
            printf("unsupported statement: %s\n", stmt.description().c_str());
            abort();
    }
}

String LLVMCodeGenerator::methodName(const String& name) {
    return "@" + name;
}

String LLVMCodeGenerator::varName(const Variable& var) {
    return "%" + var.fName;
}

void LLVMCodeGenerator::writeMethod(const IRNode& method, std::ostream& out) {
    fTmpVars = 1;
    ASSERT(method.fKind == IRNode::Kind::METHOD);
    ASSERT(method.fChildren[0].fKind == IRNode::Kind::PARAMETERS);
    ASSERT(method.fChildren[1].fKind == IRNode::Kind::TYPE_REFERENCE);
    out << "define fastcc " << this->llvmType(*(Type*) method.fChildren[1].fValue.fPtr) <<
            " " << this->methodName(method.fText) << "(";
    out << ") {\n";
    fMethodHeader = std::stringstream();
    std::stringstream body;
    ASSERT(method.fChildren[2].fKind == IRNode::Kind::BLOCK);
    const IRNode& block = method.fChildren[2];
    ASSERT(block.fKind == IRNode::Kind::BLOCK);
    for (const auto& s : block.fChildren) {
        this->writeStatement(s, body);
    }
    out << fMethodHeader.str();
    out << body.str();
    if (!ends_with_branch(block)) {
        out << "    ret void\n";
    }
    out << "}\n";
}

void LLVMCodeGenerator::write(const IRFile& file, std::ostream&& out) {
    ASSERT(file.fRoot.fKind == IRNode::Kind::FILE);
    out << "target datalayout = \"e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-"
            "f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-"
            "n8:16:32:64-S128\"\n";
    out << "target triple = \"x86_64-apple-macosx10.8.0\"\n";

    // temporary
    out << "declare i32 @printf(i8*, ...)\n";
    out << "@fmt = private constant [4 x i8] [i8 37, i8 100, i8 10, i8 0]\n";
    out << "define fastcc void @print(i64 %num) {\n";
    out << "    call i32 (i8*, ...)* @printf(i8* bitcast ([4 x i8]* @fmt to i8*), i64 %num)\n";
    out << "    ret void\n";
    out << "}\n";

    for (const auto& e : file.fRoot.fChildren) {
        switch (e.fKind) {
            case IRNode::Kind::METHOD:
                this->writeMethod(e, out);
                break;
            default:
                abort();
        }
    }
}
