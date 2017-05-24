#pragma once

#include "IRFile.h"
#include "Variable.h"

#include <ostream>
#include <sstream>

class LLVMCodeGenerator {
public:
    void write(const IRFile& file, std::ostream&& out);

private:
    String llvmType(const Type& type);

    String nextVar();

    String nextLabel();

    void createBlock(const String& label, std::ostream& out);

    String getVariableReference(const Variable& var, std::ostream& out);
    
    String getBinaryReference(const IRNode& stmt, std::ostream& out);

    String getReference(const IRNode& stmt, std::ostream& out);

    String getTypedReference(const IRNode& stmt, std::ostream& out);

    void writeCall(const IRNode& stmt, std::ostream& out);

    void writeIf(const IRNode& s, std::ostream& out);
    
    void writeVarTarget(const IRNode& var, const IRNode* value, std::ostream& out);

    void writeVar(const IRNode& var, std::ostream& out);

    void writeStatement(const IRNode& stmt, std::ostream& out);

    void writeBlock(const IRNode& block, std::ostream& out);

    String methodName(const String& name);

    String varName(const Variable& var);

    void writeMethod(const IRNode& method, std::ostream& out);

    int fTmpVars = 1;

    int fLabels = 0;

    std::stringstream fMethodHeader;

    String fCurrentBlock = "<error>";
};
