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
    struct UsesDeclaration {
        Position fPosition;

        String fImport;

        // an empty alias means import the entire package
        String fAlias;
    };

    Class(const Class&) = delete;

    Class(Position position, std::vector<UsesDeclaration> uses, Annotations annotations,
            String name, const SymbolTable* parent, Type superclass)
    : INHERITED(position, Kind::CLASS, std::move(name))
    , fUses(std::move(uses))
    , fAnnotations(std::move(annotations))
    , fAliasTable(parent, this)
    , fSymbolTable(&fAliasTable, this)
    , fSuper(std::move(superclass))
    , fType(fPosition, Type::Category::CLASS, fName) {}

    std::vector<UsesDeclaration> fUses;

    Annotations fAnnotations;

    SymbolTable fAliasTable;

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