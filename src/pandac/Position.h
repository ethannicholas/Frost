#pragma once

#include "ParserUtil.h"

struct Position {
    Position()
    : fName(nullptr)
    , fLine(-1)
    , fColumn(-1) {}

    Position(String* name, int line, int column)
    : fName(name)
    , fLine(line)
    , fColumn(column) {}

    String description() {
        if (fName) {
            return *fName + ":" + std::to_string(fLine) + ":" + std::to_string(fColumn);
        }
        return std::to_string(fLine) + ":" + std::to_string(fColumn);
    }

    String* fName;
    int fLine;
    int fColumn;
};
