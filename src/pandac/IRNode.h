#pragma once

#include "Operator.h"
#include "Position.h"
#include "Type.h"
#include "Util.h"

#include <string.h>
#include <vector>

/**
 * A node in the IR (intermediate representation) of the code. IR is generated from the AST by the
 * Compiler class and then fed to the CodeGenerator.
 */
struct IRNode {
    enum class Kind {
        // a list of arguments to a method
        ARGUMENTS,
        // a cast, instanceof, or not instanceof expression
        ARROW,
        // an assert statement
        ASSERT,
        // a binary operation
        BINARY,
        // a literal bit (true or false)
        BIT,
        // a list of statements
        BLOCK,
        // a break statement
        BREAK,
        // a method call
        CALL,
        // a typecast
        CAST,
        // a constant declaration statement
        CONSTANT,
        // an object construction expression
        CONSTRUCT,
        // a continue statement
        CONTINUE,
        // a do loop
        DO,
        // a single declaration within a var, def, constant, or property (e.g. 'var x := 1, y' has
        // two declarations, 'x := 1' and 'y')
        DECLARATION,
        // a def declaration statement
        DEF,
        // a documentation comment
        DOC_COMMENT,
        // an invalid IR node
        ERROR,
        // reference to a field of an object
        FIELD_REFERENCE,
        // an if statement
        IF,
        // a literal integer
        INT,
        // a negated equality check against null
        IS_NONNULL,
        // an equality check against null
        IS_NULL,
        // a 'loop' loop
        LOOP,
        // a reference to a method, such as 'String.convert'
        METHOD_REFERENCE,
        // a negative literal integer (where fValue.fInt is the absolute value)
        NEGATED_INT,
        // the 'null' keyword
        NULL_LITERAL,
        // the name of a package
        PACKAGE_REFERENCE,
        // formal parameter of a method
        PARAMETER,
        // list of method parameters
        PARAMETERS,
        // a prefix expression (-x, !x, !!x)
        PREFIX,
        // a property declaration statement
        PROPERTY,
        // a for loop over a range
        RANGE_FOR,
        // a return statement
        RETURN,
        // wraps an expression to indicate that it is reused elsewhere in the tree without
        // reevaluation
        REUSED_VALUE_DEFINITION,
        // marks the position where a REUSED_VALUE_DEFINITION is referenced again. This node is
        // empty but has the same int value as a previously-evaluated REUSED_VALUE_DEFINITION.
        REUSED_VALUE,
        // the 'self' keyword
        SELF,
        // a string literal
        STRING,
        // the 'super' keyword
        SUPER,
        // represents a tuple target in a declaration statement, such as in 'var (x, y) := tuple'
        TUPLE_TARGET,
        // literal reference to a Type
        TYPE_REFERENCE,
        // an ambiguous binary operation which could refer to multiple methods
        UNRESOLVED_BINARY,
        // an ambiguous method reference which could refer to multiple methods
        UNRESOLVED_CALL,
        // an identifier which does not correspond to a known symbol
        UNRESOLVED_IDENTIFIER,
        // a reference to a var, def, constant, or property
        UNRESOLVED_METHOD_REFERENCE,
        // an ambiguous method call, where the return type is needed to disambiguate it
        UNRESOLVED_INDEX,
        // a '..' or '...' expression prior to determining its final type
        UNRESOLVED_RANGE,
        // an index (x[y]) expression before we've determined whether or not it's an assignment
        VARIABLE_REFERENCE,
        // a var declaration statement
        VAR,
        // a placeholder representing the absence of a node
        VOID,
        // a while loop
        WHILE
    };

    IRNode(const IRNode&) = delete;
    IRNode& operator=(const IRNode& src) = delete;
    IRNode(IRNode&&) = default;
    IRNode& operator=(IRNode&& src) = default;

    IRNode()
    : fKind(Kind::ERROR) {}

    IRNode(Position position, Kind kind)
    : fPosition(position)
    , fKind(kind) {
        this->init();
    }

