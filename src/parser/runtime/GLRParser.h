#pragma once

#include <cstring>
#include <memory>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
#include "stdlib.h"

#define START_CHAR   9
#define END_CHAR   127
#define EOF_CHAR     1

typedef std::string String;

namespace ParserGenerator {

struct ParseError {
    ParseError()
    : fLine(-1)
    , fColumn(-1) {}

    ParseError(int line, int column, String message)
    : fLine(line)
    , fColumn(column)
    , fMessage(message) {}

    int fLine;
    int fColumn;
    String fMessage;
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

        /** The current line numer (for error reporting purposes). */
        int fRow;

        /** The current column within the line (for error reporting purposes). */
        int fColumn;

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

        /** The top of the parse stack. */
        std::shared_ptr<StateNode> fNode;
    };

protected:
    String getErrorMessage(String name, State* state) {
        // the production on top of the stack might not have been reduced, because the next
        // character (the one we failed at) isn't in its follow set. We don't care about that
        // anymore; reduce things so we can figure out what we're looking at.
        bool done;
        do {
            done = true;
            for (unsigned char c = START_CHAR; c <= END_CHAR; c++) {
                // right this second, we just grab the first reduction we run into and hope this
                // yields a sensible error message. Seems to be ok for now, but we might eventually
                // have to follow all reduce paths and then merge the messages together.
                const Action& a = getAction(state->fNode->fId, c);
                int reduce = -1;
                if (a.fKind == Action::kReduce_Kind) {
                    reduce = a.fTarget;
                }
                else if (a.fKind == Action::kMultiple_Kind) {
                    for (const Action& sub : a.fSubactions) {
                        if (sub.fKind == Action::kReduce_Kind) {
                            reduce = sub.fTarget;
                            break;
                        }
                    }
                }
                if (reduce != -1) {
                    bool die;
                    T output = this->reduce(reduce, state, &die);
                    if (die) {
                        done = true;
                        break;
                    }
                    done = false;
                    int next = this->getGoto(state->fNode->fId, this->getProductionId(reduce));
                    state->fNode.reset(new StateNode { next, std::move(output), state->fNode->fRow,
                            state->fNode->fColumn, state->fNode });
                    break;
                }
            }
            if (!done) {
                const char* msg = this->getMessage(state->fNode->fId);
                if (msg && strlen(msg)) {
                    done = true;
                }
            }
        }
        while (!done);

        String errorText = "parse error";
        int row = state->fNode->fRow;
        int column = state->fNode->fColumn;
        int depth = 0;
        StateNode* node = state->fNode.get();
        while (node != nullptr) {
            const char* msg = this->getMessage(node->fId);
            if (msg) {
                if (strlen(msg)) {
                    ++depth;
                    if (depth > 0) {
                        errorText = msg;
                        row = node->fRow;
                        column = node->fColumn;
                        break;
                    }
                }
                else {
                    --depth;
                }
            }
            node = node->fNext.get();
        }
        String posToken = "<pos>";
        std::string::size_type pos = errorText.find(posToken);
        if (pos != std::string::npos) {
            errorText.replace(pos, posToken.size(), name + ":" + std::to_string(row) + ":" +
                    std::to_string(column));
        }

        return errorText;
    }

    bool parse(const String& name, String text, int startState, T* output, ParseError* error,
                void* reference) {
        text += EOF_CHAR;
        State farthest = { reference, 0,
                std::shared_ptr<StateNode>(new StateNode { startState, T(), 1, 1, nullptr }) };
        std::stack<State> parsers;
        parsers.push(farthest);

        for (;;) {
            if (!parsers.size()) {
                *error = ParseError(farthest.fNode->fRow, farthest.fNode->fColumn,
                        getErrorMessage(name, &farthest));
                return false;
            }
            State& top = parsers.top();
            if (top.fOffset == text.length()) {
                *output = top.fNode->fNext->fOutput;
                return true;
            }
            if (top.fOffset >= farthest.fOffset) {
                farthest = top;
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

    virtual const char* getMessage(int stateId) const = 0;

    virtual int getProductionId(int production) const = 0;

    virtual T reduce(int prodId, State* parserState, bool* die) const = 0;

    void performAction(const Action& action, const String& text, State* parserState,
            std::stack<State>* parsers) {
        switch (action.fKind) {
            case Action::kShift_Kind: {
                char c = text[parserState->fOffset];
                int row = parserState->fNode->fRow;
                int column = parserState->fNode->fColumn;
                switch (c) {
                    case '\n':
                        ++row;
                        column = 1;
                        break;
                    case '\t':
                        column += 4 - column % 4;
                        break;
                    default:
                        ++column;
                }
                parserState->fNode.reset(new StateNode { action.fTarget, T(c), row, column,
                        parserState->fNode });
                ++parserState->fOffset;
                break;
            }
            case Action::kReduce_Kind: {
                bool die = false;
                int row = parserState->fNode->fRow;
                int column = parserState->fNode->fColumn;
                T output = this->reduce(action.fTarget, parserState, &die);
                if (die) {
                    parserState->fNode.reset(new StateNode { -1, std::move(output), row, column,
                            parserState->fNode });
                    return;
                }
                int next = this->getGoto(parserState->fNode->fId,
                        this->getProductionId(action.fTarget));
                parserState->fNode.reset(new StateNode { next, std::move(output), row, column,
                        parserState->fNode });
                break;
            }
            case Action::kMultiple_Kind: {
                auto iter = action.fSubactions.begin();
                std::shared_ptr<StateNode> oldState = parserState->fNode;
                int oldOffset = parserState->fOffset;
                std::shared_ptr<StateNode>& next = oldState->fNext;
                this->performAction(*iter, text, parserState, parsers);
                ++iter;
                while (iter != action.fSubactions.end()) {
                    State sub { parserState->fReference, oldOffset, oldState };
                    this->performAction(*iter, text, &sub, parsers);
                    parsers->push(sub);
                    ++iter;
                }
                break;
            }
            case Action::kCut_Kind: {
                parserState->fNode.reset(new StateNode { action.fTarget, T(),
                        parserState->fNode->fRow, parserState->fNode->fColumn,
                        parserState->fNode });
                State top = parsers->top();
                while (!parsers->empty()) {
                    parsers->pop();
                }
                parsers->push(top);
                break;
            }
            case Action::kNull_Kind:
            case Action::kAccept_Kind:
                abort();
        }
    }
};

}