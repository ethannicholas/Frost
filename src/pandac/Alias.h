#pragma once

#include "Symbol.h"

struct Alias : public Symbol {
    Alias(Position position, String alias, String fullName)
    : INHERITED(position, Kind::ALIAS, std::move(alias))
    , fAlias(std::move(alias))
    , fFullName(std::move(fullName)) {}

    const String fAlias;

    const String fFullName;

    typedef Symbol INHERITED;
};