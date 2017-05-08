#pragma once

#include "Position.h"
#include "ParserUtil.h"

namespace ParserGenerator {

class ErrorReporter {
public:
    void error(Position position, String msg) {
        printf("%d: %s\n", position.fLine, msg.c_str());
    }
};

}