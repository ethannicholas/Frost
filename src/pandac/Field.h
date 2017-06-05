#pragma once

#include "Annotations.h"
#include "Class.h"
#include "Symbol.h"
#include "Type.h"

struct IRNode;

struct Field : public Symbol {
    enum class Kind {
        VAR,
        DEF,
        PROPERTY,
        CONSTANT
    };

    Field(const Field&) = delete;

    Field(Position position, Class* owner, Annotations annotations, Kind fieldKind,
            String name, Type type)
    : INHERITED(position, Symbol::Kind::FIELD, std::move(name))
    , fOwner(*owner)
    , fAnnotations(std::move(annotations))
    , fFieldKind(fieldKind)
    , fType(std::move(type)) {}

    Class& fOwner;

    const Annotations fAnnotations;

    const Kind fFieldKind;
    
    Type fType;

    // pointer to the value this field was initialized with. The values are stored in the field's
    // class for lifetime purposes (they cannot live in the field itself, because multiple fields
    // can refer to the same value due to tuple destructuring)
    IRNode* fValue = nullptr;

    // indices into the field's value, in the event this is a tuple destructuring. Will be empty for
    // a straight assignment.
    std::vector<int> fTupleIndices;

    typedef Symbol INHERITED;
};