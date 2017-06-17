#pragma once

#include "Symbol.h"
#include "Type.h"

/**
 * Represents a var, def, constant, or property.
 */
struct Variable : public Symbol {
    enum class Storage {
        LOCAL,
        PARAMETER
    };
    Variable(const Variable&) = delete;

    Variable(Position position, String name, Type type, Storage storage = Variable::Storage::LOCAL)
    : INHERITED(position, Kind::VARIABLE, std::move(name))
    , fType(std::move(type))
    , fStorage(storage) {
        ASSERT(fType.fName != "Int");
    }

    const Type fType;

    const Storage fStorage;

    typedef Symbol INHERITED;
};