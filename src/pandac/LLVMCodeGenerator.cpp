#include "Compiler.h"
#include "LLVMCodeGenerator.h"
#include "Method.h"
#include "MethodRef.h"

static constexpr int CLASS_POINTER_INDEX = 0;
static constexpr int ITABLE_INDEX = 2;
static constexpr int VTABLE_INDEX = 3;
static constexpr int POINTER_SIZE = 8;
static constexpr int OBJECT_FIELD_COUNT = 2;
#define INT_T "i64"
#define SIZE_T "i64"

class AutoLoopDescriptor {
public:
    AutoLoopDescriptor(LLVMCodeGenerator* llvm, String loopLabel, String breakLabel,
            String continueLabel)
    : fLLVM(llvm) {
        llvm->fLoops.emplace_back(std::move(loopLabel), std::move(breakLabel),
                std::move(continueLabel));
    }

    ~AutoLoopDescriptor() {
        fLLVM->fLoops.pop_back();
    }

private:
    LLVMCodeGenerator* fLLVM;
};

LLVMCodeGenerator::LLVMCodeGenerator(std::ostream* out)
: fOut(*out) {}

void LLVMCodeGenerator::start(Compiler* compiler) {
    fCompiler = compiler;

    fOut << "target datalayout = \"e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-"
            "f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-"
            "n8:16:32:64-S128\"\n";

#ifdef __APPLE__
    fOut << "target triple = \"x86_64-apple-macosx10.8.0\"\n";
#elif __linux__
    fOut << "target triple = \"x86_64-pc-linux-gnu\"\n";
#else
    unsupported operating system
#endif
    fOut << "%$itable = type { %panda$core$Class*, %$itable*, [0 x i8*] }\n";

    fOut << "declare void @llvm.trap() noreturn nounwind\n";
    fOut << "declare i8* @malloc(" SIZE_T ")\n";
    fOut << "declare i8* @realloc(i8*, " SIZE_T ")\n";
    fOut << "declare void @free(i8*)\n";
}

size_t LLVMCodeGenerator::fieldSize(const Type& type) {
    switch (type.fCategory) {
        case Type::Category::BUILTIN_INT: // fall through
        case Type::Category::BUILTIN_UINT: return std::max(type.fSize / 8, 1);
        case Type::Category::CLASS: // fall through
        case Type::Category::GENERIC: return POINTER_SIZE;
        case Type::Category::PARAMETER:
            return POINTER_SIZE;
        case Type::Category::NULLABLE: {
            ASSERT(type.fSubtypes.size() == 1);
            Class* cl = fCompiler->getClass(type);
            ASSERT(cl);
            if (cl->isValue(fCompiler)) {
                return this->fieldSize(type.fSubtypes[0]) + 1;
            }
            return POINTER_SIZE;
        }
        default: abort();
    }
}

size_t LLVMCodeGenerator::sizeOf(const Type& type) {
    switch (type.fCategory) {
        case Type::Category::CLASS: {
            auto found = fSizes.find(type.fName);
            if (found != fSizes.end()) {
                return found->second;
            }
            size_t result = 0;
            Class* cl = fCompiler->getClass(type);
            ASSERT(cl);
            for (const Field* f : fCompiler->getInstanceFields(*cl)) {
                size_t fieldSize = this->fieldSize(f->fType);
                size_t align = result % fieldSize;
                if (align) {
                    result += fieldSize - align;
                }
                ASSERT(result % fieldSize == 0);
                result += fieldSize;
            }
            fSizes[type.fName] = result;
            return result;
        }
        case Type::Category::GENERIC:
            return this->sizeOf(type.fSubtypes[0]);
        case Type::Category::PARAMETER:
            return this->sizeOf(type.fSubtypes[0]);
        default:
            return this->fieldSize(type);
    }
}

static String escape_type_name(String name) {
    String result;
    for (char c : name) {
        switch (c) {
            case '.': result += "$";   break;
            case '?': result += "$Q";   break;
            case '<': result += "$LT"; break;
            case '>': result += "$GT"; break;
            case ',': result += ",";   break;
            case ' ':                  break;
            default:  result += c;
        }
    }
    return result;
}

static bool is_instance(const Method& method) {
    return !method.fAnnotations.isClass();
}

static bool is_virtual(const Method& method) {
    return is_instance(method) && method.fMethodKind != Method::Kind::INIT &&
            !method.fAnnotations.isFinal();
}

void LLVMCodeGenerator::getMethodTableEntry(Method& m, String* outName, String* outType) {
    if (m.fOwner.fExternal) {
        this->writeMethodDeclaration(m);
    }
    fCompiler->resolveTypes(&m);
    *outName = this->methodName(m);
    Type effective = m.inheritedTypeWithSelf(*fCompiler);
    if (this->needsStructIndirection(m)) {
        *outType = "void (";
        *outType += this->llvmType(effective.fSubtypes.back());
        *outType += "*";
        for (int i = 0; i < effective.fSubtypes.size() - 1; ++i) {
            *outType += ", ";
            *outType += this->llvmType(effective.fSubtypes[i]);
        }
        *outType += ")*";
        return;
    }
    *outType = this->llvmType(effective);
}

String LLVMCodeGenerator::getITable(Class& cl) {
    std::set<Type> interfaces = fCompiler->allInterfaces(cl.fType);
    String previous = "%$itable* null";
    for (const Type intfType : interfaces) {
        Class* intf = fCompiler->getClass(intfType);
        ClassConstant& intfCC = this->getClassConstant(*intf);
        std::vector<Method*> methods = fCompiler->interfaceMethods(cl, intfType);
        String name = "@" + escape_type_name(cl.fName) + "$." + escape_type_name(intf->fName);
        String type = "{ " + this->llvmType(Type::Class()) + ", %$itable*, [" +
                std::to_string(methods.size()) + " x i8*] }";
        String result;
        result += name + " = constant ";
        result += type + " { " + this->llvmType(Type::Class()) + " bitcast(" + intfCC.fType +
                "* " + intfCC.fName + " to " + this->llvmType(Type::Class()) + "), " + previous +
                ", [" + std::to_string(methods.size()) + " x i8*][";
        const char* separator = "";
        for (Method* m : methods) {
            result += separator;
            separator = ", ";
            if (m->fAnnotations.isAbstract()) {
                result += "i8* null";
            }
            else {
                String name;
                String type;
                this->getMethodTableEntry(*m, &name, &type);
                result += "i8* bitcast(" + type + " " + name + " to i8*)";
            }
        }
        result += "] }\n";
        fTypeDeclarations << result;
        previous = "%$itable* bitcast(" + type + "* " + name + " to %$itable*)";
    }
    return previous;
}

LLVMCodeGenerator::ClassConstant& LLVMCodeGenerator::getClassConstant(Class& cl) {
    auto found = fClassConstants.find(cl.fName);
    if (found == fClassConstants.end()) {
        String type;
        if (cl.fExternal) {
            ClassConstant cc("@" + escape_type_name(cl.fType.fName) + "$class",
                    "{ i8*, " INT_T ", %$itable*, [0 x i8*] }");
            fClassConstants[cl.fName] = cc;
            fTypeDeclarations << cc.fName + " = external global " + cc.fType + "\n";
            return fClassConstants[cl.fName];
        }
        const std::vector<Method*>& vtable = fCompiler->getVTable(cl);
        ClassConstant cc("@" + escape_type_name(cl.fType.fName) + "$class",
                "{ i8*, " INT_T ", %$itable*, [" + std::to_string(vtable.size()) +
                " x i8*] }");
        fClassConstants[cl.fName] = cc;
        String super;
        if (cl.getRawSuper(fCompiler) != Type::Void()) {
            const ClassConstant& superCC = this->getClassConstant(
                    *fCompiler->getClass(cl.getRawSuper(fCompiler)));
            super = "bitcast(" + superCC.fType + "* " + superCC.fName + " to i8*)";
        }
        else {
            super = "null";
        }
        String itable = this->getITable(cl);
        String code = cc.fName + " = constant " + cc.fType + " { i8* " + super +
                (", " INT_T " 1, ") + itable + ", [" + std::to_string(vtable.size()) +
                " x i8*] [";
        const char* separator = "";
        for (Method* m : vtable) {
            code += separator;
            if (m->fAnnotations.isAbstract()) {
                code += "i8* null";
            }
            else {
                String name;
                String type;
                this->getMethodTableEntry(*m, &name, &type);
                code += "i8* bitcast(" + type + " " + name + " to i8*)";
            }
            separator = ", ";
        }
        code += "] }\n";
        fTypeDeclarations << code;
        return fClassConstants[cl.fName];
    }
    return found->second;
}

LLVMCodeGenerator::ClassConstant& LLVMCodeGenerator::getWrapperClassConstant(Class& cl) {
    // need to shim methods inherited from Value. When the class is called as itself, it is
    // unwrapped prior to the call, so they just work. But when it is called via an Object or Value
    // pointer, the callee has no idea it's dealing with a wrapper, so the wrapper doesn't
    // automatically get unwrapped as part of the call. We create shims for Value's virtual methods
    // which unwrap the object and forward the calls on to the correct implementation.
    ASSERT(cl.isValue(fCompiler));
    String name = cl.fName + "$Wrapper";
    auto found = fClassConstants.find(name);
    if (found == fClassConstants.end()) {
        Class& value = *fCompiler->getClass(Type::Value());
        std::vector<Method*>& valueVTable = fCompiler->getVTable(value);
        std::vector<Method*>& vtable = fCompiler->getVTable(cl);
        ClassConstant cc("@" + escape_type_name(cl.fType.fName) + "$wrapperclass",
                "{ i8*, " INT_T ", %$itable*, [" + std::to_string(valueVTable.size()) +
                " x i8*] }");
        fClassConstants[name] = cc;
        if (cl.fExternal) {
            fTypeDeclarations << cc.fName + " = external global " + cc.fType + "\n";
            return fClassConstants[cl.fName];
        }
        const ClassConstant& superCC = this->getClassConstant(*fCompiler->getClass(
                cl.getRawSuper(fCompiler)));
        String super = "bitcast(" + superCC.fType + "* " + superCC.fName + " to i8*)";
        String code = cc.fName + " = constant " + cc.fType + " { i8* " + super +
                ", " INT_T " 1, %$itable* null, [" + std::to_string(valueVTable.size()) +
                " x i8*] [";
        const char* separator = "";
        for (int i = 0; i < valueVTable.size(); ++i) {
            Method* m = vtable[i];
            String methodName;
            if (&m->fOwner == &cl) {
                methodName = this->createWrapperShim(*m, fShims);
            }
            else {
                methodName = this->methodName(*m);
                if (m->fOwner.fExternal) {
                    this->writeMethodDeclaration(*m);
                }
            }
            code += separator + ("i8* bitcast(" + this->llvmType(*valueVTable[i])) + " " +
                    methodName + " to i8*)";
            separator = ", ";
        }
        code += "] }\n";
        fTypeDeclarations << code;
        return fClassConstants[cl.fName];
    }
    return found->second;
}

String LLVMCodeGenerator::createWrapperShim(const Method& m, std::ostream& out) {
    int oldTmpVar = fTmpVars;
    fTmpVars = 1;
    ASSERT(is_instance(m));
    String result = this->methodName(m) + "$wrappershim";
    out << "define ccc " << this->llvmType(m.fReturnType) << " " <<
            result << "(";
    out << this->llvmType(Type::Object()) << " %self";
    for (const auto& p : m.fParameters) {
        out << ", " << this->llvmType(p.fType) << " %" << p.fName;
    }
    out << ") {\n";
    std::vector<IRNode> children;
    children.push_back(IRNode(Position(), IRNode::Kind::SELF, Type::Object()));
    String unwrapped = this->getTypedReference(IRNode(Position(), IRNode::Kind::CAST,
            m.fOwner.fType, std::move(children)), out);
    out << "    ";
    String returnValue;
    if (m.fReturnType != Type::Void()) {
        returnValue = this->nextVar();
        out << returnValue << " = ";
        returnValue = this->llvmType(m.fReturnType) + " " + returnValue;
    }
    else {
        returnValue = "void";
    }
    out << "call " << this->callingConvention(m) << this->llvmType(m.fReturnType) << " " <<
            this->methodName(m) << "(" << unwrapped;
    for (const auto& p : m.fParameters) {
        out << ", " << this->llvmType(p.fType) << " %" << p.fName;
    }
    out << ")\n";
    out << "    ret " << returnValue << "\n";
    out << "}\n";
    fTmpVars = oldTmpVar;
    return result;
}

