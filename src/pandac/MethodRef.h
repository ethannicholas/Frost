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

    Type owner() const;

    int parameterCount() const;

    Type parameterType(int idx) const;

    Type returnType() const;

    String description() const;

    const Method& fMethod;

    std::vector<Type> fTypes;

    std::map<String, Type> fTypeMap;
};