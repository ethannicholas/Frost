#pragma once

#include "IRNode.h"
#include <vector>

struct IRFile {
    IRNode fRoot;

    // for lifetime purposes
    std::vector<std::unique_ptr<Symbol>> fSymbols;
};
