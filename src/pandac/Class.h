#pragma once

#include "Alias.h"
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
    , fRawSuper(std::move(superclass))
    , fRawInterfaces(std::move(interfaces))
    , fType(fPosition, Type::Category::CLASS, fName) {
        for (const auto& u : fUses) {
            fAliasTable.add(u.fAlias, std::unique_ptr<Symbol>(new Alias(u.fPosition, u.fAlias,
                    u.fImport)));
        }
        for (auto& p : fParameters) {
            fSymbolTable.addAlias(p.fName, &p);
        }
    }

    String simpleName() {
        int idx = fName.find_last_of(".");
        if (idx == std::string::npos) {
            return fName;
        }
        return fName.substr(idx + 1);
    }

    bool isValue() const {
        return fRawSuper.fName == "panda.core.Value";
    }

    ClassKind fClassKind;

    std::vector<UsesDeclaration> fUses;

    Annotations fAnnotations;

    SymbolTable fAliasTable;

    SymbolTable fSymbolTable;

    std::vector<GenericParameter> fParameters;

    // fields defined in this class (not including inherited fields)
    std::vector<Field*> fFields;

    // holds values assigned to fields. We have to store them in a centralized place (meaning, not
    // attached to the fields themselves) because they can be shared by multiple fields due to tuple
    // destructuring
    std::vector<IRNode> fFieldValues;

    // methods defined in this class (not including inherited methods)
    std::vector<Method*> fMethods;

    // classes defined in this class
    std::vector<Class*> fInnerClasses;

    Type fRawSuper;

    std::vector<Type> fRawInterfaces;

    Type fType;

    // if true, this class was merely imported and should not be compiled
    bool fExternal = false;

private:
    // virtual method table (vtable)
    std::vector<const Method*> fVirtualMethods;

    friend class Compiler;

    typedef Symbol INHERITED;
};