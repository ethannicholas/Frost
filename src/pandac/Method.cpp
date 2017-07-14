#include "Method.h"

#include "Compiler.h"

bool Method::matches(const Method& other) const {
    if (fName != other.fName) {
        return false;
    }
    if (fReturnType != other.fReturnType) {
        return false;
    }
    if (fParameters.size() != other.fParameters.size()) {
        return false;
    }
    for (int i = 0; i < fParameters.size(); ++i) {
        if (fParameters[i].fType != other.fParameters[i].fType) {
            return false;
        }
    }
    return true;
}

Type Method::declaredType() const {
    std::vector<Type> subtypes;
    String typeName = "(";
    const char* separator = "";
    for (const Parameter& p : fParameters) {
        typeName += separator;
        typeName += p.fType.fName;
        subtypes.push_back(p.fType);
        separator = ", ";
    }
    Type::Category category;
    if (fMethodKind == Kind::FUNCTION) {
        typeName += ")=>(";
        category = Type::Category::FUNCTION;
    }
    else {
        typeName += ")=&>(";
        category = Type::Category::METHOD;
    }
    subtypes.push_back(fReturnType);
    if (fReturnType != Type::Void()) {
        typeName += fReturnType.fName;
    }
    typeName += ")";
    return Type(fPosition, category, typeName, std::move(subtypes));
}

Type Method::declaredTypeWithSelf(Type self) const {
    ASSERT(!fAnnotations.isClass());
    std::vector<Type> subtypes;
    String typeName = "(" + self.fName;
    subtypes.push_back(self);
    for (const Parameter& p : fParameters) {
        typeName += ", ";
        typeName += p.fType.fName;
        subtypes.push_back(p.fType);
    }
    Type::Category category;
    if (fMethodKind == Kind::FUNCTION) {
        typeName += ")=>(";
        category = Type::Category::FUNCTION;
    }
    else {
        typeName += ")=&>(";
        category = Type::Category::METHOD;
    }
    subtypes.push_back(fReturnType);
    if (fReturnType != Type::Void()) {
        typeName += fReturnType.fName;
    }
    typeName += ")";
    return Type(fPosition, category, typeName, std::move(subtypes));
}


Type Method::inheritedType(Compiler& compiler) const {
    const Method* overridden = compiler.getOverriddenMethod(*this);
    if (overridden) {
        return overridden->inheritedType(compiler);
    }
    return this->declaredType();
}

Type Method::inheritedTypeWithSelf(Compiler& compiler) const {
    return this->inheritedTypeWithSelf(compiler, fOwner.fType);
}

Type Method::inheritedTypeWithSelf(Compiler& compiler, Type self) const {
    const Method* overridden = compiler.getOverriddenMethod(*this);
    if (overridden) {
        return overridden->inheritedTypeWithSelf(compiler, self);
    }
    return this->declaredTypeWithSelf(self);
}

String Method::signature() const {
    String result;
    switch (fMethodKind) {
        case Kind::METHOD: result += "method ";     break;
        case Kind::FUNCTION: result += "function "; break;
        case Kind::INIT: ASSERT(fName == "init");   break;
    }
    result += fName + "(";
    const char* separator = "";
    for (const auto& p : fParameters) {
        result += separator + p.fType.fName;
        separator = ", ";
    }
    result += ')';
    if (fReturnType != Type::Void()) {
        result += ':';
        result += fReturnType.description();
    }
    return result;
}
