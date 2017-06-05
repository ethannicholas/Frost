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
        BUILTIN_UINT,
        BUILTIN_FLOAT,
        METHOD,
        PACKAGE,
        CLASS,
        UNRESOLVED
    };

    Type()
    : INHERITED(Position(), Symbol::Kind::TYPE, "void")
    , fCategory(Category::VOID) {}

    Type(Position position, Category category, String name)
    : INHERITED(position, Kind::TYPE, std::move(name))
    , fCategory(category) {}

    Type(Position position, Category category, String name, int size)
    : INHERITED(position, Kind::TYPE, std::move(name))
    , fCategory(category)
    , fSize(size) {}

    bool isBuiltinInt() {
        return fCategory == Category::BUILTIN_INT  || fCategory == Category::BUILTIN_UINT;
    }

    bool isBuiltinNumber() {
        return isBuiltinInt() || fCategory == Category::BUILTIN_FLOAT ||
                fCategory == Category::INT_LITERAL;
    }

    bool operator==(const Type& other) const {
        return fCategory == other.fCategory && fName == other.fName && fSize == other.fSize;
    }

    bool operator!=(const Type& other) const {
        return !(*this == other);
    }

    static Type& IntLiteral() {
        static Type result = Type(Position(), Category::INT_LITERAL, "<integer>", 1);
        return result;
    }

    static Type& Int64() {
        static Type result = Type(Position(), Category::CLASS, "panda.core.Int64");
        return result;
    }

    static Type& BuiltinBit() {
        static Type result = Type(Position(), Category::BUILTIN_UINT, "builtin_bit", 1);
        return result;
    }

    static Type& Bit() {
        return BuiltinBit();
    }

    static Type& Void() {
        static Type result = Type();
        return result;
    }

    Category fCategory;
    // size in bits, for the builtin numbers
    int fSize = -1;

    typedef Symbol INHERITED;
};