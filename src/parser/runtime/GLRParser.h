#pragma once

#include <stack>
#include <string>
#include <vector>

#define EOF_CHAR '\1'

typedef std::string String;

namespace ParserGenerator {

class GLRParser {
public:
    /** An object produced by a parser reduction; these are the grammar's outputs. */
    struct StackEntry {
        virtual ~StackEntry() {}
    };

    struct CharStackEntry : public StackEntry {
        CharStackEntry(char value)
        : fValue(value) {}
        
        char fValue;
    };

    /** Represents a single entry on the parser's state stack. */
    struct StateNode {
        /** Numeric ID of this particular state. */
        int fId;

        /** The grammar's output for this node. */
        std::unique_ptr<StackEntry> fOutput;

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

protected:
    std::unique_ptr<StackEntry> parse(String text, int startState, void* reference);

private:
    virtual const Action& getAction(int stateId, char c) const = 0;

    virtual int getGoto(int stateId, int productionId) const = 0;

    virtual int getProductionId(int production) const = 0;

    virtual std::unique_ptr<StackEntry> reduce(int prodId, State* parserState, bool* die) const = 0;

    void performAction(const Action& action, const String& text, State* parserState,
        std::stack<State>* parsers);
};

}