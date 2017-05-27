#pragma once

#include "CodeGenerator.h"
#include "Variable.h"

#include <ostream>
#include <sstream>

class LLVMCodeGenerator : public CodeGenerator {
public:
    LLVMCodeGenerator(std::ostream* out);

    void writeMethod(const IRNode& cl, const IRNode& method);

    enum class OpClass {
        SIGNED,
        UNSIGNED,
        FLOAT
    };

private:
    String llvmType(const Type& type);

    String nextVar();

    String nextLabel();

    void createBlock(const String& label, std::ostream& out);

    String getVariableReference(const Variable& var, std::ostream& out);
    
    String getAndReference(const IRNode& left, const IRNode& right, std::ostream& out);

    String getOrReference(const IRNode& left, const IRNode& right, std::ostream& out);

    String getBinaryReference(OpClass cl, const String leftRef, Operator op, const String rightRef,
            std::ostream& out);

    String getBinaryReference(const IRNode& left, Operator op, const IRNode& right,
            std::ostream& out);

    String getPrefixReference(const IRNode& expr, std::ostream& out);

    String getCallReference(const IRNode& call, std::ostream& out);
    
    String getReference(const IRNode& stmt, std::ostream& out);

    String getTypedReference(const IRNode& stmt, std::ostream& out);

    void writeCall(const IRNode& stmt, std::ostream& out);

    void writeIf(const IRNode& s, std::ostream& out);
    
    void writeVarTarget(const IRNode& var, const IRNode* value, std::ostream& out);

    void writeVar(const IRNode& var, std::ostream& out);

    String getLValue(const IRNode& lvalue, std::ostream& out);

    void writeAndEq(const String& lvalue, const IRNode& right, std::ostream& out);

    void writeOrEq(const String& lvalue, const IRNode& right, std::ostream& out);

    void writeAssignment(const IRNode& a, std::ostream& out);

    void writeReturn(const IRNode& ret, std::ostream& out);
    
    void writeStatement(const IRNode& stmt, std::ostream& out);

    void writeBlock(const IRNode& block, std::ostream& out);

    String methodName(const MethodStub& name);

    String varName(const Variable& var);

    void writeMethod(const ClassStub& cl, const MethodStub& method, const IRNode& body) override;

    int fTmpVars = 1;

    int fLabels = 0;

    std::stringstream fMethodHeader;

    std::ostream& fOut;

    String fCurrentBlock = "0";
};
