#pragma once

#include "Symbol.h"
#include "Util.h"

#include <cstring>
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
        // the type of the null literal. This is not the same as Any(), because e.g. the union of
        // Int and Object? is Object?, whereas the union of Int and null is Int?.
        NULL_LITERAL,
        BUILTIN_INT,
        BUILTIN_UINT,
        BUILTIN_FLOAT,
        PACKAGE,
        // a simple class name
        CLASS,
        // a class name with generic parameters, e.g. List<Int>. fSubtypes[0] is the base class, and
        // the remaining subtypes are the generic parameters.
        GENERIC,
        // a nullable version of fSubtypes[0]
        NULLABLE,
        // a generic parameter type. In the class List<T>, T is a parameter type. fSubtypes[0] is
        // the parameter's bound.
        PARAMETER,
        // argument types followed by return type. 'self' is the first parameter, if applicable.
        METHOD,
        // argument types followed by return type. 'self' is the first parameter, if applicable.
        FUNCTION,
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
            separator = "|";
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

    Type nullable() const {
        std::vector<Type> children;
        children.push_back(*this);
        return Type(fPosition, Category::NULLABLE, fName + "?", std::move(children));
    }

    bool isBuiltinInt() const {
        return fCategory == Category::BUILTIN_INT  || fCategory == Category::BUILTIN_UINT;
    }

    bool isBuiltinNumber() const {
        return isBuiltinInt() || fCategory == Category::BUILTIN_FLOAT ||
                fCategory == Category::INT_LITERAL;
    }

    bool isNumber() const {
        return !strncmp(fName.c_str(), "panda.core.Int", strlen("panda.core.Int")) ||
                !strncmp(fName.c_str(), "panda.core.UInt", strlen("panda.core.UInt"));
    }

    bool isNumeric() const {
        return isNumber() ||
                !strncmp(fName.c_str(), "panda.core.Char", strlen("panda.core.Char"));
    }

    bool isClass() const {
        return fCategory == Category::CLASS || fCategory == Category::GENERIC ||
                fCategory == Category::NULLABLE || fCategory == Category::PARAMETER;
    }

    bool isMethod() const {
        return fCategory == Category::METHOD || fCategory == Category::FUNCTION;
    }

    bool isPointer() const {
        return fCategory == Category::GENERIC && fSubtypes[0].fName == "panda.core.Pointer";
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

    // returns the narrowest type that can hold an instance of either type
    Type typeUnion(const Type& other) const {
        if (*this == other) {
            return *this;
        }
        if (*this == Type::Null()) {
            if (other.fCategory == Type::Category::NULLABLE) {
                return other;
            }
            return other.nullable();
        }
        if (other == Type::Null()) {
            if (fCategory == Type::Category::NULLABLE) {
                return *this;
            }
            return this->nullable();
        }
        if (*this == IntLiteral() && other.isNumber()) {
            return other;
        }
        if (isNumber() && other == IntLiteral()) {
            return *this;
        }
        printf("union of %s and %s\n", fName.c_str(), other.fName.c_str());
        abort();
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
            case Category::NULLABLE:
                return fSubtypes[0].remap(types).nullable();
            case Category::METHOD: // fall through
            case Category::FUNCTION: {
                std::vector<Type> subtypes;
                String name = "(";
                const char* separator = "";
                ASSERT(fSubtypes.size() >= 1);
                for (size_t i = 0; i < fSubtypes.size() - 1; ++i) {
                    Type remapped = fSubtypes[i].remap(types);
                    name += separator;
                    name += remapped.fName;
                    subtypes.push_back(std::move(remapped));
                    separator = ", ";
                }
                if (fCategory == Category::FUNCTION) {
                    name += ")=>(";
                }
                else {
                    name += ")=&>(";
                }
                if (fSubtypes.back() != Type::Void()) {
                    Type remapped = fSubtypes.back().remap(types);
                    name += remapped.fName;
                    subtypes.push_back(std::move(remapped));
                }
                else {
                    subtypes.push_back(Type::Void());
                }
                name += ")";
                return Type(fPosition, fCategory, name, std::move(subtypes));
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

    static Type& Value() {
        static Type result = Type(Position(), Category::CLASS, "panda.core.Value");
        return result;
    }

    static Type& IntLiteral() {
        static Type result = Type(Position(), Category::INT_LITERAL, "<integer>", 1);
        return result;
    }

    static Type& Null() {
        static Type result = Type(Position(), Category::NULL_LITERAL, "<null>", 1);
        return result;
    }

    static Type& Int() {
        return Int64();
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

    static Type& Iterator() {
        static Type result = Type(Position(), Category::CLASS, "panda.collections.Iterator");
        return result;
    }

    static Type& Console() {
        static Type result = Type(Position(), Category::CLASS, "panda.io.Console");
        return result;
    }

    static Type& Void() {
        static Type result = Type();
        return result;
    }

    static Type ArrayOf(const Type& t) {
        std::vector<Type> children;
        children.emplace_back(Position(), Category::CLASS, "panda.collections.Array");
        children.push_back(t);
        return Type(std::move(children));
    }

    static Type RangeOf(const Type& t) {
        std::vector<Type> children;
        children.emplace_back(Position(), Category::CLASS, "panda.core.Range");
        children.push_back(t);
        return Type(std::move(children));
    }

    Category fCategory;
    // size in bits, for the builtin numbers
    int fSize = -1;
    // for a generic type, subtype 0 = base and all others = argumentss
    std::vector<Type> fSubtypes;

    typedef Symbol INHERITED;
};