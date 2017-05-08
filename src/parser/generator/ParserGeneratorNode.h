#pragma once

#include "ParserUtil.h"

#include <unordered_set>

namespace ParserGenerator {

struct Node {
    enum Kind {
        kIdentifier_Kind,
        kCharset_Kind,
        kLiteral_Kind,
        kChar_Kind,
        kCut_Kind,
        kEOF_Kind
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
    : INHERITED(kIdentifier_Kind, std::move(label))
    , fIdentifier(std::move(identifier)) { ASSERT(fIdentifier.size(), "empty identifier"); }

    IdentifierNode(String identifier) 
    : INHERITED(kIdentifier_Kind)
    , fIdentifier(std::move(identifier)) { ASSERT(fIdentifier.size(), "empty identifier"); }

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
    : INHERITED(kCharset_Kind, std::move(label))
    , fChars(std::move(chars)) {}

    CharsetNode(std::unordered_set<char> chars) 
    : INHERITED(kCharset_Kind)
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
    : INHERITED(kLiteral_Kind)
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
    : INHERITED(kChar_Kind)
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
    : INHERITED(kCut_Kind) {}

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
    : INHERITED(kEOF_Kind) {}

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
