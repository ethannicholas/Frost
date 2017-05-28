#pragma once

#include "Annotations.h"
#include "SymbolTable.h"
#include "Type.h"

struct Class : public Symbol {
    Class(const Class&) = delete;

    Class(Position position, Annotations annotations, String name, const SymbolTable* parent,
            Type superclass)
    : INHERITED(position, Kind::CLASS, std::move(name))
    , fSymbolTable(parent)
    , fSuper(superclass)
    , fType(fPosition, Type::Category::CLASS, fName) {}

    Annotations fAnnotations;

    SymbolTable fSymbolTable;

    std::vector<const Method*> fMethods;

    Type fSuper;

    Type fType;

    std::vector<const Method*> fVirtualMethods;

    typedef Symbol INHERITED;
};