bool is_constant_number(const IRNode& expr) {
    return expr.fKind == IRNode::Kind::CONSTRUCT && expr.fType.isNumber() &&
            expr.fChildren[0].fChildren[1].fKind == IRNode::Kind::INT;
}

void LLVMCodeGenerator::writeClass(Class& cl) {
    if (cl.fWritten) {
        return;
    }
    cl.fWritten = true;
    if (cl.fName == "panda.core.Pointer") {
        return;
    }
    this->getClassConstant(cl);
    if (cl.isValue(fCompiler)) {
        this->getWrapperClassConstant(cl);
    }
    const Type& type = cl.fType;
    std::vector<Field*> fields = fCompiler->getInstanceFields(cl);
    std::vector<String> types;
    for (const Field* f : fields) {
        types.push_back(this->llvmType(f->fType));
    }
    fTypeDeclarations << "\n";
    fTypeDeclarations << this->llvmTypeName(type) << " = type { ";
    const char* separator = "";
    for (const String& t : types) {
        fTypeDeclarations << separator << t;
        separator = ", ";
    }
    if (type == Type::Class()) {
        fTypeDeclarations << ", %$itable*";
    }
    fTypeDeclarations << " }\n";
    std::stringstream classInit;
    for (const Field* f : cl.fFields) {
        if (f->fAnnotations.isClass()) {
            fTypeDeclarations << this->fieldName(*f) << " = ";
            if (cl.fExternal) {
                fTypeDeclarations << "external ";
            }
            fTypeDeclarations << "global " << this->llvmType(f->fType);
            if (!cl.fExternal) {
                if (f->fValue && is_constant_number(*f->fValue)) {
                    fTypeDeclarations << " { " <<
                            this->llvmType(f->fValue->fChildren[0].fChildren[1].fType) << " " <<
                            std::to_string(f->fValue->fChildren[0].fChildren[1].fValue.fInt) <<
                            " }";
                }
                else {
                    ASSERT(f->fValue);
                    fTypeDeclarations << " " << this->defaultValue(f->fType);
                    fInitializedClasses.insert(&cl);
                    String value = this->getTypedReference(*f->fValue, classInit);
                    classInit << "    store " << value << ", " << this->llvmType(f->fType) <<
                            "* " << this->fieldName(*f) << "\n";
                }
            }
            fTypeDeclarations << "\n";
        }
    }
    if (classInit.str().size()) {
        fShims << "@" << escape_type_name(cl.fName) << "$$classInited = global i1 false\n";
        fShims << "define fastcc void @" << escape_type_name(cl.fName) << "$$classInit() {\n";
        fShims << fMethodHeader.str();
        fShims << "    %done = load i1, i1* @" << escape_type_name(cl.fName) << "$$classInited\n";
        fShims << "    br i1 %done, label %exit, label %continue\n";
        fShims << "continue:\n";
        fMethodHeader.str("");
        fShims << "    store i1 true, i1* @" << escape_type_name(cl.fName) << "$$classInited\n";
        fShims << classInit.str();
        fShims << "    br label %exit\n";
        fShims << "exit:\n";
        fShims << "    ret void\n}\n";
    }
}

void LLVMCodeGenerator::writeWrapperType(const Type& type) {
    if (fWrittenWrappers.find(type.fName) == fWrittenWrappers.end()) {
        fWrittenWrappers.insert(type.fName);
        Class* cl = fCompiler->getClass(type);
        ASSERT(cl);
        ASSERT(cl->isValue(fCompiler));
        this->getWrapperClassConstant(*cl);
        std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
        std::vector<String> types;
        for (const Field* f : fields) {
            types.push_back(this->llvmType(f->fType));
        }
        fTypeDeclarations << "\n";
        fTypeDeclarations << this->llvmTypeName(type) << "$wrapper = type { " <<
                this->llvmType(Type::Class()) << ", i32";
        for (const String& t : types) {
            fTypeDeclarations << ", " << t;
        }
        fTypeDeclarations << " }\n";
    }
}

void LLVMCodeGenerator::writeNullableType(const Type& type) {
    ASSERT(type.fCategory == Type::Category::NULLABLE);
    ASSERT(type.fSubtypes.size() == 1);
    const Type& base = type.fSubtypes[0];
    if (fWrittenNullables.find(base.fName) == fWrittenNullables.end()) {
        fWrittenNullables.insert(base.fName);
        Class* cl = fCompiler->getClass(base);
        ASSERT(cl);
        ASSERT(cl->isValue(fCompiler));
        std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
        std::vector<String> types;
        for (const Field* f : fields) {
            types.push_back(this->llvmType(f->fType));
        }
        fTypeDeclarations << "\n";
        fTypeDeclarations << this->llvmTypeName(base) <<
                "$nullable = type { ";
        const char* separator = "";
        for (const String& t : types) {
            fTypeDeclarations << separator << t;
            separator = ", ";
        }
        fTypeDeclarations << separator << "i1 }\n";
    }
}

String LLVMCodeGenerator::llvmTypeName(const Type& type) {
    ASSERT(type.fCategory == Type::Category::CLASS);
    return "%" + escape_type_name(type.fName);
}

String LLVMCodeGenerator::llvmType(const Type& type) {
    switch (type.fCategory) {
        case Type::Category::VOID: return "void";
        case Type::Category::BUILTIN_INT: // fall through
        case Type::Category::BUILTIN_UINT: return "i" + std::to_string(type.fSize);
        case Type::Category::BUILTIN_FLOAT: return "f" + std::to_string(type.fSize);
        case Type::Category::NULL_LITERAL: return "i8*";
        case Type::Category::CLASS: {
            Class* cl = fCompiler->getClass(type);
            this->writeClass(*cl);
            ASSERT(cl);
            if (cl->isValue(fCompiler)) {
                return this->llvmTypeName(type);
            }
            return this->llvmTypeName(type) + "*";
        }
        case Type::Category::GENERIC:
            ASSERT(type.fSubtypes.size() >= 2);
            if (type.fSubtypes[0].fName == "panda.core.Pointer") {
                String result = this->llvmType(type.fSubtypes[1]) + "*";
                return result;
            }
            return this->llvmType(type.fSubtypes[0]);
        case Type::Category::PARAMETER:
            return this->llvmType(type.fSubtypes[0]);
        case Type::Category::NULLABLE: {
            Class* cl = fCompiler->getClass(type.fSubtypes[0]);
            ASSERT(cl);
            if (cl->isValue(fCompiler)) {
                return this->llvmNullableType(type);
            }
            return this->llvmType(type.fSubtypes[0]);
        }
        case Type::Category::FUNCTION: // fall through
        case Type::Category::METHOD: {
            ASSERT(type.fSubtypes.size() >= 1);
            String result = this->llvmType(type.fSubtypes.back());
            result += "(";
            const char* separator = "";
            for (int i = 0; i < type.fSubtypes.size() - 1; ++i) {
                result += separator;
                result += this->llvmType(type.fSubtypes[i]);
                separator = ", ";
            }
            result += ")*";
            return result;
        }
        case Type::Category::PACKAGE:     // fall through
        case Type::Category::INT_LITERAL: // fall through
        case Type::Category::UNRESOLVED:
            printf("internal error: unresolved type %s\n", type.fName.c_str());
            return "<internal error>";
    }
}

String LLVMCodeGenerator::llvmWrapperTypeName(const Type& type) {
    if (type.fCategory == Type::Category::NULLABLE) {
        return this->llvmWrapperTypeName(type.fSubtypes[0]);
    }
    ASSERT(type.fCategory == Type::Category::CLASS);
    this->writeWrapperType(type);
    return this->llvmTypeName(type) + "$wrapper";
}

String LLVMCodeGenerator::llvmWrapperType(const Type& type) {
    return this->llvmWrapperTypeName(type) + "*";
}

String LLVMCodeGenerator::llvmNullableType(const Type& type) {
    ASSERT(type.fCategory == Type::Category::NULLABLE);
    ASSERT(type.fSubtypes.size() == 1);
    this->writeNullableType(type);
    return this->llvmTypeName(type.fSubtypes[0]) + "$nullable";
}

String LLVMCodeGenerator::llvmType(const Method& m) {
    String result = this->llvmType(m.fReturnType);
    result += "(";
    const char* separator = "";
    if (is_instance(m)) {
        result += separator;
        result += this->selfType(m);
        separator = ", ";
    }
    for (const auto& p : m.fParameters) {
        result += separator;
        result += this->llvmType(p.fType);
        separator = ", ";
    }
    result += ")*";
    return result;
}

String LLVMCodeGenerator::selfType(const Method& method) {
    String result = this->llvmType(method.fOwner.fType);
    if (method.fMethodKind == Method::Kind::INIT) {
        if (result[result.size() - 1] != '*') {
            result += '*';
        }
    }
    return std::move(result);
}

static bool ends_with_branch(const IRNode& stmt) {
    switch (stmt.fKind) {
        case IRNode::Kind::BLOCK:
            if (stmt.fChildren.size() == 0) {
                return false;
            }
            return ends_with_branch(stmt.fChildren.back());
        case IRNode::Kind::BREAK:    // fall through
        case IRNode::Kind::CONTINUE: // fall through
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
    String type = this->llvmType(var.fType);
    out << "    " << result << " = load " << type << ", " << type << "* " << this->varName(var) <<
            "\n";
    return result;
}

LLVMCodeGenerator::OpClass op_class(Type t) {
    switch (t.fCategory) {
        case Type::Category::BUILTIN_INT:   return LLVMCodeGenerator::OpClass::SIGNED;
        case Type::Category::BUILTIN_UINT:  return LLVMCodeGenerator::OpClass::UNSIGNED;
        case Type::Category::BUILTIN_FLOAT: return LLVMCodeGenerator::OpClass::FLOAT;
        default:
            printf("unsupported type in op_class: %s\n", t.description().c_str());
            abort();
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
                case Operator::REM:        llvmOp = "srem";     break;
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
                case Operator::REM:        llvmOp = "urem";     break;
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
    if (left.fType == Type::Bit()) {
        String leftField = this->nextVar();
        out << "    " << leftField << " = extractvalue %panda$core$Bit " << leftRef << ", 0\n";
        leftRef = leftField;
    }
    String start = fCurrentBlock;
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << leftRef << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifTrue, out);
    String rightRef = this->getReference(right, out);
    if (right.fType == Type::Bit()) {
        String rightField = this->nextVar();
        out << "    " << rightField << " = extractvalue %panda$core$Bit " << rightRef << ", 0\n";
        rightRef = rightField;
    }
    String truePred = fCurrentBlock;
    out << "    br label %" << ifFalse;
    this->createBlock(ifFalse, out);
    String result = this->nextVar();
    out << "    " << result << " = phi i1 [0, %" << start << "], [" << rightRef << ", %" <<
            truePred << "]\n";
    return result;
}

String LLVMCodeGenerator::getOrReference(const IRNode& left, const IRNode& right,
        std::ostream& out) {
    String leftRef = this->getReference(left, out);
    if (left.fType == Type::Bit()) {
        String leftField = this->nextVar();
        out << "    " << leftField << " = extractvalue %panda$core$Bit " << leftRef << ", 0\n";
        leftRef = leftField;
    }
    String start = fCurrentBlock;
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << leftRef << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifFalse, out);
    String rightRef = this->getReference(right, out);
    if (right.fType == Type::Bit()) {
        String rightField = this->nextVar();
        out << "    " << rightField << " = extractvalue %panda$core$Bit " << rightRef << ", 0\n";
        rightRef = rightField;
    }
    String falsePred = fCurrentBlock;
    out << "    br label %" << ifTrue;
    this->createBlock(ifTrue, out);
    String result = this->nextVar();
    out << "    " << result << " = phi i1 [1, %" << start << "], [" << rightRef << ", %" <<
            falsePred << "]\n";
    return result;
}

