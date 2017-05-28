#pragma once

#include "Class.h"
#include "IRNode.h"
#include "Method.h"
#include "Variable.h"

#include <ostream>
#include <sstream>

class CodeGenerator {
public:
    virtual void writeMethod(const Class& cl, const Method& method, const IRNode& body) = 0;
};
