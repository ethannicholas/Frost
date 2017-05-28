#pragma once

#include "Method.h"
#include "Symbol.h"

#include <vector>

struct Methods : public Symbol {
    Methods(std::vector<std::unique_ptr<Method>> methods)
    : INHERITED(Position(), Kind::METHODS, methods[0]->fName)
    , fMethods(std::move(methods)) {}

    std::vector<std::unique_ptr<Method>> fMethods;

    typedef Symbol INHERITED;
};