String LLVMCodeGenerator::getIdentityReference(const IRNode& left, const IRNode& right,
        std::ostream& out) {
    String leftRef = this->getTypedReference(left, out);
    String rightRef = this->getReference(left, out);
    String raw = this->nextVar();
    out << "    " << raw << " = icmp eq " << leftRef << ", " << rightRef << "\n";
    String result = this->nextVar();
    out << "    " << result << " = insertvalue %panda$core$Bit { i1 undef }, i1 " << raw << ", 0\n";
    return result;
}

String LLVMCodeGenerator::getNIdentityReference(const IRNode& left, const IRNode& right,
        std::ostream& out) {
    String leftRef = this->getTypedReference(left, out);
    String rightRef = this->getReference(left, out);
    String raw = this->nextVar();
    out << "    icmp ne " << leftRef << ", " << rightRef << "\n";
    String result = this->nextVar();
    out << "    " << result << " = insertvalue %panda$core$Bit { i1 undef }, i1 " << raw << ", 0\n";
    return result;
}

String LLVMCodeGenerator::getBinaryReference(const IRNode& left, Operator op, const IRNode& right,
        std::ostream& out) {
    ASSERT(left.fType == right.fType);
    switch (op) {
        case Operator::AND:       return this->getAndReference(left, right, out);
        case Operator::OR:        return this->getOrReference(left, right, out);
        case Operator::IDENTITY:  return this->getIdentityReference(left, right, out);
        case Operator::NIDENTITY: return this->getNIdentityReference(left, right, out);
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

String LLVMCodeGenerator::getMethodReference(const String& target, Method& m, bool isSuper,
        std::ostream& out) {
    if (!isSuper && is_virtual(m)) {
        ASSERT(target.size());
        if (m.fOwner.fClassKind == Class::ClassKind::INTERFACE) {
            return this->getInterfaceMethodReference(target, m, out);
        }
        else {
            return this->getVirtualMethodReference(target, m, out);
        }
    }
    else {
        if (m.fOwner.fExternal) {
            this->writeMethodDeclaration(m);
        }
        return this->methodName(m);
    }
}

static const IRNode& unwrap_cast(const IRNode& node) {
    if (node.fKind == IRNode::Kind::CAST) {
        return node.fChildren[0];
    }
    return node;
}

String LLVMCodeGenerator::getPointerCallReference(const IRNode& call, std::ostream& out) {
    const MethodRef* m = (MethodRef*) call.fChildren[0].fValue.fPtr;
    if (m->fMethod.fName == "alloc") {
        ASSERT(call.fChildren.size() == 2);
        String countStruct = this->getTypedReference(call.fChildren[1], out);
        String count = this->nextVar();
        out << "    " << count << " = extractvalue " << countStruct << ", 0\n";
        String size = this->nextVar();
        out << "    " << size << " = mul " << SIZE_T << " " << count << ", " <<
                this->sizeOf(m->returnType().fSubtypes[1]) << "\n";
        String malloc = this->nextVar();
        out << "    " << malloc << " = call i8* @malloc(" << SIZE_T << " " << size << ")\n";
        String result = this->nextVar();
        out << "    " << result << " = bitcast i8* " << malloc << " to " <<
                this->llvmType(m->returnType()) << "\n";
        return result;
    }
    else if (m->fMethod.fName == "get") {
        ASSERT(call.fChildren.size() == 2);
        String ptr = this->getTypedReference(unwrap_cast(call.fChildren[1]), out);
        String baseType = this->llvmType(m->returnType());
        String ptrType = baseType + "*";
        String cast = this->nextVar();
        out << "    " << cast << " = bitcast " << ptr << " to " << ptrType << "\n";
        String load = this->nextVar();
        out << "    " << load << " = load " << baseType << ", " << ptrType << " " << cast << "\n";
        return load;
    }
    else if (m->fMethod.fName == "[]") {
        ASSERT(call.fChildren.size() == 3);
        String ptr = this->getTypedReference(unwrap_cast(call.fChildren[1]), out);
        String baseType = this->llvmType(m->returnType());
        String ptrType = baseType + "*";
        String cast = this->nextVar();
        out << "    " << cast << " = bitcast " << ptr << " to " << ptrType << "\n";
        String indexStruct = this->getTypedReference(call.fChildren[2], out);
        String index = this->nextVar();
        out << "    " << index << " = extractvalue " << indexStruct << ", 0\n";
        String offsetPtr = this->nextVar();
        out << "    " << offsetPtr << " = getelementptr " << baseType << ", " << ptrType << " " <<
                cast << ", i64 " << index << "\n";
        String load = this->nextVar();
        out << "    " << load << " = load " << baseType << ", " << ptrType << " " << offsetPtr <<
                "\n";
        return load;
    }
    else if (m->fMethod.fName == "realloc") {
        ASSERT(call.fChildren.size() == 3);
        String ptr = this->getTypedReference(unwrap_cast(call.fChildren[1]), out);
        String ptrCast = this->nextVar();
        out << "    " << ptrCast << " = bitcast " << ptr << " to i8*\n";
        String countStruct = this->getTypedReference(call.fChildren[2], out);
        String count = this->nextVar();
        out << "    " << count << " = extractvalue " << countStruct << ", 0\n";
        String size = this->nextVar();
        out << "    " << size << " = mul " << SIZE_T << " " << count << ", " <<
                this->sizeOf(m->returnType().fSubtypes[1]) << "\n";
        String realloc = this->nextVar();
        out << "    " << realloc << " = call i8* @realloc(i8* " << ptrCast << ", " << SIZE_T <<
                " " << size << ")\n";
        String result = this->nextVar();
        out << "    " << result << " = bitcast i8* " << realloc << " to " <<
                this->llvmType(m->returnType()) << "\n";
        return result;
    }
    abort();
}

String LLVMCodeGenerator::getCallReference(const IRNode& call, std::ostream& out) {
    Method* m = &((MethodRef*) call.fChildren[0].fValue.fPtr)->fMethod;
    if (m->fOwner.fName == "panda.core.Pointer") {
        return this->getPointerCallReference(call, out);
    }
    if (m->fOwner.fName == "panda.core.Bit") {
        if (m->fName == "&") {
            ASSERT(call.fChildren.size() == 3);
            String bit = this->getAndReference(call.fChildren[1], call.fChildren[2], out);
            String result = this->nextVar();
            out << "    " << result << " = insertvalue %panda$core$Bit { i1 undef }, i1 " <<
                    bit << ", 0\n";
            return result;
        }
        if (m->fName == "|") {
            ASSERT(call.fChildren.size() == 3);
            String bit = this->getOrReference(call.fChildren[1], call.fChildren[2], out);
            String result = this->nextVar();
            out << "    " << result << " = insertvalue %panda$core$Bit { i1 undef }, i1 " <<
                    bit << ", 0\n";
            return result;
        }
    }
    ASSERT(call.fKind == IRNode::Kind::CALL);
    ASSERT(call.fChildren.size() >= 1);
    std::vector<String> args;
    for (int i = 1; i < call.fChildren.size(); ++i) {
        args.push_back(this->getTypedReference(call.fChildren[i], out));
    }
    ASSERT(call.fChildren[0].fKind == IRNode::Kind::METHOD_REFERENCE);
    String target = args.size() ? args[0] : "";
    bool isSuper = call.fChildren.size() > 1 && call.fChildren[1].fKind == IRNode::Kind::SUPER;
    String methodRef = this->getMethodReference(target, *m, isSuper, out);
    String result;
    String resultType = this->llvmType(call.fType);
    bool indirect = this->needsStructIndirection(*m);
    if (indirect) {
        out << "    call " << this->callingConvention(*m) << "void";
    }
    else {
        result = this->nextVar();
        out << "    " << result << " = call " << this->callingConvention(*m) << resultType;
    }
    out << " " << methodRef << "(";
    const char* separator = "";
    String indirectVar;
    if (indirect) {
        indirectVar = "%$tmp" + std::to_string(++fLabels);
        fMethodHeader << "    " << indirectVar << " = alloca " << resultType << "\n";
        out << resultType << "* " << indirectVar;
        separator = ", ";
    }
    for (const auto& arg : args) {
        out << separator << arg; 
        separator = ", ";
    }
    out << ")\n";
    if (indirect) {
        result = this->nextVar();
        out << "    " << result << " = load " << resultType << ", " << resultType << "* " <<
                indirectVar << "\n";
    }
    return result;
}

String LLVMCodeGenerator::wrapValue(const String& value, const Type& srcType, const Type& dstType,
        std::ostream& out) {
    out << "    ; wrap value\n";
    Class* src = fCompiler->getClass(srcType);
    std::vector<Field*> fields = fCompiler->getInstanceFields(*src);
    ASSERT(src);
    if (srcType.fCategory == Type::Category::NULLABLE) {
        // casting nullable value to nullable wrapper, need to special-case null
        out << "    ; handle nullable-to-nullable wrap\n";
        String testStart = fCurrentBlock;
        String isNonNull = this->nextVar();
        out << "    " << isNonNull << " = extractvalue " << this->llvmNullableType(srcType) <<
                " " << value << ", " << fields.size() << "\n";
        String nonNullLabel = this->nextLabel();
        String endLabel = this->nextLabel();
        out << "    br i1 " << isNonNull << ", label %" << nonNullLabel << ", label %" <<
                endLabel << "\n";
        this->createBlock(nonNullLabel, out);
        String unwrapped = this->toNonNullableValue(value, srcType, srcType.fSubtypes[0], out);
        String nonNullValue = this->wrapValue(unwrapped, srcType.fSubtypes[0], dstType, out);
        out << "    br label %" << endLabel << "\n";
        this->createBlock(endLabel, out);
        String result = this->nextVar();
        out << "    " << result << " = phi " << this->llvmType(dstType) << " [null, %" << testStart <<
                "], [" << nonNullValue << ", %" << nonNullLabel << "]\n";
        return result;
    }
    String mallocRef = this->nextVar();
    out << "    " << mallocRef << " = call i8* @malloc(i64 " <<
            this->sizeOf(Type::Object()) + this->sizeOf(src->fType) << ")\n";
    String wrapperTypeName = this->llvmWrapperTypeName(src->fType);
    String wrapperType = this->llvmWrapperType(src->fType);
    String wrapperCast = this->nextVar();
    out << "    " << wrapperCast << " = bitcast i8* " << mallocRef << " to " <<
            wrapperType << "\n";
    String classPtr = this->nextVar();
    out << "    " << classPtr << " = getelementptr " << wrapperTypeName << ", " <<
            wrapperType << " " << wrapperCast << ", i64 0, i32 0\n";
    const ClassConstant& cc = this->getWrapperClassConstant(*src);
    out << "    store %panda$core$Class* bitcast(" << cc.fType << "* " << cc.fName <<
            " to %panda$core$Class*), %panda$core$Class** " << classPtr << "\n";
    String refCount = this->nextVar();
    out << "    " << refCount << " = getelementptr " << wrapperTypeName << ", " <<
            wrapperType << " " << wrapperCast << ", i64 0, i32 1\n";
    out << "    store i32 0, i32* " << refCount << "\n";
    for (int i = 0; i < fields.size(); ++i) {
        String fieldSrc = this->nextVar();
        out << "    " << fieldSrc << " = extractvalue " << this->llvmType(src->fType) <<
                " " << value << ", " << i << "\n";
        String fieldTarget = this->nextVar();
        out << "    " << fieldTarget << " = getelementptr " << wrapperTypeName << ", " <<
                wrapperType << " " << wrapperCast << ", i64 0, i32 " <<
                OBJECT_FIELD_COUNT + i << "\n";
        out << "    store " << this->llvmType(fields[i]->fType) << " " << fieldSrc <<
                ", " << this->llvmType(fields[i]->fType) << "* " << fieldTarget << "\n";
    }
    if (wrapperType != this->llvmType(dstType)) {
        String result = this->nextVar();
        out << "    " << result << " = bitcast " << wrapperType << " " << wrapperCast << " to " <<
                this->llvmType(dstType) << "\n";
        return result;
    }
    return wrapperCast;
}

String LLVMCodeGenerator::unwrapValue(const String& value, const Type& srcType, const Type& dstType,
        std::ostream& out) {
    out << "    ; unwrap value\n";
    Class* target = fCompiler->getClass(dstType);
    std::vector<Field*> fields = fCompiler->getInstanceFields(*target);
    if (dstType.fCategory == Type::Category::NULLABLE) {
        // casting nullable wrapper to nullable value, need to special-case null
        out << "    ; handle nullable-to-nullable unwrap\n";
        String testStart = fCurrentBlock;
        String isNonNull = this->nextVar();
        out << "    " << isNonNull << " = icmp ne " << this->llvmType(srcType) <<
                " " << value << ", null\n";
        String nonNullLabel = this->nextLabel();
        String endLabel = this->nextLabel();
        out << "    br i1 " << isNonNull << ", label %" << nonNullLabel << ", label %" <<
                endLabel << "\n";
        this->createBlock(nonNullLabel, out);
        String wrapped = this->unwrapValue(value, srcType, dstType.fSubtypes[0], out);
        String nonNullValue = this->toNullableValue(wrapped, dstType.fSubtypes[0], dstType, out);
        out << "    br label %" << endLabel << "\n";
        this->createBlock(endLabel, out);
        String result = this->nextVar();
        out << "    " << result << " = phi " << this->llvmType(dstType) << " [{";
        const char* separator = " ";
        for (const Field* f : fields) {
            out << separator << this->llvmType(f->fType) << " undef";
            separator = ", ";
        }
        out << separator << "i1 0 }, %" << testStart << "], [" << nonNullValue << ", %" <<
                nonNullLabel << "]\n";
        return result;
    }
    ASSERT(target);
    String targetType = this->llvmType(dstType);
    String wrapperTypeName = this->llvmWrapperTypeName(dstType);
    String wrapperType = this->llvmWrapperType(dstType);
    String srcCast = this->nextVar();
    out << "    " << srcCast << " = bitcast " << this->llvmType(srcType) <<
            " " << value << " to " << wrapperType << "\n";
    String result = "{";
    const char* separator = " ";
    for (const Field* f : fields) {
        result += separator;
        result += this->llvmType(f->fType);
        result += " undef";
        separator = ", ";
    }
    result += " }";
    for (int i = 0; i < fields.size(); ++i) {
        String ptr = this->nextVar();
        out << "    " << ptr << " = getelementptr " << wrapperTypeName << ", " <<
                wrapperType << " " << srcCast << ", i64 0, i32 " <<
                OBJECT_FIELD_COUNT + i << "\n";
        String read = this->nextVar();
        out << "    " << read << " = load " << this->llvmType(fields[i]->fType) << ", " <<
                this->llvmType(fields[i]->fType) << "* " << ptr << "\n";
        String next = this->nextVar();
        out << "    " << next << " = insertvalue " << targetType << " " << result <<
                ", " << this->llvmType(fields[i]->fType) << " " << read << ", " << i <<
                "\n";
        result = next;
    }
    return result;
}

String LLVMCodeGenerator::toNullableValue(const String& value, const Type& srcType,
        const Type& dstType, std::ostream& out) {
    out << "    ; to nullable\n";
    Class* cl = fCompiler->getClass(srcType);
    ASSERT(cl);
    String nullableType = this->llvmNullableType(dstType);
    std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
    String result = "{";
    const char* separator = " ";
    for (const Field* f : fields) {
        result += separator;
        result += this->llvmType(f->fType);
        result += " undef";
        separator = ", ";
    }
    result += separator;
    result += "i1 true }";
    for (int i = 0; i < fields.size(); ++i) {
        String fieldValue = this->nextVar();
        out << "    " << fieldValue << " = extractvalue " << this->llvmType(srcType) << " " <<
                value << ", " << i << "\n";
        String next = this->nextVar();
        out << "    " << next << " = insertvalue " << nullableType << " " << result <<
                ", " << this->llvmType(fields[i]->fType) << " " << fieldValue << ", " << i <<
                "\n";
        result = next;
    }
    return result;
}

String LLVMCodeGenerator::toNonNullableValue(const String& value, const Type& srcType,
        const Type& dstType, std::ostream& out) {
    out << "    ; to nonnullable\n";
    Class* cl = fCompiler->getClass(dstType);
    ASSERT(cl);
    String nullableType = this->llvmNullableType(srcType);
    std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
    String result = "{";
    const char* separator = " ";
    for (const Field* f : fields) {
        result += separator;
        result += this->llvmType(f->fType);
        result += " undef";
        separator = ", ";
    }
    result += " }";
    for (int i = 0; i < fields.size(); ++i) {
        String fieldValue = this->nextVar();
        out << "    " << fieldValue << " = extractvalue " << nullableType << " " << value << ", " <<
                i << "\n";
        String next = this->nextVar();
        out << "    " << next << " = insertvalue " << this->llvmType(dstType) << " " << result <<
                ", " << this->llvmType(fields[i]->fType) << " " << fieldValue << ", " << i <<
                "\n";
        result = next;
    }
    return result;
}

String LLVMCodeGenerator::getCastReference(const String& value, const Type& src, const Type& target,
        std::ostream& out) {
    String op;
    if (target.isBuiltinNumber()) {
        ASSERT(src.isBuiltinNumber());
        int size1 = src.fSize;
        int size2 = target.fSize;
        if (size1 > size2) {
            op = "trunc";
        }
        else if (size1 < size2) {
            op = "sext";
        }
        else {
            return value;
        }
    }
    else {
        Class* srcClass = fCompiler->getClass(src);
        ASSERT(srcClass);
        Class* targetClass = fCompiler->getClass(target);
        ASSERT(targetClass);
        if (srcClass->isValue(fCompiler) && !targetClass->isValue(fCompiler)) {
            return this->wrapValue(value, src, target, out);
        }
        else if (!srcClass->isValue(fCompiler) && targetClass->isValue(fCompiler)) {
            return this->unwrapValue(value, src, target, out);
        }
        else if (srcClass->isValue(fCompiler) &&
                target.fCategory == Type::Category::NULLABLE &&
                target.fSubtypes[0] == src) {
            return this->toNullableValue(value, src, target, out);
        }
        else if (targetClass->isValue(fCompiler) &&
                src.fCategory == Type::Category::NULLABLE &&
                src.fSubtypes[0] == target) {
            return this->toNonNullableValue(value, src, target, out);
        }
        op = "bitcast";
    }
    String srcType = this->llvmType(src);
    String dstType = this->llvmType(target);
    if (srcType == dstType) {
        return value;
    }
    String result = this->nextVar();
    out << "    " << result << " = " << op << " " << srcType << " " << value << " to " << dstType <<
            "\n";
    return result;
}

String LLVMCodeGenerator::getCastReference(const IRNode& cast, std::ostream& out) {
    ASSERT(cast.fKind == IRNode::Kind::CAST);
    ASSERT(cast.fChildren.size() == 1);
    String base = this->getReference(cast.fChildren[0], out);
    return this->getCastReference(base, cast.fChildren[0].fType, cast.fType, out);
}

String LLVMCodeGenerator::getConstructReference(const IRNode& construct, std::ostream& out) {
    ASSERT(construct.fKind == IRNode::Kind::CONSTRUCT);
    ASSERT(construct.fChildren.size() >= 1);
    Class* cl = fCompiler->getClass(construct.fType);
    ASSERT(cl);
    String type = this->llvmType(construct.fType);
    if (cl->isValue(fCompiler)) {
        String alloca = "%$tmp" + std::to_string(++fLabels);
        fMethodHeader << "    " << alloca << " = alloca " << type << "\n";
        this->writeCall(construct.fChildren[0], type + "* " + alloca, out);
        String result = this->nextVar();
        out << "    " << result << " = load " << type << ", " << type << "* " << alloca << "\n";
        return result;
    }
    String callRef = this->nextVar();
    out << "    " << callRef << " = call i8* @malloc(i64 " << this->sizeOf(construct.fType) <<
            ")\n";
    String result = this->nextVar();
    out << "    " << result << " = bitcast i8* " << callRef << " to " <<
            this->llvmType(construct.fType) << "\n";
    String classPtr = this->nextVar();
    String className;
    if (construct.fType.fCategory == Type::Category::GENERIC) {
        className = this->llvmTypeName(construct.fType.fSubtypes[0]);
    }
    else {
        className = this->llvmTypeName(construct.fType);
    }
    out << "    " << classPtr << " = getelementptr inbounds " << className << ", " << type <<
            " " << result << ", i64 0, i32 0" << "\n";
    const ClassConstant& cc = this->getClassConstant(*cl);
    out << "    store %panda$core$Class* bitcast(" << cc.fType << "* " << cc.fName <<
            " to %panda$core$Class*), %panda$core$Class** " << classPtr << "\n";
    this->writeCall(construct.fChildren[0], type + " " + result, out);
    return result;
}

String LLVMCodeGenerator::getSelfReference(const IRNode& self, std::ostream& out) {
    return "%self";
}

String LLVMCodeGenerator::getSuperReference(const IRNode& super, std::ostream& out) {
    String result = this->nextVar();
    out << "    " << result << " = bitcast " << this->llvmType(fCurrentClass->fType) <<
            " %self to " << this->llvmType(super.fType) << "\n";
    return result;
}

String LLVMCodeGenerator::getFieldReference(const IRNode& fieldRef, std::ostream& out) {
    ASSERT(fieldRef.fKind == IRNode::Kind::FIELD_REFERENCE);
    ASSERT(fieldRef.fChildren.size() == 1);
    Field* field = (Field*) fieldRef.fValue.fPtr;
    String type = this->llvmType(field->fType);
    if (field->fAnnotations.isClass()) {
        if (field->fValue && !is_constant_number(*field->fValue) &&
                    fInitializedClasses.find(&field->fOwner) == fInitializedClasses.end()) {
            fInitializedClasses.insert(&field->fOwner);
            fMethodHeader << "    call fastcc void @" << escape_type_name(field->fOwner.fName) <<
                    "$$classInit()\n";
        }
        String load = this->nextVar();
        out << "    " << load << " = load " << type << ", " << type << "* " <<
                this->fieldName(*field) << "\n";
        return load;
    }
    Class* cl = fCompiler->getClass(fieldRef.fChildren[0].fType);
    ASSERT(cl);
    if (cl->isValue(fCompiler)) {
        String base = this->getReference(fieldRef.fChildren[0], out);
        std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
        int index = -1;
        for (int i = 0; i < fields.size(); ++i) {
            if (fields[i] == fieldRef.fValue.fPtr) {
                index = i;
                break;
            }
        }
        ASSERT(index != -1);
        String result = this->nextVar();
        out << "    " << result << " = extractvalue " <<
                this->llvmType(fieldRef.fChildren[0].fType) << " " << base << ", " << index << "\n";
        return result;
    }
    String ptr = type + "* " + this->getLValue(fieldRef, out);
    String result = this->nextVar();
    out << "    " << result << " = load " << type << ", " << ptr << "\n";
    return result;
}

String LLVMCodeGenerator::getStringReference(const String& s, std::ostream& out) {
    String chars = "@$chars" + std::to_string(++fLabels);
    String charsType = "[" + std::to_string(s.size()) + " x i8]";
    fStrings << chars << " = private unnamed_addr constant " << charsType << " [ ";
    const char* separator = "";
    for (char c : s) {
        fStrings << separator << "i8 " << (int) c;
        separator = ", ";
    }
    fStrings << " ]\n";
    String result = "@$str" + std::to_string(++fLabels);
    Class* string = fCompiler->getClass(Type::PandaString());
    ASSERT(string);
    const ClassConstant& cc = this->getClassConstant(*string);
    fStrings << result << " = private unnamed_addr constant %panda$core$String { " <<
            "%panda$core$Class* bitcast(" << cc.fType << "* " << cc.fName << " to " <<
            "%panda$core$Class*), %panda$core$Int32 insertvalue(%panda$core$Int32 " <<
            "{ i32 undef }, i32 1, 0), %panda$core$Char8* bitcast(" << charsType << "* " << chars <<
            " to %panda$core$Char8*), %panda$core$Int64 insertvalue(%panda$core$Int64 " <<
            "{ i64 undef }, i64 " << s.size() << ", 0) }\n";
    return result;
}

String LLVMCodeGenerator::getNullReference(const IRNode& n, std::ostream& out) {
    Class* cl = fCompiler->getClass(n.fType);
    if (cl->isValue(fCompiler)) {
        std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
        String result = "{";
        const char* separator = " ";
        for (const Field* f : fields) {
            result += separator;
            result += this->llvmType(f->fType);
            result += " undef";
            separator = ", ";
        }
        result += separator;
        result += "i1 0 }";
        return result;
    }
    else {
        return "null";
    }
}

String LLVMCodeGenerator::getIsNullReference(const IRNode& test, std::ostream& out) {
    ASSERT(test.fKind == IRNode::Kind::IS_NULL);
    ASSERT(test.fChildren.size() == 1);
    String value = this->getTypedReference(test.fChildren[0], out);
    if (test.fChildren[0].fType.fCategory != Type::Category::NULLABLE) {
        return "{ i1 0 }";
    }
    Class* cl = fCompiler->getClass(test.fChildren[0].fType);
    String resultValue;
    if (cl->isValue(fCompiler)) {
        String field = this->nextVar();
        std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
        out << "    " << field << " = extractvalue " << value << ", " << fields.size() << "\n";
        resultValue = this->nextVar();
        out << "    " << resultValue << " = xor i1 " << field << ", -1\n";
    }
    else {
        resultValue = this->nextVar();
        out << "    " << resultValue << " = icmp eq " << value << ", null\n";
    }
    String result = this->nextVar();
    out << "    " << result << " = insertvalue %panda$core$Bit { i1 undef }, i1 " << resultValue <<
            ", 0\n";
    return result;
}

String LLVMCodeGenerator::getIsNonNullReference(const IRNode& test, std::ostream& out) {
    ASSERT(test.fKind == IRNode::Kind::IS_NONNULL);
    ASSERT(test.fChildren.size() == 1);
    String value = this->getTypedReference(test.fChildren[0], out);
    if (test.fChildren[0].fType.fCategory != Type::Category::NULLABLE) {
        return "{ i1 1 }";
    }
    Class* cl = fCompiler->getClass(test.fChildren[0].fType);
    String resultValue;
    if (cl->isValue(fCompiler)) {
        resultValue = this->nextVar();
        std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
        out << "    " << resultValue << " = extractvalue " << value << ", " << fields.size() <<
                "\n";
    }
    else {
        resultValue = this->nextVar();
        out << "    " << resultValue << " = icmp ne " << value << ", null\n";
    }
    String result = this->nextVar();
    out << "    " << result << " = insertvalue %panda$core$Bit { i1 undef }, i1 " << resultValue <<
            ", 0\n";
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
        case IRNode::Kind::CAST:
            return this->getCastReference(expr, out);
        case IRNode::Kind::CONSTRUCT:
            return this->getConstructReference(expr, out);
        case IRNode::Kind::FIELD_REFERENCE:
            return this->getFieldReference(expr, out);
        case IRNode::Kind::INT:
            return std::to_string(expr.fValue.fInt);
        case IRNode::Kind::IS_NULL:
            return this->getIsNullReference(expr, out);
        case IRNode::Kind::IS_NONNULL:
            return this->getIsNonNullReference(expr, out);
        case IRNode::Kind::METHOD_REFERENCE:
            return this->methodName(((MethodRef*) expr.fValue.fPtr)->fMethod);
        case IRNode::Kind::NEGATED_INT:
            return '-' + std::to_string(expr.fValue.fInt);
        case IRNode::Kind::NULL_LITERAL:
            return this->getNullReference(expr, out);
        case IRNode::Kind::PREFIX:
            return this->getPrefixReference(expr, out);
        case IRNode::Kind::SELF:
            return this->getSelfReference(expr, out);
        case IRNode::Kind::STRING:
            return this->getStringReference(expr.fText, out);
        case IRNode::Kind::SUPER:
            return this->getSuperReference(expr, out);
        case IRNode::Kind::VARIABLE_REFERENCE:
            return this->getVariableReference(*((Variable*) expr.fValue.fPtr), out);
        case IRNode::Kind::REUSED_VALUE_DEFINITION: {
            ASSERT(fReusedValues.find(expr.fValue.fInt) == fReusedValues.end());
            String result = this->getReference(expr.fChildren[0], out);
            fReusedValues[expr.fValue.fInt] = result;
            return result;
        }
        case IRNode::Kind::REUSED_VALUE:
            ASSERT(fReusedValues.find(expr.fValue.fInt) != fReusedValues.end());
            return fReusedValues[expr.fValue.fInt];
        default:
            printf("unsupported expression: %s\n", expr.description().c_str());
            abort();
    }
}

String LLVMCodeGenerator::getTypedReference(const IRNode& expr, std::ostream& out) {
    return this->llvmType(expr.fType) + " " + this->getReference(expr, out);
}

String LLVMCodeGenerator::getLValue(const IRNode& lvalue, std::ostream& out) {
    switch (lvalue.fKind) {
        case IRNode::Kind::VARIABLE_REFERENCE: {
            Variable* var = (Variable*) lvalue.fValue.fPtr;
            return this->varName(*var);
        }
        case IRNode::Kind::FIELD_REFERENCE: {
            String base = this->getReference(lvalue.fChildren[0], out);
            String ptr = this->nextVar();
            Class* cl = fCompiler->getClass(lvalue.fChildren[0].fType);
            ASSERT(cl);
            std::vector<Field*> fields = fCompiler->getInstanceFields(*cl);
            int index = -1;
            for (int i = 0; i < fields.size(); ++i) {
                if (fields[i] == lvalue.fValue.fPtr) {
                    index = i;
                    break;
                }
            }
            if (index == -1) {
                printf("couldn't find field %s in %s\n", ((Field*) lvalue.fValue.fPtr)->fName.c_str(), lvalue.description().c_str());
            }
            ASSERT(index != -1);

            out << "    " << ptr << " = getelementptr inbounds " << this->llvmTypeName(cl->fType) <<
                    ", " << this->llvmTypeName(cl->fType) << "* " << base << ", i64 0, i32 " <<
                    index << "\n";
            return ptr;
        }
        case IRNode::Kind::REUSED_VALUE_DEFINITION: {
            String result = this->getLValue(lvalue.fChildren[0], out);
            String reused = this->nextVar();
            out << "    " << reused << " = load " << this->llvmType(lvalue.fType) << ", " <<
                    this->llvmType(lvalue.fType) << "* " << result << "\n";
            fReusedValues[lvalue.fValue.fInt] = reused;
            return result;
        }
        case IRNode::Kind::CAST: {
            ASSERT(!lvalue.fValue.fBool);
            ASSERT(lvalue.fChildren.size() == 1);
            String base = this->getLValue(lvalue.fChildren[0], out);
            // FIXME
            return base;
        }
        default:
            abort();
    }
}

void LLVMCodeGenerator::writeAndEq(const String& lvalue, const IRNode& right, std::ostream& out) {
    String leftStruct = this->nextVar();
    out << "    " << leftStruct << " = load %panda$core$Bit, " << lvalue << "\n";
    String left = this->nextVar();
    out << "    " << left << " = extractvalue %panda$core$Bit " << leftStruct << ", 0\n";
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
    String leftStruct = this->nextVar();
    out << "    " << leftStruct << " = load %panda$core$Bit, " << lvalue << "\n";
    String left = this->nextVar();
    out << "    " << left << " = extractvalue %panda$core$Bit " << leftStruct << ", 0\n";
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
    String lvalue = this->llvmType(a.fChildren[0].fType) + "* " +
            this->getLValue(a.fChildren[0], out);
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
        out << "    " << left << " = load " << this->llvmType(a.fChildren[0].fType) << ", " <<
                lvalue << "\n";
        String right = this->getReference(a.fChildren[1], out);
        value = type + " " +
                this->getBinaryReference(op_class(a.fChildren[0].fType), type + " " + left, binOp,
                        right, out);
    }
    out << "    store " << value << ", " << lvalue << "\n";
}

