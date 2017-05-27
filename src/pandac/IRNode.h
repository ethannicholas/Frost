#pragma once

#include "Operator.h"
#include "ParserUtil.h"
#include "Position.h"
#include "Type.h"

#include <vector>

struct IRNode {
    enum class Kind {
        ARGUMENTS,
        BINARY,
        BIT,
        BLOCK,
        CALL,
        CLASS_REFERENCE,
        CONSTANT,
        DECLARATION,
        DEF,
        ERROR,
        EXPRESSION,
        FILE,
        IF,
        INT,
        METHOD,
        METHOD_REFERENCE,
        PACKAGE_REFERENCE,
        PARAMETER,
        PARAMETERS,
        PREFIX,
        PROPERTY,
        RETURN,
        TUPLE_TARGET,
        TYPE,
        TYPE_REFERENCE,
        UNRESOLVED_METHOD_REFERENCE,
        UNRESOLVED_CALL,
        VARIABLE_REFERENCE,
        VAR,
        VOID
    };

    IRNode(const IRNode&) = delete;
    IRNode(IRNode&&) = default;
    IRNode& operator=(IRNode&& src) = default;

    IRNode()
    : fKind(Kind::ERROR) {}

    IRNode(Position position, Kind kind)
    : fPosition(position)
    , fKind(kind) {}

    IRNode(Position position, Kind kind, String text)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text)) {}


    IRNode(Position position, Kind kind, Type type, uint64_t value)
    : fPosition(position)
    , fKind(kind)
    , fType(type) {
        fValue.fInt = value;
    }

    IRNode(Position position, Kind kind, Type type, uint64_t value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(type)
    , fChildren(std::move(children)) {
        fValue.fInt = value;
    }

    IRNode(Position position, Kind kind, Type type, double value)
    : fPosition(position)
    , fKind(kind)
    , fType(type) {
        fValue.fFloat = value;
    }

    IRNode(Position position, Kind kind, Type type, bool value)
    : fPosition(position)
    , fKind(kind)
    , fType(type) {
        fValue.fBool = value;
    }

    IRNode(Position position, Kind kind, Type type, void* value)
    : fPosition(position)
    , fKind(kind)
    , fType(type) {
        fValue.fPtr = value;
    }

    IRNode(Position position, Kind kind, void* ptr)
    : fPosition(position)
    , fKind(kind) {
        fValue.fPtr = ptr;
    }

    IRNode(Position position, Kind kind, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fChildren(std::move(children)) {}

    IRNode(Position position, Kind kind, String text, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text))
    , fChildren(std::move(children)) {}

    IRNode(Position position, Kind kind, Type type, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {}

    IRNode(Position position, Kind kind, Type type, int value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fInt = value;
    }

    String description() const {
        String result;
        bool b = false;
        bool i = false;
        bool o = false;
        bool p = false;
        switch (fKind) {
            case Kind::ARGUMENTS:                   result += "Arguments";                   break;
            case Kind::BINARY:                      result += "Binary"; o = 1;               break;
            case Kind::BIT:                         result += "Bit"; b = 1;                  break;
            case Kind::BLOCK:                       result += "Block";                       break;
            case Kind::CALL:                        result += "Call";                        break;
            case Kind::CLASS_REFERENCE:             result += "ClassReference";              break;
            case Kind::CONSTANT:                    result += "Constant";                    break;
            case Kind::DECLARATION:                 result += "Declaration";                 break;
            case Kind::DEF:                         result += "Def";                         break;
            case Kind::ERROR:                       result += "<error>";                     break;
            case Kind::EXPRESSION:                  result += "Expression";                  break;
            case Kind::FILE:                        result += "File";                        break;
            case Kind::IF:                          result += "If";                          break;
            case Kind::INT:                         result += "Int"; i = 1;                  break;
            case Kind::METHOD:                      result += "Method";                      break;
            case Kind::METHOD_REFERENCE:            result += "MethodReference"; p = 1;      break;
            case Kind::PACKAGE_REFERENCE:           result += "PackageReference"; p = 1;     break;
            case Kind::PARAMETER:                   result += "Parameter";                   break;
            case Kind::PARAMETERS:                  result += "Parameters";                  break;
            case Kind::PREFIX:                      result += "Prefix"; o = 1;               break;
            case Kind::PROPERTY:                    result += "Property";                    break;
            case Kind::RETURN:                      result += "Return";                      break;
            case Kind::TUPLE_TARGET:                result += "TupleTarget";                 break;
            case Kind::TYPE:                        result += "Type";                        break;
            case Kind::TYPE_REFERENCE:              result += "TypeReference"; p = 1;        break;
            case Kind::UNRESOLVED_METHOD_REFERENCE: result += "UnresolvedMethodReference";   break;
            case Kind::UNRESOLVED_CALL:             result += "UnresolvedCall";              break;
            case Kind::VAR:                         result += "Var";                         break;
            case Kind::VOID:                        result += "Void";                        break;
            case Kind::VARIABLE_REFERENCE:          result += "VariableReference"; p = true; break;
        }
        if (fType.fCategory != Type::Category::VOID) {
            result += ":" + fType.fName;
        }
        result += "(";
        const char* separator = "";
        if (b) {
            result += separator;
            result += (fValue.fBool ? "true" : "false");
            separator = ", ";
        }
        if (i) {
            result += separator;
            result += std::to_string(fValue.fInt);
            separator = ", ";
        }
        if (o) {
            result += separator;
            result += String("\"") + operator_text((Operator) fValue.fInt) + '"';
            separator = ", ";
        }
        if (p) {
            result += separator;
            char buffer[32];
            snprintf(buffer, sizeof(buffer), "%p", fValue.fPtr);
            result += buffer;
            separator = ", ";
        }
        if (fText.size()) {
            result += separator;
            result += '"' + fText + '"';
            separator = ", ";
        }
        if (fChildren.size()) {
            result += separator;
            result += "{ ";
            separator = "";
            for (const auto& c : fChildren) {
                result += separator;
                result += c.description();
                separator = ", ";
            }
            result += " }";
        }
        result += ")";
        return result;
    }

    Position fPosition;

    Kind fKind;

    // interpretation of this string depends upon the kind of node it is
    String fText;

    Type fType;
    
    // used only by certain kinds of nodes
    union {
        uint64_t fInt;
        double fFloat;
        bool fBool;
        void* fPtr;
    } fValue;
    
    std::vector<IRNode> fChildren;
};