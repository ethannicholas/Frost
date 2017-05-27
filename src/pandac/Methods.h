#pragma once

#include "MethodStub.h"
#include "Symbol.h"

#include <vector>

struct Methods : public Symbol {
    Methods(std::vector<std::unique_ptr<MethodStub>> methods)
    : INHERITED(Position(), Kind::METHODS, methods[0]->fName)
    , fMethods(std::move(methods)) {}

    std::vector<std::unique_ptr<MethodStub>> fMethods;

    typedef Symbol INHERITED;
};