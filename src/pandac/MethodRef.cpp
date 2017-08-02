#include "MethodRef.h"

#include "Class.h"
#include "Method.h"

MethodRef::MethodRef(Method* method, std::vector<Type> types)
: fMethod(*method)
, fTypes(std::move(types)) {
    for (int i = 0; i < fTypes.size(); ++i) {
        if (i >= method->fOwner.fParameters.size()) {
            break;
        }
        fTypeMap[method->fOwner.fName + "." + method->fOwner.fParameters[i].fName] = fTypes[i];
    }
}

Type MethodRef::owner() const {
    if (fTypes.size() == 0) {
        return fMethod.fOwner.fType;
    }
    std::vector<Type> types;
    types.push_back(fMethod.fOwner.fType);
    types.insert(types.end(), fTypes.begin(), fTypes.end());
    return Type(std::move(types));
}

int MethodRef::parameterCount() const {
    return fMethod.fParameters.size();
}

Type MethodRef::parameterType(int idx) const {
    return fMethod.fParameters[idx].fType.remap(fTypeMap);
}

Type MethodRef::returnType() const {
    return fMethod.fReturnType.remap(fTypeMap);
}

String MethodRef::description() const {
    String result = "MethodRef(" + fMethod.description();
    const char* separator = "";
    for (const auto& t : fTypes) {
        result += separator;
        result += t.description();
        separator = ", ";
    }
    result += ")";
    return result;
}
