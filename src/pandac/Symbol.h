#pragma once

#include "Position.h"
#include "Util.h"

struct Symbol {
    enum class Kind {
        CLASS,
        METHOD,
        METHODS,
        PACKAGE,
        TYPE,
        VARIABLE
    };

    Symbol(Position position, Kind kind, String name)
    : fPosition(position)
    , fKind(kind)
    , fName(std::move(name)) {}

    Position fPosition;
    Kind fKind;
    String fName;
};
