#pragma once

#include "ParserGeneratorProduction.h"

namespace ParserGenerator {

struct Grammar {
    Grammar() {}

    Grammar(String code, std::vector<Production> productions)
    : fCode(code)
    , fProductions(std::move(productions)) {}

    String fCode;
    std::vector<Production> fProductions;
};

}