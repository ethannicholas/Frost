#pragma once

#include "Annotations.h"
#include "ASTNode.h"
#include "MethodRef.h"
#include "Symbol.h"
#include "Type.h"

#include <memory>

struct Class;

struct Method : public Symbol {
    enum class Kind {
        METHOD,
        FUNCTION,
        INIT
    };

    struct Parameter {
        String fName;
        Type fType;
    };

    Method(const Method&) = delete;

    Method(Position position, const Class* owner, Annotations annotations, Kind kind, String name,
            std::vector<Parameter> parameters, Type returnType, ASTNode body)
    : INHERITED(position, Symbol::Kind::METHOD, std::move(name))
    , fOwner(*owner)
    , fAnnotations(annotations)
    , fMethodKind(kind)
    , fParameters(std::move(parameters))
    , fReturnType(std::move(returnType))
    , fBody(std::move(body)) {
        ASSERT(owner);
    }

    bool matches(const Method& other) const {
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

    String description() const {
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
        result += " (" + fPosition.description() + ")";
        return result;
    }

    const Class& fOwner;
    Annotations fAnnotations;
    const Kind fMethodKind;
    std::vector<Parameter> fParameters;
    Type fReturnType;
    const ASTNode fBody;

    mutable std::vector<std::unique_ptr<const MethodRef>> fMethodRefs;

    typedef Symbol INHERITED;
};