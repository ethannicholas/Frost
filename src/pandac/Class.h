#pragma once

#include "Annotations.h"
#include "IRNode.h"
#include "SymbolTable.h"
#include "Type.h"

#include <unordered_map>
#include <vector>

class Compiler;
struct Field;
struct Method;

struct Class : public Symbol {
    enum class ClassKind {
        CLASS,
        INTERFACE
    };

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

    Class(Position position, ClassKind kind, std::vector<UsesDeclaration> uses,
            Annotations annotations, String name, std::vector<GenericParameter> parameters,
            SymbolTable* parent, Type superclass, std::vector<Type> interfaces)
    : INHERITED(position, Kind::CLASS, std::move(name))
    , fClassKind(kind)
    , fUses(std::move(uses))
    , fAnnotations(std::move(annotations))
    , fAliasTable(parent, this)
    , fSymbolTable(&fAliasTable, this)
    , fParameters(std::move(parameters))
    , fSuper(std::move(superclass))
    , fInterfaces(std::move(interfaces))
    , fType(fPosition, Type::Category::CLASS, fName) {
        for (auto& p : fParameters) {
            fSymbolTable.addAlias(p.fName, &p);
        }
    }

    bool isValue() const {
        return fSuper.fName == "panda.core.Value";
    }

    const Method* findMethod(const Method& m, Compiler& compiler) const;

    std::set<const Class*> allInterfaces(Compiler& compiler) const;

    std::vector<const Method*> interfaceMethods(const Class& intf, Compiler& compiler) const;

    ClassKind fClassKind;

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

    std::vector<Type> fInterfaces;

    Type fType;

    // virtual method table (vtable)
    std::vector<const Method*> fVirtualMethods;

    typedef Symbol INHERITED;
};