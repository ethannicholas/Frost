#pragma once

#include "Position.h"
#include "Util.h"

class ErrorReporter {
public:
    void error(Position p, String msg) {
        printf("%s: %s\n", p.description().c_str(), msg.c_str());
        ++fErrorCount;
    }

    int fErrorCount = 0;
};
