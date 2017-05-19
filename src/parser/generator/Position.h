#pragma once

namespace ParserGenerator {

struct Position {
    Position()
    : fLine(-1)
    , fColumn(-1) {}

    Position(String* name, int line, int column)
    : fName(name)
    , fLine(line)
    , fColumn(column) {}

    String* fName;
    int fLine;
    int fColumn;
};

}