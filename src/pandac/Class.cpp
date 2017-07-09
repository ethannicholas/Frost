#include "Class.h"
#include "Compiler.h"

std::set<const Class*> Class::allInterfaces(Compiler& compiler) const {
    std::set<const Class*> result;
    if (fSuper != Type::Void()) {
        std::set<const Class*> add = compiler.getClass(fSuper)->allInterfaces(compiler);
        result.insert(add.begin(), add.end());
    }
    for (const Type& intf : fInterfaces) {
        std::set<const Class*> add = compiler.getClass(intf)->allInterfaces(compiler);
        result.insert(add.begin(), add.end());
    }
    if (fClassKind == ClassKind::INTERFACE) {
        result.insert(this);
    }
    return std::move(result);
}

const Method* Class::findMethod(const Method& m, Compiler& compiler) const {
    for (const Method* test : fMethods) {
        if (test->matches(m)) {
            return test;
        }
    }
    if (fSuper != Type::Void()) {
        const Class* super = compiler.getClass(fSuper);
        ASSERT(super);
        return super->findMethod(m, compiler);
    }
    return nullptr;
}

std::vector<const Method*> Class::interfaceMethods(const Class& intf, Compiler& compiler) const {
    std::vector<const Method*> result;
    for (const Method* m : intf.fMethods) {
        const Method* found = this->findMethod(*m, compiler);
        ASSERT(found);
        result.push_back(found);
    }
    return std::move(result);
}
