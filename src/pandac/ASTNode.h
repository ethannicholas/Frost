#pragma once

#include "Operator.h"
#include "Position.h"
#include "Util.h"

#include <vector>

/**
 * A node in the parse tree.
 */
struct ASTNode {
    // see panda.grammar to see which constructs result in which kinds of nodes
    enum class Kind {
        ANNOTATION,
        ANNOTATIONS,
        ARRAY,
        AS,
        ASSERT,
        ASSIGNMENT_TUPLE,
        AT_RETURN,
        BINARY,
        BLOCK,
        BODY_ENTRIES,
        BIT,
        BREAK,
        CALL,
        CHOICE,
        CHOICES,
        CHOICE_VALUE,
        CLASS,
        CLASS_LITERAL,
        CLASS_MEMBERS,
        CLASS_TYPE,
        CONSTANT,
        CONTINUE,
        DECLARATION,
        DEF,
        DEFAULT,
        DO,
        DOCCOMMENT,
        DOT,
        EXPRESSIONS,
        FIELD,
        FLOAT,
        FOR,
        FORMAT_EXPRESSION,
        FORMAT_FIELD,
        FUNCTION,
        FUNCTION_TYPE,
        FUNCTION_VALUE,
        GENERICS,
        GENERICS_DECLARATIONS,
        IDENTIFIER,
        IF,
        IMMUTABLE_FUNCTION_TYPE,
        IMMUTABLE_METHOD_TYPE,
        INDEX,
        INIT,
        INSTANCE,
        INT,
        INTERFACE,
        LAMBDA,
        LAMBDA_PARAMETERS,
        LOOP,
        MATCH,
        METHOD,
        METHOD_TYPE,
        METHOD_VALUE,
        NESTED,
        NULL_LITERAL,
        PACKAGE,
        PARAMETER,
        PARAMETERS,
        POSTFIX,
        PRE,
        PREFIX,
        PROPERTY,
        RANGE_EXCLUSIVE,
        RANGE_INCLUSIVE,
        REGEX,
        RETURN,
        SELF,
        STATEMENTS,
        STRING,
        SUPER,
        TUPLE,
        TUPLE_TARGET,
        TUPLE_TYPE,
        TYPE,
        TYPES,
        UNREACHABLE,
        USES,
        VAR,
        VARS,
        VOID,
        WHEN,
        WHENS,
        WHILE
    };

    ASTNode()
    : fKind(Kind::VOID) {}

    ASTNode(Position position, Kind kind)
    : fPosition(position)
    , fKind(kind) {}

