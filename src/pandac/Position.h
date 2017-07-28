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
            String name = *fName;
            int idx = name.find_last_of("/");
            if (idx != std::string::npos) {
                name = name.substr(idx + 1);
            }
            return name + ":" + std::to_string(fLine) + ":" + std::to_string(fColumn);
        }
        return std::to_string(fLine) + ":" + std::to_string(fColumn);
    }

    bool operator<(const Position& other) const {
        return description() < other.description();
    }

    const String* fName;
    int fLine;
    int fColumn;
};
