#pragma once

#include "Symbol.h"
#include "Type.h"

/**
 * Represents a package.
 */
struct Package : public Symbol {
    Package(Position position, String name, SymbolTable* parent)
    : INHERITED(position, Kind::PACKAGE, std::move(name))
    , fSymbolTable(parent, nullptr) {}

    SymbolTable fSymbolTable;

    typedef Symbol INHERITED;
};