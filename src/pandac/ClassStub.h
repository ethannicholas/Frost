#pragma once

#include "SymbolTable.h"
#include "Type.h"

struct ClassStub : public Symbol {
    ClassStub(const ClassStub&) = delete;

    ClassStub(Position position, String name, const SymbolTable* parent)
    : INHERITED(position, Kind::CLASS, std::move(name))
    , fSymbolTable(parent) {}

    SymbolTable fSymbolTable;

    typedef Symbol INHERITED;
};