#pragma once

#include "Annotations.h"
#include "ASTNode.h"
#include "MethodRef.h"
#include "Symbol.h"
#include "Type.h"

#include <memory>

struct Class;
class Compiler;

struct Method : public Symbol {
    enum class Kind {
        METHOD,
        FUNCTION,
        INIT
    };

    struct Parameter {
        String fName;
        Type fType;
    };

    Method(const Method&) = delete;

    Method(Position position, Class* owner, Annotations annotations, Kind kind, String name,
            std::vector<Parameter> parameters, Type returnType, ASTNode body)
    : INHERITED(position, Symbol::Kind::METHOD, std::move(name))
    , fOwner(*owner)
    , fAnnotations(annotations)
    , fMethodKind(kind)
    , fParameters(std::move(parameters))
    , fReturnType(std::move(returnType))
    , fBody(std::move(body)) {
        ASSERT(owner);
    }

    bool matches(const Method& other) const;

    /**
     * Returns the type the method was declared with (its actual type signature in the source code).
     *
     * Given:
     *
     *    class Super<T> { method foo(x:T) { } }
     *    class Sub : Super<String> { @override method foo(x:String) { } }
     *
     * The declaredType of Sub.foo is (String)=>().
     */
    Type declaredType() const;

    /**
     * Returns the actual type of the method, taking inheritance into account.
     *
     * Given:
     *
     *    class Super<T> { method foo(x:T) { } }
     *    class Sub : Super<String> { @override method foo(x:String) { } }
     *
     * The inheritedType of Sub.foo is (Super.T)=>().
     */
    Type inheritedType(Compiler& compiler);

    /**
     * As inheritedType(), but includes explicitly includes self as the first parameter.
     */
    Type inheritedTypeWithSelf(Compiler& compiler);

    String signature() const;

    String description() const {
        return this->signature() + " (" + fPosition.description() + ")";
    }

    Class& fOwner;
    Annotations fAnnotations;
    Kind fMethodKind;
    std::vector<Parameter> fParameters;
    Type fReturnType;
    ASTNode fBody;
    bool fTypesResolved = false;
    mutable std::vector<std::unique_ptr<const MethodRef>> fMethodRefs;

private:
    Type declaredTypeWithSelf(Type self) const;

    Type inheritedTypeWithSelf(Compiler& compiler, Type self);

    typedef Symbol INHERITED;
};