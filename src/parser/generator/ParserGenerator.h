#pragma once

#include "ParserGeneratorGrammar.h"

#include "../runtime/GLRParser.h"

#include <unordered_map>
#include <unordered_set>

namespace ParserGenerator {

/**
 * Represents a position within a single production.
 */
struct StateFragment {
    StateFragment(int productionId, int position)
    : fProductionId(productionId)
    , fPosition(position) {}

    bool operator==(const StateFragment& rhs) const {
        return fProductionId == rhs.fProductionId && fPosition == rhs.fPosition;
    }

    bool operator!=(const StateFragment& rhs) const {
        return !(*this == rhs);
    }

    const int fProductionId;
    const int fPosition;
};


} // namespace ParserGenerator

namespace std {
template<> struct hash<ParserGenerator::StateFragment> {
    size_t operator()(const ParserGenerator::StateFragment &f) const {
        return f.fProductionId << 16 ^ f.fPosition;
    }
};
} // namespace std

namespace ParserGenerator {

/**
 * Represents a parser state consisting of one or more StateFragments.
 */
struct State {
    State(int id, std::unordered_set<StateFragment> fragments)
    : fId(id)
    , fFragments(std::move(fragments)) {}

    bool operator==(const State& rhs) const {
        return fFragments == rhs.fFragments;
    }

    bool operator!=(const State& rhs) const {
        return !(*this == rhs);
    }

    const int fId;
    const std::unordered_set<StateFragment> fFragments;
};

} // namespace ParserGenerator

namespace std {
template<>
struct hash<ParserGenerator::State> {
public:
    size_t operator()(const ParserGenerator::State &s) const {
        size_t result = 0;
        for (const auto& f : s.fFragments) {
            result |= std::hash<ParserGenerator::StateFragment>{}(f);
        }
        return result;
    }
};
} // namespace std

namespace ParserGenerator {

/**
 * Scannerless Generalized LR parser generator. Creates a C++ parser for the provided grammar.
 *
 * This parser generator is intended for internal use only, generating the parser for the Panda
 * compiler. As it is intended for internal use only, "user friendliness" is an entirely foreign
 * concept to it. Not suitable for children, contains small parts and sharp edges.
 *
 * NOTE: Currently the parser table is generated using SLR. This is a *bad plan* and the goal is to
 * eventually upgrade this to Minimal LR, but 'working' is more important than 'fast' at the moment.
 */
class ParserGenerator {
public:
    ParserGenerator(String name, const Grammar* grammar)
    : fName(std::move(name))
    , fGrammar(*grammar)
    , fProductions(std::move(grammar->fProductions)) {
        for (const auto& p : fProductions) {
            for (char c : p.fExcludes) {
                fFollowExcludes[p.fName].insert(c);
            }
        }
    }

    void generate(const char* hDest, const char* cppDest);

private:
    /**
     * Returns the set of characters that can begin the specified node.
     */
    std::unordered_set<char> first(const Node& node);

    /**
     * Returns the set of characters that can begin the named set of productions.
     */
    std::unordered_set<char> first(const String& name);

    /**
     * Computes the set of characters that can begin the specified production, storing them in
     * fFirsts[p.fName].
     */
    void computeFirst(const Production& p);

    /**
     * Returns the set of characters that can follow the named set of productions.
     */
    std::unordered_set<char> follow(const String& name);

    void addFollows(const String& name, const std::unordered_set<char>& newFollows);

    /**
     * Computes the set of characters that can follow p.fNodes[pos], storing them in fFollows[name].
     */
    void computeFollow(const String& name, const Production& p, int pos);

    /**
     * Computes the set of characters that can follow the named set of productions, storing them in
     * fFollows[name].
     */
    void computeFollow(const String& name);

    /**
     * Computes the set of characters that can begin the named set of productions.
     */
    std::unordered_set<char> computeFirst(const String& name);

    /**
     * Sets an action table entry.
     */
    void setAction(int start, char c, Action action);

    /**
     * Computes the closure of the state by expanding all nonterminal symbols expected to be parsed
     * next.
     */
    void computeClosure(std::unordered_set<StateFragment>* fragments);

    /**
     * Computes the action table entries for the given state.
     */
    void computeTransitions(const State& state, std::unordered_set<State>* states);

    /**
     * Either adds the state consisting of the given fragments to the state set, or determines that
     * it is equivalent to an existing state. Returns the new/existing state's id.
     */
    int addState(std::unordered_set<StateFragment> fragments, std::unordered_set<State>* states);

    void createParseTables();

    String getType(const Node& node);

    void createWrapper(const String& rawType, std::ofstream& out);

    String wrapper(const String& rawType);

    void writeProductions(std::ofstream& out);

    void writeActions(std::ofstream& out);

    void writeGotos(std::ofstream& out);

    void writeReductions(std::ofstream& out);

    void writeStarts(std::ofstream& out);

    const String fName;
    const Grammar& fGrammar;
    // starts as a copy of the grammar productions, but is modified during the generation process
    std::vector<Production> fProductions;
    // for each production (in fProductions order), contains a numeric ID which is common to all
    // productions with the same name
    std::vector<int> fProductionIds;
    // maps production indices to start state id
    std::unordered_map<int, int> fStartStates;
    // maps production indices to lists of actions (by character)
    std::vector<std::vector<Action>> fActions;
    // maps production indices to goto lists
    std::vector<std::vector<int>> fGotos;
    // maps production names to characters which can start the production. The null character (\0)
    // means "this production can be empty".
    std::unordered_map<String, std::unordered_set<char>> fFirsts;
    // maps production names to characters which can follow the production
    std::unordered_map<String, std::unordered_set<char>> fFollows;
    // flag to track whether changes have been made to the generator state
    bool fUpdated;
    // maps production names to characters which have been explicitly declared in the grammar to
    // *not* follow them
    std::unordered_map<String, std::unordered_set<char>> fFollowExcludes;
    std::unordered_map<String, String> fWrappers;
};

}