String LLVMCodeGenerator::getVirtualMethodReference(const String& target, Method& m,
        std::ostream& out) {
    out << "    ; get reference to " << m.signature() << "\n";
    const ClassConstant& cc = this->getClassConstant(m.fOwner);
    int index = -1;
    std::vector<Method*>& vtable = fCompiler->getVTable(m.fOwner);
    for (int i = 0; i < vtable.size(); ++i) {
        if (vtable[i] == &m) {
            index = i;
            break;
        }
    }
    ASSERT(index != -1);
    String classPtrPtr = this->nextVar();
    out << "    " << classPtrPtr << " = getelementptr inbounds " <<
            this->llvmTypeName(m.fOwner.fType) << ", " << target << ", i64 0, i32 0\n";
    String classPtr = this->nextVar();
    out << "    " << classPtr << " = load %panda$core$Class*, %panda$core$Class** " << classPtrPtr
            << "\n";
    String cast = this->nextVar();
    out << "    " << cast << " = bitcast %panda$core$Class* " << classPtr << " to " << cc.fType <<
            "*\n";
    String ptr = this->nextVar();
    out << "    " << ptr << " = getelementptr inbounds " << cc.fType << ", " << cc.fType << "* " <<
            cast << " , i64 0, i32 " << VTABLE_INDEX << ", i64 " << index << "\n";
    String load = this->nextVar();
    out << "    " << load << " = load i8*, i8** " << ptr << "\n";
    String result = this->nextVar();
    out << "    " << result << " = bitcast i8* " << load << " to " <<
            this->llvmType(m.inheritedTypeWithSelf(*fCompiler)) << "\n";
    return result;
}

