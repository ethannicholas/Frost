#pragma once

#include "Util.h"

struct Symbol {
    enum class Kind {
        METHOD,
        VARIABLE,
        TYPE
    };

    Symbol(Kind kind, String name)
    : fKind(kind)
    , fName(std::move(name)) {}

    Kind fKind;
    String fName;
};