    ASTNode(Position position, Kind kind, String text)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text)) {}

    ASTNode(Position position, Kind kind, uint64_t value)
    : fPosition(position)
    , fKind(kind) {
        fValue.fInt = value;
    }

    ASTNode(Position position, Kind kind, Operator value)
    : fPosition(position)
    , fKind(kind) {
        fValue.fInt = (int) value;
    }

    ASTNode(Position position, Kind kind, double value)
    : fPosition(position)
    , fKind(kind) {
        fValue.fFloat = value;
    }

    ASTNode(Position position, Kind kind, bool value)
    : fPosition(position)
    , fKind(kind) {
        fValue.fBool = value;
    }

    ASTNode(Position position, Kind kind, std::vector<ASTNode> children)
    : fPosition(position)
    , fKind(kind)
    , fChildren(std::move(children)) {}

    ASTNode(Position position, Kind kind, int value, std::vector<ASTNode> children)
    : fPosition(position)
    , fKind(kind)
    , fChildren(std::move(children)) {
        fValue.fInt = value;
    }

    ASTNode(Position position, Kind kind, Operator value, std::vector<ASTNode> children)
    : fPosition(position)
    , fKind(kind)
    , fChildren(std::move(children)) {
        fValue.fInt = (int) value;
    }

    ASTNode(Position position, Kind kind, String text, std::vector<ASTNode> children)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text))
    , fChildren(std::move(children)) {}

    ASTNode(const ASTNode&) = delete;
    ASTNode(ASTNode&&) = default;
    ASTNode& operator=(ASTNode&& src) = default;

    String description() const {
        String result;
        bool b = false;
        bool i = false;
        bool o = false;
        switch (fKind) {
            case Kind::ANNOTATION:              result += "Annotation";            break;
            case Kind::ANNOTATIONS:             result += "Annotations";           break;
            case Kind::ARRAY:                   result += "Array";                 break;
            case Kind::AS:                      result += "As";                    break;
            case Kind::ASSERT:                  result += "Assert";                break;
            case Kind::ASSIGNMENT_TUPLE:        result += "AssignmentTuple";       break;
            case Kind::AT_RETURN:               result += "AtReturn";              break;
            case Kind::BINARY:                  result += "Binary"; o = true;      break;
            case Kind::BLOCK:                   result += "Block";                 break;
            case Kind::BODY_ENTRIES:            result += "BodyEntries";           break;
            case Kind::BIT:                     result += "Bit"; b = true;         break;
            case Kind::BREAK:                   result += "Break";                 break;
            case Kind::CALL:                    result += "Call";                  break;
            case Kind::CHOICE:                  result += "Choice";                break;
            case Kind::CHOICES:                 result += "Choices";               break;
            case Kind::CHOICE_VALUE:            result += "ChoiceValue";           break;
            case Kind::CLASS:                   result += "Class";                 break;
            case Kind::CLASS_LITERAL:           result += "ClassLiteral";          break;
            case Kind::CLASS_MEMBERS:           result += "ClassMembers";          break;
            case Kind::CLASS_TYPE:              result += "ClassType";             break;
            case Kind::CONSTANT:                result += "Constant";              break;
            case Kind::CONTINUE:                result += "Continue";              break;
            case Kind::DECLARATION:             result += "Declaration";           break;
            case Kind::DEF:                     result += "Def";                   break;
            case Kind::DEFAULT:                 result += "Default";               break;
            case Kind::DO:                      result += "Do";                    break;
            case Kind::DOCCOMMENT:              result += "Doccomment";            break;
            case Kind::DOT:                     result += "Dot";                   break;
            case Kind::EXPRESSIONS:             result += "Expressions";           break;
            case Kind::FIELD:                   result += "Field";                 break;
            case Kind::FLOAT:                   result += "Float";                 break;
            case Kind::FOR:                     result += "For";                   break;
            case Kind::FORMAT_EXPRESSION:       result += "FormatExpression";      break;
            case Kind::FORMAT_FIELD:            result += "FormatField";           break;
            case Kind::FUNCTION:                result += "Function";              break;
            case Kind::FUNCTION_TYPE:           result += "FunctionType";          break;
            case Kind::FUNCTION_VALUE:          result += "FunctionValue";         break;
            case Kind::GENERICS:                result += "Generics";              break;
            case Kind::GENERICS_DECLARATIONS:   result += "GenericsDeclarations";  break;
            case Kind::IDENTIFIER:              result += "Identifier";            break;
            case Kind::IF:                      result += "If";                    break;
            case Kind::IMMUTABLE_FUNCTION_TYPE: result += "ImmutableFunctionType"; break;
            case Kind::IMMUTABLE_METHOD_TYPE:   result += "ImmutableMethodType";   break;
            case Kind::INDEX:                   result += "Index";                 break;
            case Kind::INIT:                    result += "Init";                  break;
            case Kind::INSTANCE:                result += "Instance";              break;
            case Kind::INT:                     result += "Int"; i = true;         break;
            case Kind::INTERFACE:               result += "Interface";             break;
            case Kind::LAMBDA:                  result += "Lambda";                break;
            case Kind::LAMBDA_PARAMETERS:       result += "LambdaParameters";      break;
            case Kind::LOOP:                    result += "Loop";                  break;
            case Kind::MATCH:                   result += "Match";                 break;
            case Kind::METHOD:                  result += "Method";                break;
            case Kind::METHOD_TYPE:             result += "MethodType";            break;
            case Kind::METHOD_VALUE:            result += "MethodValue";           break;
            case Kind::NESTED:                  result += "Nested";                break;
            case Kind::NULL_LITERAL:            result += "Null";                  break;
            case Kind::PACKAGE:                 result += "Package";               break;
            case Kind::PARAMETER:               result += "Parameter";             break;
            case Kind::PARAMETERS:              result += "Parameters";            break;
            case Kind::POSTFIX:                 result += "Postfix";               break;
            case Kind::PRE:                     result += "Pre";                   break;
            case Kind::PREFIX:                  result += "Prefix";                break;
            case Kind::PROPERTY:                result += "Property";              break;
            case Kind::RANGE_EXCLUSIVE:         result += "RangeExclusive";        break;
            case Kind::RANGE_INCLUSIVE:         result += "RangeInclusive";        break;
            case Kind::REGEX:                   result += "Regex";                 break;
            case Kind::RETURN:                  result += "Return";                break;
            case Kind::SELF:                    result += "Self";                  break;
            case Kind::STATEMENTS:              result += "Statements";            break;
            case Kind::STRING:                  result += "String";                break;
            case Kind::SUPER:                   result += "Super";                 break;
            case Kind::TUPLE:                   result += "Tuple";                 break;
            case Kind::TUPLE_TARGET:            result += "TupleTarget";           break;
            case Kind::TUPLE_TYPE:              result += "TupleType";             break;
            case Kind::TYPE:                    result += "Type";                  break;
            case Kind::TYPES:                   result += "Types";                 break;
            case Kind::UNREACHABLE:             result += "Unreachable";           break;
            case Kind::USES:                    result += "Uses";                  break;
            case Kind::VAR:                     result += "Var";                   break;
            case Kind::VARS:                    result += "Vars";                  break;
            case Kind::VOID:                    result += "Void";                  break;
            case Kind::WHEN:                    result += "When";                  break;
            case Kind::WHENS:                   result += "Whens";                 break;
            case Kind::WHILE:                   result += "While";                 break;
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
    
    // used only by certain kinds of nodes
    union {
        uint64_t fInt;
        double fFloat;
        bool fBool;
    } fValue;
    
    std::vector<ASTNode> fChildren;
};