String LLVMCodeGenerator::getInterfaceMethodReference(const String& target, Method& m,
        std::ostream& out) {
    String methodType = llvmType(m);
    // load class constant entry
    String entry = this->nextLabel();
    out << "    br label %" << entry << "\n";
    this->createBlock(entry, out);
    String classPointer = this->nextVar();
    out << "    " << classPointer + " = getelementptr inbounds " <<
            this->llvmTypeName(m.fOwner.fType) << ", " << target << ", " SIZE_T << " 0, i32 " <<
            CLASS_POINTER_INDEX << "\n";
    String loadedClass = this->nextVar();
    String classType = this->llvmTypeName(Type::Class());
    out << "    " << loadedClass << " = load " << classType << "*, " << classType << "** " <<
            classPointer << "\n";
    String itableFirst = this->nextVar();
    out << "    " << itableFirst << " = getelementptr inbounds " << classType << ", " <<
            classType << "* " << loadedClass << ", " << SIZE_T << " 0, i32 " << ITABLE_INDEX <<
            "\n";
    String next = this->nextLabel();
    out << "    br label %" << next << "\n";
    String leavingEntryLabel = fCurrentBlock;
    this->createBlock(next, out);
    String itableNext = "%$itable" + std::to_string(++fLabels);
    String itablePtrPtr = this->nextVar();
    String fail = this->nextLabel();
    out << "    " << itablePtrPtr << " = phi %$itable** [ " << itableFirst + ", %" <<
            leavingEntryLabel << "], [ " << itableNext << ", %" << fail << " ]\n";
    String itablePtr = this->nextVar();
    out << "    " << itablePtr << " = load %$itable*, %$itable** " << itablePtrPtr << "\n";
    String itableClassPtr = this->nextVar();
    out << "    " << itableClassPtr << " = getelementptr inbounds %$itable, %$itable* " <<
            itablePtr << ", " << SIZE_T << " 0, i32 0\n";
    String itableClass = this->nextVar();
    out << "    " << itableClass << " = load " << classType << "*, " << classType << "** " <<
            itableClassPtr << "\n";
    String test = this->nextVar();
    ClassConstant& intfCC = getClassConstant(m.fOwner);
    out << "    " << test << " = icmp eq " << classType << "* bitcast(" << intfCC.fType << "* " <<
            intfCC.fName << " to " << classType << "*), " << itableClass << "\n";
    String success = this->nextLabel();
    out << "    br i1 " << test << ", label %" << success << ", label %" << fail << "\n";

    this->createBlock(fail, out);
    out << "    " << itableNext << " = getelementptr inbounds %$itable, %$itable* " << itablePtr <<
            ", " << SIZE_T << " 0, i32 1\n";
    out << "    br label %" << next << "\n";

    this->createBlock(success, out);
    int index = -1;
    std::vector<Method*>& vtable = fCompiler->getVTable(m.fOwner);
    for (int i = 0; i < vtable.size(); ++i) {
        if (vtable[i] == &m) {
            index = i;
            break;
        }
    }
    index -= fCompiler->getVTable(*fCompiler->getClass(Type::Object())).size();
    ASSERT(index != -1);
    String methodPtrPtr = this->nextVar();
    out << "    " << methodPtrPtr << " = getelementptr inbounds %$itable, %$itable* " <<
            itablePtr << ", " SIZE_T " 0, i32 2, i32 " << index << "\n";
    String cast = this->nextVar();
    out << "    " << cast << " = bitcast i8** " << methodPtrPtr <<
            " to " << methodType << "*\n";
    String methodPtr = this->nextVar();
    out << "    " << methodPtr << " = load " << methodType << ", " << methodType << "* " << cast <<
            "\n";
    return methodPtr;
}

