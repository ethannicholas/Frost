#include "GLRParser.h"

#include "stdlib.h"

namespace ParserGenerator {

typedef GLRParser::StackEntry StackEntry;

String GLRParser::Action::code() const {
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

void GLRParser::performAction(const Action& action, const String& text, State* parserState,
        std::stack<State>* parsers) {
    switch (action.fKind) {
        case Action::kShift_Kind: {
            char c = text[parserState->fOffset];
            parserState->fNode.reset(new StateNode { action.fTarget,
                    std::unique_ptr<StackEntry>(new CharStackEntry(c)),
                    parserState->fNode });
            ++parserState->fOffset;
            switch (c) {
                case '\n':
                    ++parserState->fRow;
                    parserState->fColumn = 1;
                    break;
                case '\t':
                    parserState->fColumn += 4 - parserState->fColumn % 4;
                    break;
                default:
                    ++parserState->fColumn;
            }
            break;
        }
        case Action::kReduce_Kind: {
            bool die = false;
            std::unique_ptr<StackEntry> output = this->reduce(action.fTarget, parserState, &die);
            if (die) {
                parserState->fNode.reset(new StateNode { -1, std::move(output),
                        parserState->fNode });
                return;
            }
            int next = this->getGoto(parserState->fNode->fId,
                    this->getProductionId(action.fTarget));
            parserState->fNode.reset(new StateNode { next, std::move(output), parserState->fNode });
            break;
        }
        case Action::kMultiple_Kind: {
            auto iter = action.fSubactions.begin();
            std::shared_ptr<StateNode> oldState = parserState->fNode;
            int oldOffset = parserState->fOffset;
            int oldRow = parserState->fRow;
            int oldColumn = parserState->fColumn;
            std::shared_ptr<StateNode>& next = oldState->fNext;
            this->performAction(*iter, text, parserState, parsers);
            ++iter;
            while (iter != action.fSubactions.end()) {
                State sub { parserState->fReference, oldOffset, oldRow, oldColumn, oldState };
                this->performAction(*iter, text, &sub, parsers);
                parsers->push(sub);
                ++iter;
            }
            break;
        }
        case Action::kCut_Kind: {
            parserState->fNode.reset(new StateNode { action.fTarget, nullptr, parserState->fNode });
            State top = parsers->top();
            while (!parsers->empty()) {
                parsers->pop();
            }
            parsers->push(top);
            break;
        }
        default:
            abort();
    }

}

std::unique_ptr<StackEntry> GLRParser::parse(String text, int startState, void* reference) {
    text += EOF_CHAR;
    int farthestRow = 1;
    int farthestColumn = 1;
    int farthestOffset = 0;
    std::stack<State> parsers;
    parsers.push({ reference, farthestOffset, farthestRow, farthestColumn,
            std::shared_ptr<StateNode>(new StateNode { startState, nullptr, nullptr }) });

    for (;;) {
        if (!parsers.size()) {
            printf("parse error at %d, %d\n", farthestRow, farthestColumn);
            return nullptr;
        }
        State& top = parsers.top();
        if (top.fOffset == text.length()) {
            printf("successful parse!\n");
            return std::move(top.fNode->fNext->fOutput);
        }
        if (top.fNode->fId < 0) {
            // error state
            if (top.fOffset > farthestOffset) {
                farthestRow = top.fRow;
                farthestColumn = top.fColumn;
                farthestOffset = top.fOffset;
            }
            parsers.pop();
            continue;
        }
        const Action& action = this->getAction(top.fNode->fId, text[top.fOffset]);
        if (action.fKind == Action::kNull_Kind) {
            if (top.fOffset > farthestOffset) {
                farthestRow = top.fRow;
                farthestColumn = top.fColumn;
                farthestOffset = top.fOffset;
            }
            parsers.pop();
            continue;
        }
        this->performAction(action, text, &top, &parsers);
    }
}

}