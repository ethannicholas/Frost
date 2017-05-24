#pragma once

#include "Symbol.h"
#include "Util.h"

struct Type : public Symbol {
    enum class Category {
        // no type
        VOID,
        // a raw number, before a specific type has been chosen for it. Will coerce to any size Int
        // or builtin_int which can hold it.
        INT_LITERAL,
        BUILTIN_INT,
        METHOD,
        TYPE
    };

    Type()
    : INHERITED(Symbol::Kind::TYPE, "void")
    , fCategory(Category::VOID) {}

    Type(Category category, String name)
    : INHERITED(Kind::TYPE, std::move(name))
    , fCategory(category) {}

    Type(Category category, String name, int size)
    : INHERITED(Kind::TYPE, std::move(name))
    , fCategory(category)
    , fSize(size) {}

    bool operator==(const Type& other) const {
        return fCategory == other.fCategory && fName == other.fName && fSize == other.fSize;
    }

    bool operator!=(const Type& other) const {
        return !(*this == other);
    }

    static Type& IntLiteral() {
        static Type result = Type(Category::INT_LITERAL, "$intLiteral", 1);
        return result;
    }

    static Type& BuiltinBit() {
        static Type result = Type(Category::BUILTIN_INT, "builtin_bit", 1);
        return result;
    }

    static Type& Bit() {
        return BuiltinBit();
    }

    static Type& Void() {
        static Type result = Type(Category::VOID, "$void");
        return result;
    }

    Category fCategory;
    // size in bits, for the builtin numbers
    int fSize = -1;

    typedef Symbol INHERITED;
};