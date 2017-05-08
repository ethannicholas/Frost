#pragma once

namespace ParserGenerator {

struct Position {
    Position()
    : fLine(-1) {}

    Position(int line)
    : fLine(line) {}

    int fLine;
};

}