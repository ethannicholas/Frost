#pragma once

#include "Symbol.h"
#include "Type.h"

/**
 * Represents a var, def, constant, or property.
 */
struct Variable : public Symbol {
    Variable(const Variable&) = delete;

    Variable(String name, Type type)
    : INHERITED(Kind::VARIABLE, std::move(name))
    , fType(std::move(type)) {}

    const Type fType;

    typedef Symbol INHERITED;
};