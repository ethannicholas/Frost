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

    struct GenericParameter : public Symbol {
        GenericParameter(Position position, String owner, String name, Type type)
        : INHERITED(position, Symbol::Kind::GENERIC_PARAMETER, name)
        , fOwner(std::move(owner))
        , fType(std::move(type)) {}

        String fOwner;

        Type fType;

        typedef Symbol INHERITED;
    };

    Class(const Class&) = delete;

    Class(Position position, std::vector<UsesDeclaration> uses, Annotations annotations,
            String name, std::vector<GenericParameter> parameters, const SymbolTable* parent,
            Type superclass)
    : INHERITED(position, Kind::CLASS, std::move(name))
    , fUses(std::move(uses))
    , fAnnotations(std::move(annotations))
    , fAliasTable(parent, this)
    , fSymbolTable(&fAliasTable, this)
    , fParameters(std::move(parameters))
    , fSuper(std::move(superclass))
    , fType(fPosition, Type::Category::CLASS, fName) {
        for (auto& p : fParameters) {
            fSymbolTable.addAlias(p.fName, &p);
        }
    }

    bool isValue() const {
        return fSuper.fName == "panda.core.Value";
    }

    std::vector<UsesDeclaration> fUses;

    Annotations fAnnotations;

    SymbolTable fAliasTable;

    SymbolTable fSymbolTable;

    std::vector<GenericParameter> fParameters;

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