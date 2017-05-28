#pragma once

#include "Annotations.h"
#include "ASTNode.h"
#include "ErrorReporter.h"
#include "Method.h"
#include "SymbolTable.h"
#include "Type.h"

/**
 * Scans through an AST file, creating symbols for the packages, classes cand methods contained
 * within.
 */
class Scanner {
public:
    Scanner(ErrorReporter* errors)
    : fErrors(*errors) {}

    void scan(ASTNode* file, SymbolTable* root);

private:
    Annotations convertAnnotations(const ASTNode& a);

    Type convertType(const ASTNode& t, const SymbolTable& st);
    
    Method::Parameter convertParameter(const ASTNode& param, const SymbolTable& st);

    std::unique_ptr<Method> convertMethod(ASTNode* m, const SymbolTable& st, const Class* owner);

    std::unique_ptr<Method> convertInit(ASTNode* i, const SymbolTable& st, const Class* owner);

    void scanClass(String contextName, SymbolTable* parent, ASTNode* cl);

    void error(Position position, String msg);

    ErrorReporter& fErrors;
};
