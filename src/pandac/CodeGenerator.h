#pragma once

#include "ClassStub.h"
#include "IRNode.h"
#include "MethodStub.h"
#include "Variable.h"

#include <ostream>
#include <sstream>

class CodeGenerator {
public:
    virtual void writeMethod(const ClassStub& cl, const MethodStub& method, const IRNode& body) = 0;
};
