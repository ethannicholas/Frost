#pragma once

#include "Annotations.h"
#include "IRNode.h"
#include "SymbolTable.h"
#include "Type.h"

#include <unordered_map>
#include <vector>

struct Field;
struct Method;

struct Class : public Symbol {
    Class(const Class&) = delete;

    Class(Position position, std::vector<String> uses, std::unordered_map<String, String> aliases,
            Annotations annotations, String name, const SymbolTable* parent, Type superclass)
    : INHERITED(position, Kind::CLASS, std::move(name))
    , fUses(std::move(uses))
    , fAliases(std::move(aliases))
    , fAnnotations(std::move(annotations))
    , fSymbolTable(parent, this)
    , fSuper(std::move(superclass))
    , fType(fPosition, Type::Category::CLASS, fName) {}

    std::unordered_map<String, String> fAliases;

    std::vector<String> fUses;

    Annotations fAnnotations;

    SymbolTable fSymbolTable;

    // fields defined in this class (not including inherited fields)
    std::vector<const Field*> fFields;

    // holds values assigned to fields. We have to store them in a centralized place (meaning, not
    // attached to the fields themselves) because they can be shared by multiple fields due to tuple
    // destructuring
    std::vector<IRNode> fFieldValues;

    // methods defined in this class (not including inherited methods)
    std::vector<const Method*> fMethods;

    Type fSuper;

    Type fType;

    // virtual method table (vtable)
    std::vector<const Method*> fVirtualMethods;

    typedef Symbol INHERITED;
};