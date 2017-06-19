#pragma once

#include "Symbol.h"
#include "Util.h"

#include <map>
#include <set>
#include <vector>

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
        // a simple class name
        CLASS,
        // a class name with generic parameters, e.g. List<Int>. fSubtypes[0] is the base class, and
        // the remaining subtypes are the generic parameters.
        GENERIC,
        // a generic parameter type. In the class List<T>, T is a parameter type. fSubtypes[0] is
        // the parameter's bound.
        PARAMETER,
        UNRESOLVED
    };

    Type()
    : INHERITED(Position(), Symbol::Kind::TYPE, "void")
    , fCategory(Category::VOID) {}

    Type(Position position, Category category, String name)
    : INHERITED(position, Kind::TYPE, std::move(name))
    , fCategory(category) {}

    static String generic_type_name(std::vector<Type>& types) {
        String result = types[0].fName;
        const char* separator = "<";
        for (int i = 1; i < types.size(); ++i) {
            result += separator;
            result += types[i].fName;
            separator = ", ";
        }
        result += ">";
        return result;
    }

    static String unresolved_type_name(std::set<Type>& types) {
        String result = "unresolved<";
        const char* separator = "";
        for (const Type& t : types) {
            result += separator;
            result += t.fName;
            separator = " | ";
        }
        result += ">";
        return result;
    }

    Type(std::vector<Type> types)
    : INHERITED(types[0].fPosition, Kind::TYPE, generic_type_name(types))
    , fCategory(Category::GENERIC)
    , fSubtypes(std::move(types)) {}

    Type(Position p, std::set<Type> types)
    : INHERITED(p, Kind::TYPE, unresolved_type_name(types))
    , fCategory(Category::UNRESOLVED)
    , fSubtypes(types.begin(), types.end()) {}

    Type(Position position, Category category, String name, int size)
    : INHERITED(position, Kind::TYPE, std::move(name))
    , fCategory(category)
    , fSize(size) {}

    Type(Position position, Category category, String name, std::vector<Type> types)
    : INHERITED(position, Kind::TYPE, std::move(name))
    , fCategory(category)
    , fSubtypes(std::move(types)) {}

    bool isBuiltinInt() const {
        return fCategory == Category::BUILTIN_INT  || fCategory == Category::BUILTIN_UINT;
    }

    bool isBuiltinNumber() const {
        return isBuiltinInt() || fCategory == Category::BUILTIN_FLOAT ||
                fCategory == Category::INT_LITERAL;
    }

    bool isClass() const {
        return fCategory == Category::CLASS || fCategory == Category::GENERIC;
    }

    bool operator==(const Type& other) const {
        return fName == other.fName;
    }

    bool operator!=(const Type& other) const {
        return !(*this == other);
    }

    bool operator<(const Type& other) const {
        return fName < other.fName;
    }

    bool operator<=(const Type& other) const {
        return fName <= other.fName;
    }

    bool operator>(const Type& other) const {
        return fName > other.fName;
    }

    bool operator>=(const Type& other) const {
        return fName >= other.fName;
    }

    String description() const {
        ASSERT(fCategory != Category::GENERIC || fSubtypes.size() >= 2);
        return fName;
    }

    Type remap(const std::map<String, Type>& types) const {
        if (!types.size()) {
            return *this;
        }
        switch (fCategory) {
            case Category::PARAMETER: {
                auto found = types.find(fName);
                if (found != types.end()) {
                    return found->second;
                }
                return *this;
            }
            case Category::GENERIC: {
                std::vector<Type> subtypes;
                for (const auto& t : fSubtypes) {
                    subtypes.push_back(t.remap(types));
                }
                return Type(std::move(subtypes));
            }
            default: return *this;
        }
    }

    static Type& Object() {
        static Type result = Type(Position(), Category::CLASS, "panda.core.Object");
        return result;
    }

    static Type& Class() {
        static Type result = Type(Position(), Category::CLASS, "panda.core.Class");
        return result;
    }

    static Type& Any() {
        return Object();
    }

    static Type& IntLiteral() {
        static Type result = Type(Position(), Category::INT_LITERAL, "<integer literal>", 1);
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
        static Type result = Type(Position(), Category::CLASS, "panda.core.Bit");
        return result;
    }

    static Type& PandaString() {
        static Type result = Type(Position(), Category::CLASS, "panda.core.String");
        return result;
    }

    static Type& Char8() {
        static Type result = Type(Position(), Category::CLASS, "panda.core.Char8");
        return result;
    }

    static Type& Void() {
        static Type result = Type();
        return result;
    }

    Category fCategory;
    // size in bits, for the builtin numbers
    int fSize = -1;
    // for a generic type, subtype 0 = base and all others = argumentss
    std::vector<Type> fSubtypes;

    typedef Symbol INHERITED;
};