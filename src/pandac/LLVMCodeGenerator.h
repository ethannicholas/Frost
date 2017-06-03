#pragma once

#include "CodeGenerator.h"
#include "Variable.h"

#include <ostream>
#include <sstream>
#include <unordered_set>

class LLVMCodeGenerator : public CodeGenerator {
public:
    LLVMCodeGenerator(std::ostream* out);

    ~LLVMCodeGenerator() {
        fOut << fTypeDeclarations.str();
        fOut << fMethods.str();
    }

    void writeMethod(const Method& method, const IRNode& body, Compiler& compiler) override;

    enum class OpClass {
        SIGNED,
        UNSIGNED,
        FLOAT
    };

private:
    class ClassConstant {
    public:
        ClassConstant() {}
        
        ClassConstant(String name, String type)
        : fName(std::move(name))
        , fType(std::move(type)) {}

        String fName;

        String fType;
    };

    void writeType(const Type& type);

    size_t sizeOf(const Type& type);

    ClassConstant& getClassConstant(const Class& cl);

    String llvmTypeName(const Type& type);

    String llvmType(const Type& type);

    String llvmType(const Method& m);

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

    String getVirtualMethodReference(const String& target, const Method* m, std::ostream& out);

    String getMethodReference(const String& target, const Method* m, std::ostream& out);

    String getCallReference(const IRNode& call, std::ostream& out);

    String getCastReference(const IRNode& call, std::ostream& out);

    String getConstructReference(const IRNode& construct, std::ostream& out);

    String getSelfReference(const IRNode& self, std::ostream& out);

    String getFieldReference(const IRNode& self, std::ostream& out);

    String getReference(const IRNode& stmt, std::ostream& out);

    String getTypedReference(const IRNode& stmt, std::ostream& out);

    void writeCall(const IRNode& stmt, const String& target, std::ostream& out);

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

    String methodName(const Method& name);

    String varName(const Variable& var);

    int fTmpVars = 1;

    int fLabels = 0;

    const Class* fCurrentClass;

    const Method* fCurrentMethod;

    std::stringstream fMethodHeader;

    std::unordered_set<String> fWrittenTypes;

    std::stringstream fTypeDeclarations;

    std::stringstream fMethods;

    std::ostream& fOut;

    String fCurrentBlock = "0";

    Compiler* fCompiler;

    std::unordered_map<String, ClassConstant> fClassConstants;

    std::unordered_map<String, size_t> fSizes;
};
