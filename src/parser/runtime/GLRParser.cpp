#include "GLRParser.h"

namespace ParserGenerator {

String Action::code() const {
    switch (fKind) {
        case Kind::NONE:
            return "Action()";
        case Kind::SHIFT:
            return "Action(Action::Kind::SHIFT, " +
                    std::to_string(fTarget) + ")";
        case Kind::REDUCE:
            return "Action(Action::Kind::REDUCE, " +
                    std::to_string(fTarget) + ")";
        case Kind::CUT:
            return "Action(Action::Kind::CUT, " +
                    std::to_string(fTarget) + ")";
        case Kind::MULTIPLE: {
            String result = "Action({ ";
            const char* separator = "";
            for (const auto& a : fSubactions) {
                result += separator;
                result += a.code();
                separator = ", ";
            }
            return result + " })";
        }
        case Kind::ACCEPT:
            return "Action(Action::Kind::ACCEPT, 0)";
    }
}

}