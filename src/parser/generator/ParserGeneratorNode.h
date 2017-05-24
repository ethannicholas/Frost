#pragma once

#include "ParserUtil.h"

#include <unordered_set>

namespace ParserGenerator {

struct Node {
    enum class Kind {
        IDENTIFIER,
        CHARSET,
        LITERAL,
        CHAR,
        CUT,
        PUSH,
        POP,
        END_OF_FILE
    };

    Node(Kind kind)
    : fKind(kind) {}

    Node(Kind kind, String label)
    : fKind(kind)
    , fLabel(std::move(label)) {}

    virtual int hash() const = 0;

    virtual bool operator==(const Node& other) const = 0;

    bool operator!=(const Node& other) const {
        return !(*this == other);
    }

    Kind fKind;
    String fLabel;
};

struct IdentifierNode : public Node {
    IdentifierNode(String label, String identifier) 
    : INHERITED(Kind::IDENTIFIER, std::move(label))
    , fIdentifier(std::move(identifier)) { ASSERT(fIdentifier.size()); }

    IdentifierNode(String identifier) 
    : INHERITED(Kind::IDENTIFIER)
    , fIdentifier(std::move(identifier)) { ASSERT(fIdentifier.size()); }

    String fIdentifier;

    int hash() const override {
        return std::hash<String>{}(fIdentifier);
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind && fIdentifier == ((IdentifierNode&) other).fIdentifier;
    }

    typedef Node INHERITED;
};

struct CharsetNode : public Node {
    CharsetNode(String label, std::unordered_set<char> chars) 
    : INHERITED(Kind::CHARSET, std::move(label))
    , fChars(std::move(chars)) {}

    CharsetNode(std::unordered_set<char> chars) 
    : INHERITED(Kind::CHARSET)
    , fChars(std::move(chars)) {}

    std::unordered_set<char> fChars;

    int hash() const override {
        return std::hash<String>{}(fLabel) ^ fChars.size();
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind && fChars == ((CharsetNode&) other).fChars;
    }


    typedef Node INHERITED;
};

struct LiteralNode : public Node {
    LiteralNode(String literal) 
    : INHERITED(Kind::LITERAL)
    , fLiteral(literal) {}

    String fLiteral;

    int hash() const override {
        return std::hash<String>{}(fLiteral);
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind && fLiteral == ((LiteralNode&) other).fLiteral;
    }

    typedef Node INHERITED;
};

struct CharNode : public Node {
    CharNode(char c) 
    : INHERITED(Kind::CHAR)
    , fChar(c) {}

    char fChar;

    int hash() const override {
        return fChar;
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind && fChar == ((CharNode&) other).fChar;
    }

    typedef Node INHERITED;
};

struct CutNode : public Node {
    CutNode() 
    : INHERITED(Kind::CUT) {}

    int hash() const override {
        return 0;
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind;
    }

    typedef Node INHERITED;
};

struct PushNode : public Node {
    PushNode(String msg) 
    : INHERITED(Kind::PUSH)
    , fMessage(msg) {}

    String fMessage;

    int hash() const override {
        return std::hash<String>{}(fMessage);
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind && fMessage == ((PushNode&) other).fMessage;
    }

    typedef Node INHERITED;
};

struct PopNode : public Node {
    PopNode() 
    : INHERITED(Kind::POP) {}

    int hash() const override {
        return 0;
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind;
    }

    typedef Node INHERITED;
};

struct EOFNode : public Node {
    EOFNode() 
    : INHERITED(Kind::END_OF_FILE) {}

    int hash() const override {
        return 1;
    }

    bool operator==(const Node& other) const override {
        return fKind == other.fKind;
    }

    typedef Node INHERITED;
};

struct NodePointerHash {
    size_t operator()(const Node* n) const {
        return n->hash();
    }
};

struct NodePointerEqual {
    bool operator()(const Node* lhs, const Node* rhs) const {
        return *lhs == *rhs;
    }
};

}
