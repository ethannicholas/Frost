#pragma once

#include "Annotations.h"
#include "Class.h"
#include "Symbol.h"
#include "Type.h"

struct Field : public Symbol {
    enum class Kind {
        VAR,
        DEF,
        PROPERTY,
        CONSTANT
    };

    Field(const Field&) = delete;

    Field(Position position, const Class* owner, Annotations annotations, Kind fieldKind,
            String name, Type type)
    : INHERITED(position, Symbol::Kind::FIELD, std::move(name))
    , fAnnotations(std::move(annotations))
    , fFieldKind(fieldKind)
    , fType(std::move(type)) {}

    const Class* fOwner;

    const Annotations fAnnotations;

    const Kind fFieldKind;
    
    const Type fType;

    typedef Symbol INHERITED;
};