void LLVMCodeGenerator::writePointerCall(const IRNode& stmt, std::ostream& out) {
    MethodRef* m = (MethodRef*) stmt.fChildren[0].fValue.fPtr;
    if (m->fMethod.fName == "set") {
        ASSERT(stmt.fChildren.size() == 3);
        String ptr = this->getTypedReference(unwrap_cast(stmt.fChildren[1]), out);
        String arg = this->getTypedReference(stmt.fChildren[2], out);
        out << "    store " << arg << ", " << ptr << "\n";
    }
    else if (m->fMethod.fName == "[]:=") {
        ASSERT(stmt.fChildren.size() == 4);
        ASSERT(unwrap_cast(stmt.fChildren[1]).fType.fSubtypes.size() == 2);
        Type baseType = unwrap_cast(stmt.fChildren[1]).fType.fSubtypes[1];
        String base = this->getTypedReference(unwrap_cast(stmt.fChildren[1]), out);
        String indexStruct = this->getTypedReference(unwrap_cast(stmt.fChildren[2]), out);
        String index = this->nextVar();
        out << "    " << index << " = extractvalue " << indexStruct << ", 0\n";
        String value = this->getTypedReference(stmt.fChildren[3], out);
        String ptr = this->nextVar();
        out << "    " << ptr << " = getelementptr inbounds " << this->llvmType(baseType) << ", " <<
                base << ", " << SIZE_T << " " << index << "\n";
        out << "    store " << value << ", " << this->llvmType(baseType) << "* " << ptr << "\n";
    }
    else if (m->fMethod.fName == "destroy") {
        ASSERT(stmt.fChildren.size() == 2);
        String ptr = this->getTypedReference(unwrap_cast(stmt.fChildren[1]), out);
        String cast = this->nextVar();
        out << "    " << cast << " = bitcast " << ptr << " to i8*\n";
        out << "    call void @free(i8* " << cast << ")\n";
    }
    else {
        abort();
    }
}

