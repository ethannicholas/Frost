#include "Operator.h"

const char* operator_text(Operator op) {
    switch (op) {
        case Operator::ADD:          return "+";
        case Operator::SUB:          return "-";
        case Operator::MUL:          return "*";
        case Operator::DIV:          return "/";
        case Operator::INTDIV:       return "//";
        case Operator::REM:          return "%";
        case Operator::POW:          return "^";
        case Operator::OR:           return "|";
        case Operator::AND:          return "&";
        case Operator::XOR:          return "~";
        case Operator::BITWISEOR:    return "||";
        case Operator::BITWISEAND:   return "&&";
        case Operator::BITWISEXOR:   return "~~";
        case Operator::SHIFTLEFT:    return "<<";
        case Operator::SHIFTRIGHT:   return ">>";
        case Operator::ASSIGNMENT:   return ":=";
        case Operator::ADDEQ:        return "+=";
        case Operator::SUBEQ:        return "-=";
        case Operator::MULEQ:        return "*=";
        case Operator::DIVEQ:        return "/=";
        case Operator::INTDIVEQ:     return "//=";
        case Operator::REMEQ:        return "%=";
        case Operator::POWEQ:        return "^=";
        case Operator::OREQ:         return "|=";
        case Operator::ANDEQ:        return "&=";
        case Operator::XOREQ:        return "~=";
        case Operator::BITWISEOREQ:  return "||=";
        case Operator::BITWISEANDEQ: return "&&=";
        case Operator::BITWISEXOREQ: return "~~=";
        case Operator::SHIFTLEFTEQ:  return "<<=";
        case Operator::SHIFTRIGHTEQ: return ">>=";
        case Operator::NOT:          return "!";
        case Operator::BITWISENOT:   return "!!";
        case Operator::FORCENONNULL: return "!";
        case Operator::EQ:           return "=";
        case Operator::NEQ:          return "!=";
        case Operator::IDENTITY:     return "==";
        case Operator::NIDENTITY:    return "!==";
        case Operator::GT:           return ">";
        case Operator::LT:           return "<";
        case Operator::GTEQ:         return ">=";
        case Operator::LTEQ:         return "<=";
        case Operator::INSTANCEOF:   return "-?>";
        case Operator::NINSTANCEOF:  return "-!>";
        case Operator::CAST:         return "->";
    }
}