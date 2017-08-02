#pragma once

#include "Class.h"
#include "IRNode.h"
#include "Method.h"
#include "Variable.h"

#include <ostream>
#include <sstream>

class Compiler;

class CodeGenerator {
public:
    virtual void start(Compiler* compiler) = 0;

    virtual void writeClass(Class& cl) = 0;

    virtual void writeMethodDeclaration(Method& method) = 0;

    virtual void writeMethod(const Method& method, const IRNode& body) = 0;

    virtual void addGlobalField(Field* f) = 0;

    virtual void finish() = 0;
};