void LLVMCodeGenerator::writeCall(const IRNode& stmt, const String& target, std::ostream& out) {
    ASSERT(stmt.fKind == IRNode::Kind::CALL);
    ASSERT(stmt.fChildren.size() >= 1);
    MethodRef* m = (MethodRef*) stmt.fChildren[0].fValue.fPtr;
    if (m->fMethod.fOwner.fName == "panda.core.Pointer") {
        this->writePointerCall(stmt, out);
        return;
    }
    std::vector<String> args;
    for (int i = 1; i < stmt.fChildren.size(); ++i) {
        args.push_back(this->getTypedReference(stmt.fChildren[i], out));
    }
    ASSERT(stmt.fChildren[0].fKind == IRNode::Kind::METHOD_REFERENCE);
    bool isSuper = stmt.fChildren.size() > 1 && stmt.fChildren[1].fKind == IRNode::Kind::SUPER;
    String methodRef = this->getMethodReference(is_virtual(m->fMethod) ? args[0] : "", m->fMethod,
            isSuper, out);
    if (stmt.fType != Type::Void()) {
        this->nextVar();
    }
    out << "    call " << this->callingConvention(m->fMethod) << this->llvmType(stmt.fType) <<
            " " << methodRef << "(";
    const char* separator = "";
    if (this->needsStructIndirection(m->fMethod)) {
        String tmpType = this->llvmType(m->fMethod.fReturnType);
        String alloca = "%$tmp" + std::to_string(++fLabels);
        fMethodHeader << "    " << alloca << " = alloca " << tmpType << "\n";
        out << tmpType << "* " << alloca;
        separator = ", ";
    }
    if (target.size()) {
        out << separator << target;
        separator = ", ";
    }
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

void LLVMCodeGenerator::writeWhile(const IRNode& w, std::ostream& out) {
    ASSERT(w.fKind == IRNode::Kind::WHILE);
    ASSERT(w.fChildren.size() == 2);
    String loopStart = this->nextLabel();
    String loopBody = this->nextLabel();
    String loopEnd = this->nextLabel();
    AutoLoopDescriptor loop(this, w.fText, loopEnd, loopStart);
    out << "    br label %" << loopStart << "\n";
    this->createBlock(loopStart, out);
    String test = this->getReference(w.fChildren[0], out);
    out << "    br i1 " << test << ", label %" << loopBody << ", label %" << loopEnd << "\n";
    this->createBlock(loopBody, out);
    this->writeStatement(w.fChildren[1], out);
    if (!ends_with_branch(w.fChildren[1])) {
        out << "    br label %" << loopStart << "\n";
    }
    this->createBlock(loopEnd, out);
}

void LLVMCodeGenerator::writeDo(const IRNode& d, std::ostream& out) {
    ASSERT(d.fKind == IRNode::Kind::DO);
    ASSERT(d.fChildren.size() == 2);
    String loopStart = this->nextLabel();
    String loopBody = this->nextLabel();
    String loopEnd = this->nextLabel();
    AutoLoopDescriptor loop(this, d.fText, loopEnd, loopStart);
    out << "    br label %" << loopBody << "\n";
    this->createBlock(loopStart, out);
    String test = this->getReference(d.fChildren[1], out);
    out << "    br i1 " << test << ", label %" << loopBody << ", label %" << loopEnd << "\n";
    this->createBlock(loopBody, out);
    this->writeStatement(d.fChildren[0], out);
    if (!ends_with_branch(d.fChildren[0])) {
        out << "    br label %" << loopStart << "\n";
    }
    this->createBlock(loopEnd, out);
}

void LLVMCodeGenerator::writeLoop(const IRNode& l, std::ostream& out) {
    ASSERT(l.fKind == IRNode::Kind::LOOP);
    ASSERT(l.fChildren.size() == 1);
    String loopStart = this->nextLabel();
    String loopEnd = this->nextLabel();
    AutoLoopDescriptor loop(this, l.fText, loopEnd, loopStart);
    out << "    br label %" << loopStart << "\n";
    this->createBlock(loopStart, out);
    this->writeStatement(l.fChildren[0], out);
    if (!ends_with_branch(l.fChildren[0])) {
        out << "    br label %" << loopStart << "\n";
    }
    this->createBlock(loopEnd, out);
}

void LLVMCodeGenerator::writeRangeFor(const IRNode& f, std::ostream& out) {
    // I am acutely aware of how horrific this looks.
    //
    // There's no easy way to produce clean output here, since we have to handle different step
    // values, different loop directions, and both inclusive and exclusive ranges, all of which
    // could potentially be determined at runtime. It gets even uglier when you consider the
    // difficulty of handling the extremes of the numeric types. You can't just add 1 and then
    // check to see if it's in range when the limit is MAX_INT, because you'll overflow and end up
    // with an infinite loop. You also can't just check for being equal to the limit before adding
    // the step, because with a step bigger than 1 (or smaller than -1) you might need to stop
    // before actually hitting the end. So you instead check the difference between the current
    // index and the limit, but even there you need to be careful because it could overflow in a
    // signed test, and we need to handle null values, and... ugh, it's surprisingly messy and
    // results in a ton of code.
    //
    // Fortunately, we can just write incredibly awful-but-straightforward code and let LLVM
    // optimize it to something sensible if it turns out the values are known at compile time. This
    // works remarkably well, because LLVM is awesome.
    ASSERT(f.fKind == IRNode::Kind::RANGE_FOR);
    ASSERT(f.fChildren.size() == 3);
    const IRNode& target = f.fChildren[0];
    ASSERT(f.fChildren[1].fType.fCategory == Type::Category::GENERIC);
    ASSERT(f.fChildren[1].fType.fSubtypes.size() == 2);
    ASSERT(f.fChildren[1].fType.fSubtypes[0].fName == "panda.core.Range");
    String range = this->getTypedReference(f.fChildren[1], out);
    const IRNode& block = f.fChildren[2];
    const Type& type = f.fChildren[1].fType.fSubtypes[1];
    String llt = this->llvmType(type);
    String indexType;
    if (type.fCategory == Type::Category::NULLABLE) {
        ASSERT(type.fSubtypes.size() == 1);
        indexType = this->llvmType(type.fSubtypes[0]);
    }
    else {
        indexType = llt;
    }
    Class* cl = fCompiler->getClass(type);
    ASSERT(cl);
    ASSERT(fCompiler->getInstanceFields(*cl).size() == 1);
    String numberType = this->llvmType(fCompiler->getInstanceFields(*cl)[0]->fType);
    ASSERT(target.fKind == IRNode::Kind::VARIABLE_REFERENCE);
    String index = this->varName(*(Variable*) target.fValue.fPtr);
    fMethodHeader << "    " << index << " = alloca " << indexType << "\n";

    // extract start value from range
    String startPtr = this->nextVar();
    out << "    " << startPtr << " = extractvalue " << range << ", 0\n";
    String startPtrCast = this->nextVar();
    out << "    " << startPtrCast << " = bitcast " << this->llvmType(Type::Object()) << " " <<
            startPtr << " to " << this->llvmWrapperType(type) << "\n";
    String startFieldPtr = this->nextVar();
    out << "    " << startFieldPtr << " = getelementptr " << this->llvmWrapperTypeName(type) <<
            ", " << this->llvmWrapperType(type) << " " << startPtrCast << ", i64 0, i32 " <<
            OBJECT_FIELD_COUNT << "\n";
    String start = this->nextVar();
    out << "    " << start << " = load " << numberType << ", " << numberType <<
            "* " << startFieldPtr << "\n";

    // store start value
    String indexValuePtr = this->nextVar();
    out << "    " << indexValuePtr << " = getelementptr " << indexType << ", " << indexType <<
            "* " << index << ", i64 0, i32 0\n";
    out << "    store " << numberType << " " << start << ", " << numberType << "* " <<
            indexValuePtr << "\n";

    // extract end value from range
    String endPtr = this->nextVar();
    out << "    " << endPtr << " = extractvalue " << range << ", 1\n";
    String endPtrCast = this->nextVar();
    out << "    " << endPtrCast << " = bitcast " << this->llvmType(Type::Object()) << " " <<
            endPtr << " to " << this->llvmWrapperType(type) << "\n";
    String endFieldPtr = this->nextVar();
    out << "    " << endFieldPtr << " = getelementptr " << this->llvmWrapperTypeName(type) <<
            ", " << this->llvmWrapperType(type) << " " << endPtrCast << ", i64 0, i32 " <<
            OBJECT_FIELD_COUNT << "\n";
    String end = this->nextVar();
    out << "    " << end << " = load " << numberType << ", " << numberType <<
            "* " << endFieldPtr << "\n";

    // extract step value from range
    String stepPtr = this->nextVar();
    out << "    " << stepPtr << " = extractvalue " << range << ", 2\n";
    String stepNull = this->nextVar();
    out << "    " << stepNull << " = icmp eq " << this->llvmType(Type::Object()) << " " <<
            stepPtr << ", null\n";
    String stepStart = fCurrentBlock;
    String stepEnd = this->nextLabel();
    String stepNonNull = this->nextLabel();
    out << "    br i1 " << stepNull << ", label %" << stepEnd << ", label %" << stepNonNull;
    this->createBlock(stepNonNull, out);
    String stepPtrCast = this->nextVar();
    out << "    " << stepPtrCast << " = bitcast " << this->llvmType(Type::Object()) << " " <<
            stepPtr << " to " << this->llvmWrapperType(type) << "\n";
    String stepFieldPtr = this->nextVar();
    out << "    " << stepFieldPtr << " = getelementptr " << this->llvmWrapperTypeName(type) <<
            ", " << this->llvmWrapperType(type) << " " << stepPtrCast << ", i64 0, i32 " <<
            OBJECT_FIELD_COUNT << "\n";
    String stepLoad = this->nextVar();
    out << "    " << stepLoad << " = load " << numberType << ", " << numberType <<
            "* " << stepFieldPtr << "\n";
    out << "    br label %" << stepEnd << "\n";
    this->createBlock(stepEnd, out);
    String step = this->nextVar();
    out << "    " << step << " = phi " << numberType << " [1, %" << stepStart << "], [" <<
            stepLoad << ", %" << stepNonNull << "]\n";

    // extract inclusive / exclusive from range
    String inclusive = this->nextVar();
    out << "    " << inclusive << " = extractvalue " << range << ", 3, 0\n";

    // start block
    String loopStart = this->nextLabel();
    String loopBody = this->nextLabel();
    String loopEnd = this->nextLabel();
    String loopTest = this->nextLabel();
    AutoLoopDescriptor loop(this, f.fText, loopEnd, loopTest);
    String forwardEntry = this->nextLabel();
    String backwardEntry = this->nextLabel();
    char signPrefix = 's';
    String direction;
    if (signPrefix == 's') {
        direction = this->nextVar();
        out << "    " << direction << " = icmp sge " << numberType << " " << step <<
                ", 0\n";
    }
    else {
        direction = "1";
    }
    out << "    br i1 " << direction << ", label %" << forwardEntry << ", label %" <<
            backwardEntry << "\n";
    this->createBlock(forwardEntry, out);
    String forwardEntryInclusive = this->nextLabel();
    String forwardEntryExclusive = this->nextLabel();
    out << "    br i1 " << inclusive << ", label %" << forwardEntryInclusive << ", label %" <<
            forwardEntryExclusive << "\n";
    this->createBlock(forwardEntryInclusive, out);
    String forwardEntryInclusiveTest = this->nextVar();
    out << "    " << forwardEntryInclusiveTest << " = icmp " << signPrefix << "le " << numberType <<
            " " << start << ", " << end << "\n";
    out << "    br i1 " << forwardEntryInclusiveTest << ", label %" << loopStart << ", label %" <<
            loopEnd << "\n";
    this->createBlock(forwardEntryExclusive, out);
    String forwardEntryExclusiveTest = this->nextVar();
    out << "    " << forwardEntryExclusiveTest << " = icmp " << signPrefix << "lt " << numberType <<
            " " << start << ", " << end << "\n";
    out << "    br i1 " << forwardEntryExclusiveTest << ", label %" << loopStart << ", label %" <<
            loopEnd << "\n";
    this->createBlock(backwardEntry, out);
    String backwardEntryInclusive = this->nextLabel();
    String backwardEntryExclusive = this->nextLabel();
    out << "    br i1 " << inclusive << ", label %" << backwardEntryInclusive << ", label %" <<
            backwardEntryExclusive << "\n";
    this->createBlock(backwardEntryInclusive, out);
    String backwardEntryInclusiveTest = this->nextVar();
    out << "    " << backwardEntryInclusiveTest << " = icmp " << signPrefix << "ge " <<
            numberType << " " << start << ", " << end << "\n";
    out << "    br i1 " << backwardEntryInclusiveTest << ", label %" << loopStart << ", label %" <<
            loopEnd << "\n";
    this->createBlock(backwardEntryExclusive, out);
    String backwardEntryExclusiveTest = this->nextVar();
    out << "    " << backwardEntryExclusiveTest << " = icmp " << signPrefix << "gt " <<
            numberType << " " << start << ", " << end << "\n";
    out << "    br i1 " << backwardEntryExclusiveTest << ", label %" << loopStart << ", label %" <<
            loopEnd << "\n";
    this->createBlock(loopStart, out);
    String indexValue = this->nextVar();
    out << "    " << indexValue << " = load " << numberType << ", " << numberType << "* " <<
            indexValuePtr << "\n";
    this->writeStatement(block, out);
    if (!ends_with_branch(block)) {
        out << "    br label %" << loopTest << "\n";
    }
    this->createBlock(loopTest, out);
    String loopInc = this->nextLabel();
    // beginning of loop test, determine direction
    out << "    ; direction test\n";
    String forwardLabel = this->nextLabel();
    String backwardLabel = this->nextLabel();
    out << "    br i1 " << direction << ", label %" << forwardLabel << ", label %" <<
            backwardLabel << "\n";

    // forward loop; perform the test by subtracting index from end and then comparing to step, to
    // avoid overflows near the maximum value
    this->createBlock(forwardLabel, out);
    out << "    ; forward test\n";
    String forwardDelta = this->nextVar();
    out << "    " << forwardDelta << " = sub " << numberType << " " << end << ", " << indexValue <<
            "\n";

    // forward loop; determine inclusive / exclusive
    String forwardInclusiveLabel = this->nextLabel();
    String forwardExclusiveLabel = this->nextLabel();
    out << "    br i1 " << inclusive << ", label %" << forwardInclusiveLabel << ", label %" <<
            forwardExclusiveLabel << "\n";

    // forward inclusive test
    this->createBlock(forwardInclusiveLabel, out);
    out << "    ; forward inclusive\n";
    String forwardInclusiveTest = this->nextVar();
    // always use unsigned comparison to avoid overflow; we know both the delta and the step are
    // the same sign
    out << "    " << forwardInclusiveTest << " = icmp uge " << numberType <<
            " " << forwardDelta << ", " << step << "\n";
    out << "    br i1 " << forwardInclusiveTest << ", label %" << loopInc << ", label %" <<
            loopEnd << "\n";
    this->createBlock(forwardExclusiveLabel, out);

    // forward exclusive test
    String forwardExclusiveTest = this->nextVar();
    out << "    ; forward exclusive\n";
    out << "    " << forwardExclusiveTest << " = icmp ugt " << numberType << " " << forwardDelta <<
            ", " << step << "\n";
    out << "    br i1 " << forwardExclusiveTest << ", label %" << loopInc << ", label %" <<
            loopEnd << "\n";

    // backward loop; perform the test by subtracting end from index and then comparing to -step, to
    // avoid overflows near the minimum value
    this->createBlock(backwardLabel, out);
    out << "    ; backward test\n";
    String backwardDelta = this->nextVar();
    out << "    " << backwardDelta << " = sub " << numberType << " " << indexValue << ", " << end <<
            "\n";
    String negStep = this->nextVar();
    out << "    " << negStep << " = sub " << numberType << " 0, " << step << "\n";

    // backward loop; determine inclusive / exclusive
    String backwardInclusiveLabel = this->nextLabel();
    String backwardExclusiveLabel = this->nextLabel();
    out << "    br i1 " << inclusive << ", label %" << backwardInclusiveLabel << ", label %" <<
            backwardExclusiveLabel << "\n";

    // backward inclusive test
    this->createBlock(backwardInclusiveLabel, out);
    out << "    ; backward inclusive\n";
    String backwardInclusiveTest = this->nextVar();
    out << "    " << backwardInclusiveTest << " = icmp uge " << numberType << " " <<
            backwardDelta << ", " << negStep << "\n";
    out << "    br i1 " << backwardInclusiveTest << ", label %" << loopInc << ", label %" <<
            loopEnd << "\n";
    this->createBlock(backwardExclusiveLabel, out);

    // backward exclusive test
    String backwardExclusiveTest = this->nextVar();
    out << "    ; backward exclusive\n";
    out << "    " << backwardExclusiveTest << " = icmp ugt " << numberType <<
            " " << backwardDelta << ", " << negStep << "\n";
    out << "    br i1 " << backwardExclusiveTest << ", label %" << loopInc << ", label %" <<
            loopEnd << "\n";

    this->createBlock(loopInc, out);
    String inc = this->nextVar();
    out << "    " << inc << " = add " << numberType << " " << indexValue << ", " << step <<
            "\n";
    String incStruct = this->nextVar();
    out << "    " << incStruct << " = insertvalue " << indexType << " { " <<
            numberType << " undef";
    out << " }, " << numberType << " " << inc << ", 0\n";
    out << "    store " << indexType << " " << incStruct << ", " << indexType << "* " << index <<
            "\n";
    out << "    br label %" << loopStart << "\n";

    this->createBlock(loopEnd, out);
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

void LLVMCodeGenerator::writeReturn(const IRNode& r, std::ostream& out) {
    ASSERT(r.fKind == IRNode::Kind::RETURN);
    if (r.fChildren.size() == 1) {
        String ref = this->getReference(r.fChildren[0], out);
        const Type& rawType = r.fChildren[0].fType;
        const Type actualType = fCurrentMethod->inheritedType(*fCompiler).fSubtypes.back();
        if (rawType != actualType) {
            ref = this->getCastReference(ref, rawType, actualType, out);
        }
        out << "    ret " << this->llvmType(actualType) << " " << ref << "\n";
    }
    else {
        ASSERT(r.fChildren.size() == 0);
        out << "ret void\n";
    }
}

const LLVMCodeGenerator::LoopDescriptor& LLVMCodeGenerator::findLoop(String name) {
    ASSERT(fLoops.size());
    if (name.size() == 0) {
        return fLoops.back();
    }
    for (int i = fLoops.size() - 1; i >= 0; i--) {
        if (fLoops[i].fLabel == name) {
            return fLoops[i];
        }
    }
    abort();
}

void LLVMCodeGenerator::writeBreak(const IRNode& b, std::ostream& out) {
    const LoopDescriptor& loop = this->findLoop(b.fText);
    out << "    br label %" << loop.fBreakLabel << "\n";
}

void LLVMCodeGenerator::writeContinue(const IRNode& c, std::ostream& out) {
    const LoopDescriptor& loop = this->findLoop(c.fText);
    out << "    br label %" << loop.fContinueLabel << "\n";
}

void LLVMCodeGenerator::writeAssert(const IRNode& a, std::ostream& out) {
    ASSERT(a.fKind == IRNode::Kind::ASSERT);
    ASSERT(a.fChildren.size() == 1 || a.fChildren.size() == 2);
    String test = this->getReference(a.fChildren[0], out);
    String ifTrue = this->nextLabel();
    String ifFalse = this->nextLabel();
    out << "    br i1 " << test << ", label %" << ifTrue << ", label %" << ifFalse << "\n";
    this->createBlock(ifFalse, out);
    ASSERT(a.fPosition.fName);
    String name = *a.fPosition.fName;
    int idx = name.find_last_of("/");
    if (idx != std::string::npos) {
        name = name.substr(idx + 1);
    }
    String file = this->getStringReference(name, out);
    String line = this->nextVar();
    out << "    " << line << " = insertvalue %panda$core$Int64 { i64 undef }, i64 " <<
            a.fPosition.fLine << ", 0\n";
    String msg;
    if (a.fChildren.size() == 2) {
        msg = this->getReference(a.fChildren[1], out);
    }
    out << "    call void ";
    for (const auto& m : fCompiler->getClass(Type::Panda())->fMethods) {
        this->writeMethodDeclaration(*m);
    }
    if (a.fChildren.size() == 1) {
        out << "@panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64";
    }
    else {
        out << "@panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String";
    }
    out << "(%panda$core$String* " << file << ", %panda$core$Int64 " << line;
    if (a.fChildren.size() == 2) {
        out << ", %panda$core$String* " << msg;
    }
    out << ")\n";
    out << "    call void @llvm.trap()\n";
    out << "    unreachable\n";
    this->createBlock(ifTrue, out);
}

void LLVMCodeGenerator::writeStatement(const IRNode& stmt, std::ostream& out) {
    switch (stmt.fKind) {
        case IRNode::Kind::BINARY:    this->writeAssignment(stmt, out);              break;
        case IRNode::Kind::BLOCK:     this->writeBlock     (stmt, out);              break;
        case IRNode::Kind::CALL:      this->writeCall      (stmt, "", out);          break;
        case IRNode::Kind::IF:        this->writeIf        (stmt, out);              break;
        case IRNode::Kind::WHILE:     this->writeWhile     (stmt, out);              break;
        case IRNode::Kind::DO:        this->writeDo        (stmt, out);              break;
        case IRNode::Kind::LOOP:      this->writeLoop      (stmt, out);              break;
        case IRNode::Kind::RANGE_FOR: this->writeRangeFor  (stmt, out);              break;
        case IRNode::Kind::RETURN:    this->writeReturn    (stmt, out);              break;
        case IRNode::Kind::BREAK:     this->writeBreak     (stmt, out);              break;
        case IRNode::Kind::CONTINUE:  this->writeContinue  (stmt, out);              break;
        case IRNode::Kind::ASSERT:    this->writeAssert    (stmt, out);              break;
        case IRNode::Kind::VAR:       // fall through
        case IRNode::Kind::DEF:       // fall through
        case IRNode::Kind::PROPERTY:  // fall through
        case IRNode::Kind::CONSTANT:  this->writeVar       (stmt, out);              break;
        case IRNode::Kind::CAST:      this->writeStatement (stmt.fChildren[0], out); break;
        default:
            printf("unsupported statement: %s\n", stmt.description().c_str());
            abort();
    }
}

std::unordered_map<String, String> METHOD_NAME_MAP {
    { "+",       "$ADD" },
    { "-",       "$SUB" },
    { "*",       "$MUL" },
    { "/",       "$DIV" },
    { "//",      "$INTDIV" },
    { "%",       "$REM" },
    { "^",       "$POW" },
    { "[]",      "$IDX" },
    { "[]:=",    "$IDXEQ" },
    { "=",       "$EQ" },
    { "!=",      "$NEQ" },
    { ">",       "$GT" },
    { "<",       "$LT" },
    { ">=",      "$GE" },
    { "<=",      "$LE" },
    { "|",       "$OR" },
    { "||",      "$BOR" },
    { "&",       "$AND" },
    { "&&",      "$BAND" },
    { "~",       "$XOR" },
    { "~~",      "$BXOR" },
    { "!",       "$NOT" },
    { "!!",      "$BNOT" },
    { "<<",      "$SHL" },
    { ">>",      "$SHR" }
};

String LLVMCodeGenerator::methodName(const Method& method) {
    if (method.fName == "main") {
        return "@main";
    }
    String name = method.fName;
    auto found = METHOD_NAME_MAP.find(name);
    if (found != METHOD_NAME_MAP.end()) {
        name = found->second;
    }
    String result = "@" + escape_type_name(method.fOwner.fName) + "$" + name;
    for (const auto& p : method.fParameters) {
        result += "$" + escape_type_name(p.fType.fName);
    }
    if (method.fMethodKind != Method::Kind::INIT && method.fReturnType != Type::Void()) {
        result += "$R$" + escape_type_name(method.fReturnType.fName);
    }
    return result;
}

String LLVMCodeGenerator::fieldName(const Field& field) {
    ASSERT(field.fAnnotations.isClass());
    return "@" + escape_type_name(field.fOwner.fName) + "$" + field.fName;
}

String LLVMCodeGenerator::varName(const Variable& var) {
    if (var.fStorage == Variable::Storage::PARAMETER) {
        String result = fParameterNames[var.fName];
        ASSERT(result.size());
        return std::move(result);
    }
    auto found = fVariableNames.find(&var);
    if (found == fVariableNames.end()) {
        String result = "%" + var.fName + std::to_string(fVariableNames.size());
        fVariableNames[&var] = result;
        return result;
    }
    return found->second;
}

String LLVMCodeGenerator::defaultValue(const Type& type) {
    if (type.isBuiltinNumber() || type == Type::BuiltinBit()) {
        return "0";
    }
    else {
        Class* cl = fCompiler->getClass(type);
        ASSERT(cl);
        if (cl->isValue(fCompiler)) {
            String result = "{";
            const char* separator = " ";
            for (const Field* f : fCompiler->getInstanceFields(*cl)) {
                result += separator;
                result += this->llvmType(f->fType);
                result += " ";
                result += this->defaultValue(f->fType);
                separator = ", ";
            }
            result += " }";
            return result;
        }
        else {
            return "null";
        }
    }
}

void LLVMCodeGenerator::writeMethodDeclaration(Method& method) {
    fCompiler->resolveTypes(&method);
    if (method.fOwner.fName == "panda.core.Pointer") {
        return;
    }

    if (method.fAnnotations.isAbstract()) {
        return;
    }

    if (fDeclaredMethods.find(&method) != fDeclaredMethods.end()) {
        return;
    }
    fDeclaredMethods.insert(&method);

    std::ostream& out = fMethodDeclarations;
    out << "\ndeclare " << this->callingConvention(method);
    if (this->needsStructIndirection(method)) {
        out << "void";
    }
    else {
        String returnType = this->llvmType(method.fReturnType);
        out << returnType;
    }
    out << " " << this->methodName(method) << "(";
    const char* separator = "";
    if (this->needsStructIndirection(method)) {
        out << this->llvmType(method.fReturnType) << "*";
        separator = ", ";
    }
    if (is_instance(method)) {
        out << separator << this->selfType(method) << " %self";
        separator = ", ";
    }
    for (const auto& p : method.fParameters) {
        out << separator << this->llvmType(p.fType) << " %" << p.fName;
        separator = ", ";
    }
    out << ")\n";
}

void LLVMCodeGenerator::createMethodShim(const Method& raw, const Type& effective,
        std::ostream& out, String* outName, String* outType) {
    abort();
    auto found = fMethodShims.find(&raw);
    if (found != fMethodShims.end()) {
        *outName = found->second.first;
        *outType = found->second.second;
        return;
    }
    ASSERT(effective.isMethod());
    ASSERT(effective.fSubtypes.size() == raw.fParameters.size() + 1);
    ASSERT(!raw.fAnnotations.isClass());
    int oldTmpVar = fTmpVars;
    fTmpVars = 1;
    ASSERT(is_instance(raw));
    String result = this->methodName(raw) + "$shim";
    *outType = this->llvmType(effective.fSubtypes.back());
    out << "define " << *outType << " " << result << "(";
    String selfType = this->selfType(raw);
    out << selfType << " %self";
    *outType += "(";
    *outType += selfType;
    for (int i = 0; i < raw.fParameters.size(); ++i) {
        String pType = this->llvmType(effective.fSubtypes[i]);
        *outType += ", ";
        *outType += pType;
        out << ", " << pType << " %p" << i;
    }
    out << ") {\n";
    *outType += ")*";
    std::vector<String> casts;
    for (int i = 0; i < raw.fParameters.size(); ++i) {
        String p = "%p" + std::to_string(i);
        if (raw.fParameters[i].fType != effective.fSubtypes[i]) {
            casts.push_back(this->getCastReference(p, effective.fSubtypes[i],
                    raw.fParameters[i].fType, out));
        }
        else {
            casts.push_back(p);
        }
    }
    out << "    ";
    String returnValue;
    if (raw.fReturnType != Type::Void()) {
        returnValue = this->nextVar();
        out << returnValue << " = ";
    }
    else {
        returnValue = "void";
    }
    out << "call " << this->callingConvention(raw) << this->llvmType(raw.fReturnType) <<
            " " << this->methodName(raw) << "(" << selfType << " %self";
    for (int i = 0; i < raw.fParameters.size(); ++i) {
        out << ", " << this->llvmType(raw.fParameters[i].fType) << " " << casts[i];
    }
    out << ")\n";
    if (raw.fReturnType != Type::Void()) {
        returnValue = this->llvmType(effective.fSubtypes.back()) + " " +
                this->getCastReference(returnValue, raw.fReturnType, effective.fSubtypes.back(),
                        out);
    }
    out << "    ret " << returnValue << "\n";
    out << "}\n";
    fTmpVars = oldTmpVar;
    *outName = result;
    fMethodShims[&raw] = std::make_pair(*outName, *outType);
}

void LLVMCodeGenerator::writeMethod(Method& method, const IRNode& body) {
    fCurrentMethod = &method;
    fCurrentClass = &method.fOwner;
    fInitializedClasses.clear();
    fTmpVars = 1;
    fCurrentBlock = "0";
    std::ostream& out = fMethods;
    const Type actualType = method.inheritedType(*fCompiler);
    out << "\ndefine " << this->callingConvention(method) <<
            this->llvmType(actualType.fSubtypes.back()) << " " << this->methodName(method) << "(";
    const char* separator = "";
    if (is_instance(method)) {
        out << separator << this->selfType(method) << " %self";
        separator = ", ";
    }
    for (int i = 0; i < method.fParameters.size(); ++i) {
        out << separator << this->llvmType(actualType.fSubtypes[i]) << " %" <<
                method.fParameters[i].fName;
        if (actualType.fSubtypes[i] != method.fParameters[i].fType) {
            out << "$Raw";
        }
        separator = ", ";
    }
    out << ") {\n";
    // cast parameters to declared types and populate fParameterNames
    ASSERT(!fParameterNames.size());
    ASSERT(!fVariableNames.size());
    for (int i = 0; i < method.fParameters.size(); ++i) {
        if (actualType.fSubtypes[i] != method.fParameters[i].fType) {
            fParameterNames[method.fParameters[i].fName] = this->getCastReference("%" +
                    method.fParameters[i].fName + "$Raw", actualType.fSubtypes[i],
                    method.fParameters[i].fType, out);
        }
        else {
            fParameterNames[method.fParameters[i].fName] = "%" + method.fParameters[i].fName;
        }
    }
    fMethodHeader.str("");
    std::stringstream bodyCode;
    ASSERT(body.fKind == IRNode::Kind::BLOCK);
    for (const auto& s : body.fChildren) {
        this->writeStatement(s, bodyCode);
    }
    out << fMethodHeader.str();
    out << bodyCode.str();
    if (!ends_with_branch(body)) {
        if (method.fReturnType == Type::Void()) {
            out << "    ret void\n";
        }
        else {
            out << "    call void @llvm.trap()\n";
            out << "    unreachable\n";
        }
    }
    out << "}\n";
    fParameterNames.clear();
    fVariableNames.clear();
    fReusedValues.clear();
}

void LLVMCodeGenerator::addGlobalField(Field* f) {
    fFieldInitializationOrder.push_back(f);
}
