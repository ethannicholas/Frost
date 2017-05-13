#include "GLRParser.h"

namespace ParserGenerator {

String Action::code() const {
    switch (fKind) {
        case kNull_Kind:
            return "Action()";
        case kShift_Kind:
            return "Action(Action::kShift_Kind, " +
                    std::to_string(fTarget) + ")";
        case kReduce_Kind:
            return "Action(Action::kReduce_Kind, " +
                    std::to_string(fTarget) + ")";
        case kCut_Kind:
            return "Action(Action::kCut_Kind, " +
                    std::to_string(fTarget) + ")";
        case kPush_Kind:
            return "Action(Action::kPush_Kind, " +
                    std::to_string(fTarget) + ")";
        case kPop_Kind:
            return "Action(Action::kPop_Kind, " +
                    std::to_string(fTarget) + ")";
        case kMultiple_Kind: {
            String result = "Action({ ";
            const char* separator = "";
            for (const auto& a : fSubactions) {
                result += separator;
                result += a.code();
                separator = ", ";
            }
            return result + " })";
        }
        case kAccept_Kind:
            return "Action(Action::kAccept_Kind, 0)";
    }
}

}