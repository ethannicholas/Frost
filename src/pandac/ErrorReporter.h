#pragma once

#include "Position.h"
#include "Util.h"

class ErrorReporter {
public:
    void error(Position p, String msg) {
        printf("%s: error: %s\n", p.description().c_str(), msg.c_str());
        ++fErrorCount;
        ASSERT(p.fLine >= 1 && p.fColumn >= 1);
        ASSERT(msg.size());
    }

    int fErrorCount = 0;
};
