#pragma once

#include "Position.h"
#include "Util.h"

struct Symbol {
    enum class Kind {
        ALIAS,
        CLASS,
        FIELD,
        GENERIC_PARAMETER,
        METHOD,
        METHODS,
        PACKAGE,
        TYPE,
        VARIABLE
    };

    Symbol(Position position, Kind kind, String name)
    : fPosition(position)
    , fKind(kind)
    , fName(std::move(name)) {
        ASSERT(fName.size());
    }

    virtual ~Symbol() {}

    Position fPosition;
    Kind fKind;
    String fName;
};
