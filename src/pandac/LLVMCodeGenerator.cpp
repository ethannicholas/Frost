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
}

String LLVMCodeGenerator::getVariableReference(const Variable& var, std::ostream& out) {
    String result = nextVar();
    out << "    " << result << " = load " << this->llvmType(var.fType) << "* " <<
            this->varName(var) << "\n";
    return result;
}

String LLVMCodeGenerator::getBinaryReference(const IRNode& bin, std::ostream& out) {
    ASSERT(bin.fKind == IRNode::Kind::BINARY);
    ASSERT(bin.fChildren.size() == 2);
    ASSERT(bin.fChildren[0].fType == bin.fChildren[1].fType);
    String left = this->getTypedReference(bin.fChildren[0], out);
    String right = this->getReference(bin.fChildren[1], out);
    String op;
    switch ((Operator) bin.fValue.fInt) {
        case Operator::ADD: op = "add"; break;
        default:
            printf("unsupported operator: %s\n", operator_text((Operator) bin.fValue.fInt));
            abort();
    }
    String result = this->nextVar();
    out << "    " << result << " = " << op << " " << left << ", " << right << "\n";
    return result;
}

String LLVMCodeGenerator::getReference(const IRNode& expr, std::ostream& out) {
    switch (expr.fKind) {
        case IRNode::Kind::BIT:
            return std::to_string(expr.fValue.fBool);
        case IRNode::Kind::INT:
            return std::to_string(expr.fValue.fInt);
        case IRNode::Kind::BINARY:
            return this->getBinaryReference(expr, out);
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
        case IRNode::Kind::BLOCK:    this->writeBlock(stmt, out); break;
        case IRNode::Kind::CALL:     this->writeCall (stmt, out); break;
        case IRNode::Kind::IF:       this->writeIf   (stmt, out); break;
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
