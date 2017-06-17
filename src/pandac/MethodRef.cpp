#include "MethodRef.h"

#include "Class.h"
#include "Method.h"

MethodRef::MethodRef(const Method* method, std::vector<Type> types)
: fMethod(*method) {
    for (int i = 0; i < types.size(); ++i) {
        fTypes[method->fOwner.fParameters[i].fName] = std::move(types[i]);
    }
}

int MethodRef::parameterCount() const {
    return fMethod.fParameters.size();
}

Type MethodRef::parameterType(int idx) const {
    return fMethod.fParameters[idx].fType.remap(fTypes);
}

Type MethodRef::returnType() const {
    return fMethod.fReturnType.remap(fTypes);
}