    IRNode(Position position, Kind kind, Type type)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        this->init();
    }

    IRNode(Position position, Kind kind, String text)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text)) {
        this->init();
    }


    IRNode(Position position, Kind kind, Type type, uint64_t value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fInt = value;
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, double value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fFloat = value;
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, bool value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fBool = value;
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, String text)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fText(std::move(text)) {
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, const void* value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fPtr = value;
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, const void* value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fPtr = value;
        this->init();
    }

    IRNode(Position position, Kind kind, uint64_t value)
    : fPosition(position)
    , fKind(kind) {
        fValue.fInt = value;
        this->init();
    }

    IRNode(Position position, Kind kind, void* ptr)
    : fPosition(position)
    , fKind(kind) {
        fValue.fPtr = ptr;
        this->init();
    }

    IRNode(Position position, Kind kind, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fChildren(std::move(children)) {
        this->init();
    }

    IRNode(Position position, Kind kind, String text, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text))
    , fChildren(std::move(children)) {
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, uint64_t value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fInt = value;
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, bool value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fBool = value;
        this->init();
    }

    IRNode(Position position, Kind kind, Type type, void* ptr, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fPtr = ptr;
        this->init();
    }

    void init() {
        ASSERT(fKind != Kind::CAST || fType != fChildren[0].fType);
        ASSERT(fKind != Kind::CAST || fChildren[0].fType.fCategory != Type::Category::UNRESOLVED);
        ASSERT(fKind != Kind::CAST || fChildren[0].fType.fCategory != Type::Category::INT_LITERAL);
        ASSERT(fKind != Kind::CAST || fChildren[0].fType.fCategory != Type::Category::NULL_LITERAL);
        ASSERT(fKind != Kind::FIELD_REFERENCE || fChildren.size() == 1);
        ASSERT(fKind != Kind::UNRESOLVED_METHOD_REFERENCE || fChildren.size() >= 2);
    }

    // copying IRNodes can be very expensive and is incredibly easy to do by accident, so we kill
    // the default copy constructor and make it an explicit method call
    IRNode copy() const {
        std::vector<IRNode> children;
        for (const auto& child : fChildren) {
            children.push_back(child.copy());
        }
        IRNode result(fPosition, fKind, fType, std::move(children));
        memcpy(&result.fValue, &fValue, sizeof(fValue));
        return result;
    }

    String description() const {
        String result;
        bool b = false;
        bool i = false;
        bool o = false;
        bool p = false;
        switch (fKind) {
            case Kind::ARGUMENTS:                   result += "Arguments";                    break;
            case Kind::ARROW:                       result += "Arrow";                        break;
            case Kind::ASSERT:                      result += "Assert";                       break;
            case Kind::BINARY:                      result += "Binary"; o = 1;                break;
            case Kind::BIT:                         result += "Bit"; b = 1;                   break;
            case Kind::BLOCK:                       result += "Block";                        break;
            case Kind::BREAK:                       result += "Break";                        break;
            case Kind::CALL:                        result += "Call";                         break;
            case Kind::CAST:                        result += "Cast";                         break;
            case Kind::CONSTANT:                    result += "Constant";                     break;
            case Kind::CONSTRUCT:                   result += "Construct";                    break;
            case Kind::CONTINUE:                    result += "Continue";                     break;
            case Kind::DECLARATION:                 result += "Declaration";                  break;
            case Kind::DEF:                         result += "Def";                          break;
            case Kind::DO:                          result += "Do";                           break;
            case Kind::DOC_COMMENT:                 result += "DocComment";                   break;
            case Kind::ERROR:                       result += "<error>";                      break;
            case Kind::FIELD_REFERENCE:             result += "FieldReference";               break;
            case Kind::IF:                          result += "If";                           break;
            case Kind::INT:                         result += "Int"; i = 1;                   break;
            case Kind::IS_NONNULL:                  result += "IsNonNull";                    break;
            case Kind::IS_NULL:                     result += "IsNull";                       break;
            case Kind::LOOP:                        result += "Loop";                         break;
            case Kind::METHOD_REFERENCE:            result += "MethodReference"; p = 1;       break;
            case Kind::NEGATED_INT:                 result += "NegatedInt"; i = 1;            break;
            case Kind::NULL_LITERAL:                result += "Null";                         break;
            case Kind::PACKAGE_REFERENCE:           result += "PackageReference"; p = 1;      break;
            case Kind::PARAMETER:                   result += "Parameter";                    break;
            case Kind::PARAMETERS:                  result += "Parameters";                   break;
            case Kind::PREFIX:                      result += "Prefix"; o = 1;                break;
            case Kind::PROPERTY:                    result += "Property";                     break;
            case Kind::RANGE_FOR:                   result += "RangeFor";                     break;
            case Kind::RETURN:                      result += "Return";                       break;
            case Kind::REUSED_VALUE:                result += "ReusedValue"; i = 1;           break;
            case Kind::REUSED_VALUE_DEFINITION:     result += "ReusedValueDefinition"; i = 1; break;
            case Kind::SELF:                        result += "Self";                         break;
            case Kind::STRING:                      result += "String";                       break;
            case Kind::SUPER:                       result += "Super";                        break;
            case Kind::TUPLE_TARGET:                result += "TupleTarget";                  break;
            case Kind::TYPE_REFERENCE:              result += "TypeReference"; p = 1;         break;
            case Kind::UNRESOLVED_BINARY:           result += "UnresolvedBinary";             break;
            case Kind::UNRESOLVED_CALL:             result += "UnresolvedCall";               break;
            case Kind::UNRESOLVED_IDENTIFIER:       result += "UnresolvedIdentifier";         break;
            case Kind::UNRESOLVED_INDEX:            result += "UnresolvedIndex";              break;
            case Kind::UNRESOLVED_METHOD_REFERENCE: result += "UnresolvedMethodReference";    break;
            case Kind::UNRESOLVED_RANGE:            result += "UnresolvedRange";              break;
            case Kind::VAR:                         result += "Var";                          break;
            case Kind::VARIABLE_REFERENCE:          result += "VariableReference"; p = true;  break;
            case Kind::VOID:                        result += "Void";                         break;
            case Kind::WHILE:                       result += "While";                        break;
        }
        if (fType.fCategory != Type::Category::VOID) {
            result += ":" + fType.description();
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
        const void* fPtr;
    } fValue;
    
    std::vector<IRNode> fChildren;
};