#pragma once

#include "ASTNode.h"
#include "Symbol.h"
#include "Type.h"

struct MethodStub : public Symbol {
    struct Parameter {
        String fName;
        Type fType;
    };

    MethodStub(const MethodStub&) = delete;

    MethodStub(Position position, String name, std::vector<Parameter> parameters, Type returnType,
            ASTNode body)
    : INHERITED(position, Kind::METHOD, std::move(name))
    , fParameters(std::move(parameters))
    , fReturnType(std::move(returnType))
    , fBody(body) {}

    String description() {
        String result = fName + "(";
        const char* separator = "";
        for (const auto& p : fParameters) {
            result += separator + p.fType.fName;
            separator = ", ";
        }
        result += ") (" + fPosition.description() + ")";
        return result;
    }

    const std::vector<Parameter> fParameters;
    const Type fReturnType;
    const ASTNode fBody;

    typedef Symbol INHERITED;
};