#include "ParserGenerator.h"

#include "ParserGeneratorParser.h"

#include <fstream>

namespace ParserGenerator {

std::unordered_set<char> ParserGenerator::first(const Node& node) {
    switch (node.fKind) {
        case Node::kChar_Kind:
            return { ((CharNode&) node).fChar };
        case Node::kEOF_Kind:
            return { EOF_CHAR };
        case Node::kCharset_Kind:
            return ((CharsetNode&) node).fChars;
        case Node::kIdentifier_Kind:
            return this->first(((IdentifierNode&) node).fIdentifier);
        default:
            abort();
    }
}

std::unordered_set<char> ParserGenerator::first(const String& name) {
    auto found = fFirsts.find(name);
    if (found == fFirsts.end()) {
        return this->computeFirst(name);
    }
    return found->second;
}

void ParserGenerator::computeFirst(const Production& p) {
    std::unordered_set<char>& result = fFirsts[p.fName];
    for (int i = 0; i < p.fNodes.size(); ++i) {
        const Node& node = *p.fNodes[i];
        switch (node.fKind) {
            case Node::kCut_Kind:
                continue;
            case Node::kIdentifier_Kind: {
                std::unordered_set<char> chars = this->first(node);
                bool nullable = chars.find('\0') != chars.end();
                for (char c : chars) {
                    if (c != '\0' && result.find(c) == result.end()) {
                        result.insert(c);
                        fUpdated = true;
                    }
                }
                if (!nullable) {
                    return;
                }
                break;
            }
            default: {
                std::unordered_set<char> chars = this->first(node);
                ASSERT(chars.find('\0') == chars.end(), "expected non-nullable first set");
                for (char c : chars) {
                    if (result.find(c) == result.end()) {
                        result.insert(c);
                        fUpdated = true;
                    }
                }
                return;
            }
        }
    }
    if (result.find('\0') == result.end()) {
        result.insert('\0');
        fUpdated = true;
    }
}

std::unordered_set<char> ParserGenerator::computeFirst(const String& name) {
    for (const auto& p : fProductions) {
        if (p.fName == name) {
            this->computeFirst(p);
        }
    }
    return fFirsts[name];
}

std::unordered_set<char> ParserGenerator::follow(const String& name) {
    return fFollows[name];
}

void ParserGenerator::addFollows(const String& name, const std::unordered_set<char>& newFollows) {
    std::unordered_set<char>& result = fFollows[name];
    std::unordered_set<char>& excludes = fFollowExcludes[name];
    for (char c : newFollows) {
        if (result.find(c) == result.end() && excludes.find(c) == excludes.end()) {
            result.insert(c);
            fUpdated = true;
        }
    }
}

void ParserGenerator::computeFollow(const String& name, const Production& p, int pos) {
    for (int i = pos + 1; i < p.fNodes.size(); ++i) {
        const Node& n = *p.fNodes[i];
        if (n.fKind == Node::kCut_Kind) {
            continue;
        }
        std::unordered_set<char> next = this->first(n);
        bool nullable = next.find('\0') != next.end();
        std::unordered_set<char> chars(next);
        chars.erase('\0');
        this->addFollows(name, chars);
        if (!nullable) {
            return;
        }
    }
    this->addFollows(name, this->follow(p.fName));
}

void ParserGenerator::computeFollow(const String& name) {
    for (const auto& p : fProductions) {
        for (int i = 0; i < p.fNodes.size(); ++i) {
            const std::shared_ptr<Node>& n = p.fNodes[i];
            if (n->fKind == Node::kIdentifier_Kind && ((IdentifierNode&) *n).fIdentifier == name) {
                this->computeFollow(name, p, i);
            }
        }
    }
}

void ParserGenerator::computeClosure(std::unordered_set<StateFragment>* fragments) {
    bool updated;
    do {
        updated = false;
        std::unordered_set<StateFragment> newFragments;
        for (const auto& f : *fragments) {
            if (f.fPosition < fProductions[f.fProductionId].fNodes.size()) {
                const Node& node = *fProductions[f.fProductionId].fNodes[f.fPosition];
                if (node.fKind == Node::kIdentifier_Kind) {
                    const String& name = ((IdentifierNode&) node).fIdentifier;
                    for (int i = 0; i < fProductions.size(); ++i) {
                        if (fProductions[i].fName == name) {
                            newFragments.insert(StateFragment(i, 0));
                        }
                    }
                }
            }
        }
        for (const auto& f : newFragments) {
            if (fragments->find(f) == fragments->end()) {
                fragments->insert(f);
                updated = true;
            }
        }
    }
    while (updated);
}

void ParserGenerator::setAction(int start, char c, GLRParser::Action action) {
    GLRParser::Action& old = fActions[start][c];
    switch (old.fKind) {
        case GLRParser::Action::kMultiple_Kind:
            old.fSubactions.push_back(action);
            break;
        case GLRParser::Action::kNull_Kind:
            fActions[start][c] = action;
            break;
        default:
            std::vector<GLRParser::Action> subactions;
            subactions.push_back(old);
            subactions.push_back(action);
            fActions[start][c] = GLRParser::Action(subactions);
    }
}

String to_string(const Node* node) {
    switch (node->fKind) {
        case Node::kIdentifier_Kind: return ((IdentifierNode*) node)->fIdentifier;
        case Node::kCharset_Kind: {
            String result;
            for (char c : ((CharsetNode*) node)->fChars) {
                result += c;
            }
            return result;
        }
        case Node::kLiteral_Kind: return ((LiteralNode*) node)->fLiteral;
        case Node::kChar_Kind: return String("'") + ((CharNode*) node)->fChar + "'";
        case Node::kCut_Kind: return "<cut>";
        case Node::kEOF_Kind: return "<eof>";
    }
}

void ParserGenerator::computeTransitions(const State& state, std::unordered_set<State>* states) {
    std::unordered_map<const Node*, std::unordered_set<StateFragment>, NodePointerHash,
            NodePointerEqual> outgoing;
    for (const auto& f : state.fFragments) {
        // check to see if we're following within this production or need to head out to the follow
        // set
        if (f.fPosition < fProductions[f.fProductionId].fNodes.size()) {
            const Node& node = *fProductions[f.fProductionId].fNodes[f.fPosition];
            std::unordered_set<StateFragment>& outgoingSet = outgoing[&node];
            outgoingSet.insert(StateFragment(f.fProductionId, f.fPosition + 1));
        }
        else {
            int start = state.fId;
            for (int i = 0; i < fProductions.size(); ++i) {
                if (i == f.fProductionId) {
                    const Production& p = fProductions[i];
                    for (char c : this->follow(p.fName)) {
                        this->setAction(start, c, GLRParser::Action(GLRParser::Action::kReduce_Kind,
                                i));
                    }
                }
            }
        }
    }
    for (auto iter = outgoing.begin(); iter != outgoing.end(); ++iter) {
        const Node& node = *iter->first;
        const std::unordered_set<StateFragment>& set = iter->second;
        int target = this->addState(set, states);
        switch (node.fKind) {
            case Node::kIdentifier_Kind: {
                const String& name = ((IdentifierNode&) node).fIdentifier;
                bool found = false;
                int id = -1;
                for (int i = 0; i < fProductions.size(); ++i) {
                    if (fProductions[i].fName == name) {
                        found = true;
                        id = fProductionIds[i];
                        break;
                    }
                }
                if (!found) {
                    printf("unknown production '%s'\n", name.c_str());
                    exit(1);
                }
                while (fGotos[state.fId].size() <= id) {
                    fGotos[state.fId].emplace_back();
                }
                fGotos[state.fId][id] = target;
                break;
            }
            case Node::kChar_Kind: {
                char c = ((CharNode&) node).fChar;
                this->setAction(state.fId, c, GLRParser::Action(GLRParser::Action::kShift_Kind,
                        target));
                break;
            }
            case Node::kCharset_Kind: {
                for (char c : ((CharsetNode&) node).fChars) {
                    this->setAction(state.fId, c, GLRParser::Action(GLRParser::Action::kShift_Kind,
                        target));
                }
                break;
            }
            case Node::kCut_Kind:
                for (unsigned char c = START_CHAR; c <= END_CHAR; ++c) {
                    this->setAction(state.fId, c, GLRParser::Action(GLRParser::Action::kCut_Kind,
                        target));
                }
                this->setAction(state.fId, EOF_CHAR,
                        GLRParser::Action(GLRParser::Action::kCut_Kind, target));
                break;
            case Node::kEOF_Kind: {
                this->setAction(state.fId, EOF_CHAR,
                        GLRParser::Action(GLRParser::Action::kShift_Kind, target));
                break;
            }
            default:
                abort();
        }
    }
}

int ParserGenerator::addState(std::unordered_set<StateFragment> fragments,
        std::unordered_set<State>* states) {
    this->computeClosure(&fragments);
    State state(states->size(), fragments);
    auto found = states->find(state);
    if (found != states->end()) {
        return found->fId;
    }
    states->insert(state);
    fActions.emplace_back();
    std::vector<GLRParser::Action>& newActions = fActions.back();
    // TODO: does this really need to be +1?
    for (int i = 0; i <= END_CHAR + 1; i++) {
        newActions.emplace_back();
    }
    fGotos.emplace_back();
    this->computeTransitions(state, states);
    return state.fId;
}

void ParserGenerator::createParseTables() {
    std::unordered_set<State> states;
    std::vector<int> startProductions;
    std::unordered_set<String> startNames;
    for (const auto& p : fGrammar.fProductions) {
        if (p.fIsStart && startNames.find(p.fName) == startNames.end()) {
            startNames.insert(p.fName);
            std::vector<std::shared_ptr<Node>> nodes;
            nodes.emplace_back(new IdentifierNode("", p.fName));
            nodes.emplace_back(new EOFNode());
            int index = (int) fProductions.size();
            fProductions.emplace_back(p.fName + "_START", false, p.fType, std::move(nodes),
                    std::unordered_set<char>(), "result = " + p.fName);
            startProductions.push_back(index);
        }
    }
    do {
        fUpdated = false;
        for (const auto& p : fProductions) {
            this->computeFirst(p);
            this->computeFollow(p.fName);
        }
    }
    while (fUpdated);
    std::vector<String> names;
    for (const auto& p : fProductions) {
        bool nameFound = false;
        for (int i = 0; i < names.size(); ++i) {
            if (names[i] == p.fName) {
                fProductionIds.push_back(i);
                nameFound = true;
                break;
            }
        }
        if (!nameFound) {
            fProductionIds.push_back(names.size());
            names.push_back(p.fName);
        }
    }
    for (const auto pId : startProductions) {
        std::unordered_set<StateFragment> fragments;
        fragments.insert(StateFragment(pId, 0));
        fStartStates[pId] = addState(fragments, &states);
    }
}

void ParserGenerator::writeProductions(std::ofstream& out) {
    out << "const int " << fName << "_PRODUCTIONS[" << fProductionIds.size() << "] = { ";
    const char* separator = "";
    for (int id : fProductionIds) {
        out << separator << id;
        separator = ", ";
    }
    out << "};\n";
}

void ParserGenerator::writeActions(std::ofstream& out) {
    out << "const Action " << fName << "_ACTIONS[" << fActions.size() << "][" <<
            (END_CHAR + 2) << "] = {\n";
    const char* outerSeparator = "";
    for (const auto& row : fActions) {
        out << outerSeparator << "    { ";
        const char* innerSeparator = "";
        for (const auto& a : row) {
            out << innerSeparator << a.code();
            innerSeparator = ", ";
        }
        out << "}";
        outerSeparator = ",\n";
    }
    out << "\n    };\n";
}

void ParserGenerator::writeGotos(std::ofstream& out) {
    int max = 0;
    for (const auto& row : fGotos) {
        if (row.size() > max) {
            max = row.size();
        }
    }
    out << "const int " << fName << "_GOTOS[" << fActions.size() << "][" <<
            max << "] = {\n";
    const char* outerSeparator = "";
    for (const auto& row : fGotos) {
        out << outerSeparator << "    { ";
        const char* innerSeparator = "";
        for (const auto& g : row) {
            out << innerSeparator << g;
            innerSeparator = ", ";
        }
        out << "}";
        outerSeparator = ",\n";
    }
    out << "\n    };\n";
}

String ParserGenerator::getType(const Node& node) {
    switch (node.fKind) {
        case Node::kChar_Kind: // fall through
        case Node::kCharset_Kind:
            return "String";
        case Node::kIdentifier_Kind: {
            const String& name = ((IdentifierNode&) node).fIdentifier;
            String type;
            bool found = false;
            for (const auto& p : fProductions) {
                if (p.fName == name) {
                    found = true;
                    if (!type.size()) {
                        type = p.fType;
                    }
                    else {
                        ASSERT(type == p.fType, "production has inconsistent types");
                    }
                }
            }
            ASSERT(found, "couldn't find named production");
            return type;
        }
        default:
            return "";
    }
}

void ParserGenerator::writeReductions(std::ofstream& out) {
    out << "std::unique_ptr<StackEntry> " << fName << "::reduce(int prodId, State* parserState, "
            "bool* die) const {\n";
    out << "    switch (prodId) {\n";
    for (int i = 0; i < fProductions.size(); ++i) {
        const Production& p = fProductions[i];

        // FIXME TEMPORARY
        ((Production&) p).fType = "";
        ((Production&) p).fCode = "";

        out << "        case " << i << ": ";
        if (p.fCode.size()) {
            const char* indentation = "            ";
            ASSERT(p.fType.size(), "expected production with code to have a type");
            out << "{\n" << indentation << p.fType << " result;\n";
            for (const auto& n : p.fNodes) {
                String name;
                if (n->fLabel.size()) {
                    name = n->fLabel;
                }
                else if (n->fKind == Node::kIdentifier_Kind && this->getType(*n).size()) {
                    name = ((IdentifierNode&) *n).fIdentifier;
                }
                if (name.size()) {
                    String type = getType(*n);
                    ASSERT(type.size(), "expected named node to have a type");
                    out << indentation << "const " << type << "& " << name << 
                            " = (" << type << "&) *parserState->state.output;\n";
                }
                out << indentation << "parserState->fNode = parserState->fNode->fNext;\n";
            }
            out << indentation << p.fCode << "\nreturn result;\n";
            out << indentation << "}\n";
        }
        else {
            ASSERT(!p.fType.size(), "expected production without code to not have a type");
            out << "for (int i = 0; i < " << p.fNodes.size() << "; i++) { "
                    "parserState->fNode = parserState->fNode->fNext; } "
                    "return nullptr;\n";
        }
    }
    out << "        default: abort();\n";
    out << "    }\n";
    out << "}\n";
}

void ParserGenerator::writeStarts(std::ofstream& out) {
    for (auto iter = fStartStates.begin(); iter != fStartStates.end(); ++iter) {
        const Production& p = fProductions[iter->first];
        out << "    " << /*p.fType*/"void" << " " << p.fName.substr(0, p.fName.length() - strlen("_START")) << 
                "(String text, void* reference = nullptr) {\n";
        out << "        " << fName << "().parse(text, " << iter->second << ", reference);\n";
        out << "    }\n";

    }
}

void ParserGenerator::generate(const char* hDest, const char* cppDest) {
    this->createParseTables();

    std::ofstream hOut(hDest);
    hOut << "#pragma once\n";
    hOut << "#include \"GLRParser.h\"\n";
    hOut << "typedef ParserGenerator::GLRParser::Action Action;\n";
    hOut << "typedef ParserGenerator::GLRParser::StackEntry StackEntry;\n";
    hOut << "typedef ParserGenerator::GLRParser::State State;\n";
    hOut << "class " << fName << " : public ParserGenerator::GLRParser {\n";
    hOut << "public:\n";
    this->writeStarts(hOut);
    hOut << "private:\n";
    hOut << "    const Action& getAction(int stateId, char c) const override;\n";
    hOut << "    int getGoto(int stateId, int productionId) const override;\n";
    hOut << "    int getProductionId(int production) const override;\n";
    hOut << "    std::unique_ptr<StackEntry> reduce(int prodId, State* parserState, bool* die) "
            "const override;\n";
    hOut << "};";

    std::ofstream cppOut(cppDest);
    cppOut << "#include \"" << fName << ".h\"\n";
    cppOut << "#include <stdlib.h>\n";
    this->writeProductions(cppOut);
    this->writeActions(cppOut);
    this->writeGotos(cppOut); 
    this->writeReductions(cppOut);
    cppOut << "const Action& " << fName << "::getAction(int stateId, char c) const {\n";
    cppOut << "    return " << fName << "_ACTIONS[stateId][c];\n";
    cppOut << "}\n";
    cppOut << "int " << fName << "::getGoto(int stateId, int productionId) const {\n";
    cppOut << "    return " << fName << "_GOTOS[stateId][productionId];\n";
    cppOut << "}\n";
    cppOut << "int " << fName << "::getProductionId(int production) const {\n";
    cppOut << "    return " << fName << "_PRODUCTIONS[production];\n";
    cppOut << "}\n";
}

}