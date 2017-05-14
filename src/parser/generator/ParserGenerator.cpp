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
            case Node::kCut_Kind: // fall through
            case Node::kPop_Kind: // fall through
            case Node::kPush_Kind:
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
        if (n.fKind == Node::kCut_Kind || n.fKind == Node::kPush_Kind ||
                n.fKind == Node::kPop_Kind) {
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

bool creates_state(const Node& node) {
    return node.fKind != Node::kPush_Kind && node.fKind != Node::kPop_Kind;
}

void ParserGenerator::computeClosure(std::unordered_set<StateFragment>* fragments) {
    bool updated;
    do {
        updated = false;
        std::unordered_set<StateFragment> newFragments;
        for (const auto& f : *fragments) {
            int position = f.fPosition;
            while (position < fProductions[f.fProductionId].fNodes.size() &&
                    !creates_state(*fProductions[f.fProductionId].fNodes[position])) {
                ++position;
            }
            if (position < fProductions[f.fProductionId].fNodes.size()) {
                const Node& node = *fProductions[f.fProductionId].fNodes[position].get();
                ASSERT(creates_state(node), "unexpected dummy node");
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

void ParserGenerator::setAction(int start, char c, Action action) {
    Action& old = fActions[start][c];
    switch (old.fKind) {
        case Action::kMultiple_Kind:
            old.fSubactions.push_back(action);
            break;
        case Action::kNull_Kind:
            fActions[start][c] = action;
            break;
        default:
            std::vector<Action> subactions;
            subactions.push_back(old);
            subactions.push_back(action);
            fActions[start][c] = Action(subactions);
    }
}

String to_string(const Node* node) {
    switch (node->fKind) {
        case Node::kIdentifier_Kind: return ((IdentifierNode*) node)->fIdentifier;
        case Node::kCharset_Kind: {
            String result = "[";
            for (char c : ((CharsetNode*) node)->fChars) {
                switch (c) {
                    case '\n':
                        result += "\\n";
                        break;
                    case '\r':
                        result += "\\r";
                        break;
                    case '\t':
                        result += "\\t";
                        break;
                    default:
                        result += c;
                }
            }
            result += "]";
            return result;
        }
        case Node::kLiteral_Kind: return ((LiteralNode*) node)->fLiteral;
        case Node::kChar_Kind:
            switch (((CharNode*) node)->fChar) {
                case '\n':
                    return "'\\n'";
                case '\r':
                    return "'\\r'";
                case '\t':
                    return "'\\t'";
                default:
                    return String("'") + ((CharNode*) node)->fChar + "'";
            }
        case Node::kPush_Kind: return "@\"" + ((PushNode*) node)->fMessage + "\"";
        case Node::kCut_Kind: return "<cut>";
        case Node::kPop_Kind: return "<pop>";
        case Node::kEOF_Kind: return "<eof>";
    }
}

void ParserGenerator::computeTransitions(const State& state, std::unordered_set<State>* states) {
    std::unordered_map<const Node*, std::unordered_set<StateFragment>, NodePointerHash,
            NodePointerEqual> outgoing;
    String message;
    bool haveMessage = false;
    for (const auto& f : state.fFragments) {
        // check to see if we're following within this production or need to head out to the follow
        // set
        int position = f.fPosition;
        while (position < fProductions[f.fProductionId].fNodes.size() &&
                !creates_state(*fProductions[f.fProductionId].fNodes[position])) {
            const Node& n = *fProductions[f.fProductionId].fNodes[position];
            switch (n.fKind) {
                case Node::kPush_Kind:
                    printf("have message %s for %d\n", ((PushNode&) n).fMessage.c_str(), state.fId);
//                    ASSERT(fPushMessages.find(state.fId) == fPushMessages.end(), "message conflict");
                    fPushMessages[state.fId] = ((PushNode&) n).fMessage;
                    break;
                case Node::kPop_Kind:
                    printf("have pop for %d\n", state.fId);
//                    ASSERT(fPushMessages.find(state.fId) == fPushMessages.end(), "message conflict");
                    fPushMessages[state.fId] = "";
                    break;
                default:
                    abort();
            }
            ++position;
        }
        if (position < fProductions[f.fProductionId].fNodes.size()) {
            const Node& node = *fProductions[f.fProductionId].fNodes[position];
            std::unordered_set<StateFragment>& outgoingSet = outgoing[&node];
            outgoingSet.insert(StateFragment(f.fProductionId, position + 1));
        }
        else {
            int start = state.fId;
            for (int i = 0; i < fProductions.size(); ++i) {
                if (i == f.fProductionId) {
                    const Production& p = fProductions[i];
                    for (char c : this->follow(p.fName)) {
                        this->setAction(start, c, Action(Action::kReduce_Kind, i));
                    }
                }
            }
        }
    }
    for (auto iter = outgoing.begin(); iter != outgoing.end(); ++iter) {
        const Node& node = *iter->first;
        const std::unordered_set<StateFragment>& set = iter->second;
        switch (node.fKind) {
            case Node::kIdentifier_Kind: {
                int target = this->addState(set, states);
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
                int target = this->addState(set, states);
                char c = ((CharNode&) node).fChar;
                this->setAction(state.fId, c, Action(Action::kShift_Kind, target));
                break;
            }
            case Node::kCharset_Kind: {
                int target = this->addState(set, states);
                for (char c : ((CharsetNode&) node).fChars) {
                    this->setAction(state.fId, c, Action(Action::kShift_Kind, target));
                }
                break;
            }
            case Node::kCut_Kind: {
                int target = this->addState(set, states);
                for (unsigned char c = START_CHAR; c <= END_CHAR; ++c) {
                    this->setAction(state.fId, c, Action(Action::kCut_Kind, target));
                }
                this->setAction(state.fId, EOF_CHAR, Action(Action::kCut_Kind, target));
                break;
            }
            case Node::kEOF_Kind: {
                int target = this->addState(set, states);
                this->setAction(state.fId, EOF_CHAR, Action(Action::kShift_Kind, target));
                break;
            }
            case Node::kPush_Kind: // fall through
            case Node::kPop_Kind:  // fall through
            case Node::kLiteral_Kind:
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
    std::vector<Action>& newActions = fActions.back();
    for (int i = 0; i <= END_CHAR; i++) {
        newActions.emplace_back();
    }
    fGotos.emplace_back();
    this->computeTransitions(state, states);

    printf("State %d:\n", state.fId);
    for (const auto& f : fragments) {
        const Production& p = fProductions[f.fProductionId];
        printf("    %s =", p.fName.c_str());
        for (int i = 0; i < p.fNodes.size(); i++) {
            if (i == f.fPosition) {
                printf(" <*>");
            }
            printf(" %s", to_string(p.fNodes[i].get()).c_str());
        }
        if (p.fNodes.size() == f.fPosition) {
            printf(" <*>");
        }
        printf("\n");
    }

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
                    std::unordered_set<char>(), "result = " + p.fName + ";");
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
    for (int i = 0; i < fProductionIds.size(); i++) {
        out << separator << "/* " << i << " */ " << fProductionIds[i];
        separator = ", ";
    }
    out << "};\n";
}

void ParserGenerator::writeActions(std::ofstream& out) {
    out << "const Action " << fName << "_ACTIONS[" << fActions.size() << "][" <<
            (END_CHAR + 2) << "] = {\n";
    const char* outerSeparator = "";
    for (int i = 0; i < fActions.size(); i++) {
        out << outerSeparator << "    /* " << i << " */ { ";
        const char* innerSeparator = "";
        for (const auto& a : fActions[i]) {
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
    for (int i = 0; i < fGotos.size(); i++) {
        out << outerSeparator << "    /* " << i << " */ { ";
        const char* innerSeparator = "";
        for (const auto& g : fGotos[i]) {
            out << innerSeparator << g;
            innerSeparator = ", ";
        }
        out << "}";
        outerSeparator = ",\n";
    }
    out << "\n    };\n";
}

void ParserGenerator::writePushes(std::ofstream& out) {
    int max = 0;
    for (const auto& row : fGotos) {
        if (row.size() > max) {
            max = row.size();
        }
    }
    out << "const char* " << fName << "_MESSAGES[" << fActions.size() << "] = {\n";
    const char* separator = "";
    for (int i = 0; i < fActions.size(); i++) {
        out << separator << "    /* " << i << " */ ";
        auto found = fPushMessages.find(i);
        if (found != fPushMessages.end()) {
            out << '"';
            for (char c : found->second) {
                switch (c) {
                    case '\"': out << "\\\"";
                    default: out << c;
                }
            }
            out << '"';
        }
        else {
            out << "nullptr";
        }
        separator = ",\n";
    }
    out << "\n    };\n";
}

String ParserGenerator::getType(const Node& node) {
    switch (node.fKind) {
        case Node::kChar_Kind: // fall through
        case Node::kCharset_Kind:
            return "char";
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

void ParserGenerator::createWrapper(const String& rawType, std::ofstream& out) {
    String name = String("Wrapper") + std::to_string(fWrappers.size());
    if (fWrappers.find(rawType) != fWrappers.end()) {
        return;
    }
    fWrappers[rawType] = name;
    out << "struct " << name << " : StackEntry {\n";
    out << "    " << name << "(" << rawType << " value) : fValue(value) {}\n";
    out << "    " << rawType << " fValue;\n";
    out << "};\n";
}

String ParserGenerator::wrapper(const String& rawType) {
    return fWrappers[rawType];
}

void ParserGenerator::writeReductions(std::ofstream& out) {
    out << fName << "Output " << fName << "::reduce(int prodId, State* parserState, "
            "bool* die) const {\n";
    out << "    switch (prodId) {\n";
    for (int i = 0; i < fProductions.size(); ++i) {
        const Production& p = fProductions[i];
        out << "        case " << i << ": {\n";
        const char* indentation = "            ";

        if (p.fType.size()) {
            out << indentation << p.fType << " result;\n";
        }
        if (p.fCode.size()) {
            ASSERT(p.fType.size(), "expected production with code to have a type");
            for (int i = p.fNodes.size() - 1; i >= 0; --i) {
                const auto& n = p.fNodes[i];
                if (!creates_state(*n)) {
                    continue;
                }
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
                    out << indentation << "const " << type << " " << name <<
                            " = parserState->fNode->fOutput." << fWrappers[type] << ";\n";
                }
                out << indentation << "parserState->fNode = parserState->fNode->fNext;\n";
            }
        }
        else {
            int count = 0;
            for (const auto& n : p.fNodes) {
                if (creates_state(*n)) {
                    ++count;
                }
            }
            out << indentation << "for (int i = 0; i < " << count <<
                    "; i++) { parserState->fNode = parserState->fNode->fNext; }\n";
        }
        if (p.fType.size()) {
            out << indentation << p.fCode << "return " << fName << "Output(result);\n";
        } else {
            out << indentation << "return " << fName << "Output();\n";
        }
        out << indentation << "}\n";
    }
    out << "        default: abort();\n";
    out << "    }\n";
    out << "}\n";
}

void ParserGenerator::writeStarts(std::ofstream& out) {
    for (auto iter = fStartStates.begin(); iter != fStartStates.end(); ++iter) {
        const Production& p = fProductions[iter->first];
        if (fName == "PandaParser") {
            printf("HACK!\n");
            out << "    bool " << p.fName.substr(0, p.fName.length() - strlen("_START")) <<
                    "(const String& name, const String& text, ParseError* error, "
                        "void* reference = nullptr) {\n";
            out << "        " << fName << "Output tmp;\n";
            out << "         bool result = this->parse(name, text, " << iter->second <<
                    ", &tmp, error, reference);\n";
            out << "        return result;\n";
            out << "    }\n";
            continue;
        }
        out << "    bool " << p.fName.substr(0, p.fName.length() - strlen("_START")) <<
                "(const String& name, const String& text, " << p.fType << "* output, "
                    "ParseError* error, void* reference = nullptr) {\n";
        out << "        " << fName << "Output tmp;\n";
        out << "        bool result = this->parse(name, text, " << iter->second <<
                ", &tmp, error, reference);\n";
        out << "        *output = tmp." << wrapper(p.fType) << ";\n";
        out << "        return result;\n";
        out << "    }\n";
    }
}

void ParserGenerator::generate(const char* hDest, const char* cppDest) {
    this->createParseTables();

    std::ofstream hOut(hDest);
    hOut << "#pragma once\n";
    hOut << "#include \"runtime/GLRParser.h\"\n";
    if (fGrammar.fCode.size()) {
        hOut << fGrammar.fCode;
    }
    // TODO: replace this with something equivalent to boost::variant
    hOut << "struct " << fName << "Output {\n";
    hOut << "    " << fName << "Output() {}\n";
    fWrappers["char"] = "fCharValue";
    hOut << "    char fCharValue;\n";
    hOut << "    " << fName << "Output(char c) : fCharValue(c) {}\n";
    for (const auto& p : fProductions) {
        if (fName == "PandaParser") {
            ((Production&) p).fType = "";
            ((Production&) p).fCode = "";
            printf("HACK!\n");
        }

        if (p.fType.size() && fWrappers.find(p.fType) == fWrappers.end()) {
            fWrappers[p.fType] = "fValue" + std::to_string(fWrappers.size());
            hOut << "    " << p.fType << " " << fWrappers[p.fType] << ";\n";
            hOut << "    " << fName << "Output(" << p.fType << " value) : " << fWrappers[p.fType] <<
                    "(value) {}\n";
        }
    }
    hOut << "};\n";
    hOut << "typedef ParserGenerator::GLRParser<" << fName << "Output>::State State;\n";
    hOut << "typedef ParserGenerator::Action Action;\n";
    hOut << "typedef ParserGenerator::ParseError ParseError;\n";
    hOut << "class " << fName << " : public ParserGenerator::GLRParser<" << fName << "Output> {\n";
    hOut << "public:\n";
    this->writeStarts(hOut);
    hOut << "private:\n";
    hOut << "    const Action& getAction(int stateId, char c) const override;\n";
    hOut << "    int getGoto(int stateId, int productionId) const override;\n";
    hOut << "    int getProductionId(int production) const override;\n";
    hOut << "    const char* getMessage(int stateId) const override;\n";
    hOut << "    " << fName << "Output reduce(int prodId, State* parserState, bool* die) "
            "const override;\n";
    hOut << "};";

    std::ofstream cppOut(cppDest);
    cppOut << "#include \"" << fName << ".h\"\n";
    cppOut << "#include <stdlib.h>\n";
    this->writeProductions(cppOut);
    this->writeActions(cppOut);
    this->writeGotos(cppOut); 
    this->writePushes(cppOut); 
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
    cppOut << "const char* " << fName << "::getMessage(int stateId) const {\n";
    cppOut << "    return " << fName << "_MESSAGES[stateId];\n";
    cppOut << "}\n";
}

}