#include "Class.h"

#include "Compiler.h"

Type& Class::getRawSuper(Compiler* compiler) {
    if (!fTypesResolved) {
        compiler->resolveTypes(this);
    }
    ASSERT(fTypesResolved);
    return fRawSuper;
}

std::vector<Type>& Class::getRawInterfaces(Compiler* compiler) {
    if (!fTypesResolved) {
        compiler->resolveTypes(this);
    }
    ASSERT(fTypesResolved);
    return fRawInterfaces;
}
