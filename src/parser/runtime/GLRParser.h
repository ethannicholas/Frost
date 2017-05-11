#pragma once

#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
#include "stdlib.h"

#define EOF_CHAR '\1'

typedef std::string String;

namespace ParserGenerator {

struct ParseError {
    ParseError()
    : fLine(-1)
    , fColumn(-1) {}

    ParseError(int line, int column)
    : fLine(line)
    , fColumn(column) {}

    int fLine;
    int fColumn;
};

class Action {
public:
    enum Kind {
        kNull_Kind,
        kShift_Kind,
        kReduce_Kind,
        kCut_Kind,
        kMultiple_Kind,
        kAccept_Kind
    } fKind;

    int fTarget;

    std::vector<Action> fSubactions;

    Action()
    : fKind(kNull_Kind) {}

    Action(Kind kind, int target) 
    : fKind(kind)
    , fTarget(target) {}

    Action(std::vector<Action> subactions)
    : fKind(kMultiple_Kind)
    , fSubactions(std::move(subactions)) {}

    String code() const;
};

template<typename T> class GLRParser {
public:
    /** Represents a single entry on the parser's state stack. */
    struct StateNode {
        /** Numeric ID of this particular state. */
        int fId;

        /** The grammar's output for this node. */
        T fOutput;

        /** The next node on the stack. */
        std::shared_ptr<StateNode> fNext;
    };

    /** 
     * A complete parser state, primarily consisting of a stack of StateNodes. In a traditional
     * LR parser, only a single State would be needed. This GLR parser uses a collection of States
     * to handle nondeterminism.
     */
    struct State {
        /**
         * Opaque pointer which has no meaning to the parser itself; passed to the parser at
         * construction time and available to grammar code.
         */
        void* fReference;

        /** The index of the character we are currently looking at. */
        int fOffset;

        /** The current line numer (for error reporting purposes). */
        int fRow;

        /** The current column within the line (for error reporting purposes). */
        int fColumn;

        /** The top of the parse stack. */
        std::shared_ptr<StateNode> fNode;
    };

protected:
    bool parse(String text, int startState, T* output, ParseError* error, void* reference) {
        text += EOF_CHAR;
        int farthestRow = 1;
        int farthestColumn = 1;
        int farthestOffset = 0;
        std::stack<State> parsers;
        parsers.push({ reference, farthestOffset, farthestRow, farthestColumn,
                std::shared_ptr<StateNode>(new StateNode { startState, T(), nullptr }) });

        for (;;) {
            if (!parsers.size()) {
                *error = ParseError(farthestRow, farthestColumn);
                return false;
            }
            State& top = parsers.top();
            if (top.fOffset == text.length()) {
                *output = top.fNode->fNext->fOutput;
                return true;
            }
            if (top.fOffset > farthestOffset) {
                farthestOffset = top.fOffset;
                farthestRow = top.fRow;
                farthestColumn = top.fColumn;
            }
            if (top.fNode->fId < 0) {
                // error state
                parsers.pop();
                continue;
            }
            const Action& action = this->getAction(top.fNode->fId, text[top.fOffset]);
            if (action.fKind == Action::kNull_Kind) {
                parsers.pop();
                continue;
            }
            this->performAction(action, text, &top, &parsers);
        }
    }

private:
    virtual const Action& getAction(int stateId, char c) const = 0;

    virtual int getGoto(int stateId, int productionId) const = 0;

    virtual int getProductionId(int production) const = 0;

    virtual T reduce(int prodId, State* parserState, bool* die) const = 0;

    void performAction(const Action& action, const String& text, State* parserState,
            std::stack<State>* parsers) {
        switch (action.fKind) {
            case Action::kShift_Kind: {
                char c = text[parserState->fOffset];
                parserState->fNode.reset(new StateNode { action.fTarget, T(c),
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
                T output = this->reduce(action.fTarget, parserState, &die);
                if (die) {
                    parserState->fNode.reset(new StateNode { -1, std::move(output),
                            parserState->fNode });
                    return;
                }
                int next = this->getGoto(parserState->fNode->fId,
                        this->getProductionId(action.fTarget));
                parserState->fNode.reset(new StateNode { next, std::move(output),
                        parserState->fNode });
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
                parserState->fNode.reset(new StateNode { action.fTarget, T(), parserState->fNode });
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
};

}