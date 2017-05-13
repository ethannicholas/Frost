#pragma once

#include <memory>
#include <unordered_set>
#include <vector>
#include "ParserGeneratorNode.h"

namespace ParserGenerator {

struct Production {
    Production() {}

    Production(String name, bool isStart, String type, std::vector<std::shared_ptr<Node>> nodes,
            std::unordered_set<char> excludes, String code)
    : fName(std::move(name))
    , fIsStart(isStart)
    , fType(std::move(type))
    , fNodes(std::move(nodes))
    , fExcludes(excludes)
    , fCode(std::move(code)) {}

    String fName;
    bool fIsStart;
    String fType;
    std::vector<std::shared_ptr<Node>> fNodes;
    std::unordered_set<char> fExcludes;
    String fCode;
};

}