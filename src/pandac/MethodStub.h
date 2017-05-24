#pragma once

#include "Symbol.h"
#include "Type.h"

struct MethodStub : public Symbol {
    MethodStub(const MethodStub&) = delete;

    MethodStub(String name, std::vector<Type> parameters, Type returnType)
    : INHERITED(Kind::METHOD, std::move(name))
    , fParameters(std::move(parameters))
    , fReturnType(std::move(returnType)) {}

    const std::vector<Type> fParameters;
    const Type fReturnType;

    typedef Symbol INHERITED;
};