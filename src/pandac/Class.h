#pragma once

#include "Annotations.h"
#include "SymbolTable.h"
#include "Type.h"

struct Field;
struct Method;

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

    // fields defined in this class (not including inherited fields)
    std::vector<const Field*> fFields;

    // methods defined in this class (not including inherited methods)
    std::vector<const Method*> fMethods;

    Type fSuper;

    Type fType;

    // virtual method table (vtable)
    std::vector<const Method*> fVirtualMethods;

    typedef Symbol INHERITED;
};