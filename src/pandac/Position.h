#pragma once

#include "Util.h"

struct Position {
    Position()
    : fName(nullptr)
    , fLine(-1)
    , fColumn(-1) {}

    Position(const String* name, int line, int column)
    : fName(name)
    , fLine(line)
    , fColumn(column) {}

    String description() const {
        if (fName) {
            return *fName + ":" + std::to_string(fLine) + ":" + std::to_string(fColumn);
        }
        return std::to_string(fLine) + ":" + std::to_string(fColumn);
    }

    const String* fName;
    int fLine;
    int fColumn;
};
