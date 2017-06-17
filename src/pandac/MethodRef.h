#pragma once

#include "Type.h"

#include <map>
#include <vector>

struct Method;

/**
 * A particular instantiation of a method, taking generic types into account.
 */
struct MethodRef {
    // types for the owning class' generic parameters, followed by the method's generic parameters
    MethodRef(const Method* method, std::vector<Type> types);

    int parameterCount() const;

    Type parameterType(int idx) const;

    Type returnType() const;

    const Method& fMethod;

    std::map<String, Type> fTypes;
};