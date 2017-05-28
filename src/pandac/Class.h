#pragma once

#include "SymbolTable.h"
#include "Type.h"

struct Class : public Symbol {
    Class(const Class&) = delete;

    Class(Position position, String name, const SymbolTable* parent)
    : INHERITED(position, Kind::CLASS, std::move(name))
    , fSymbolTable(parent) {}

    Type type() const {
        return Type(fPosition, Type::Category::CLASS, fName);
    }

    SymbolTable fSymbolTable;

    typedef Symbol INHERITED;
};