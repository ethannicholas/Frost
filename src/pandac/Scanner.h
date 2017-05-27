#pragma once

#include "ASTNode.h"
#include "MethodStub.h"
#include "SymbolTable.h"
#include "Type.h"

class Scanner {
public:
    /**
     * Scans through an AST file, creating symbols for the packages, classes cand methods contained
     * within.
     */
    void scan(ASTNode* file, SymbolTable* root);

private:
    Type convertType(const ASTNode& t, const SymbolTable& st);
    
    MethodStub::Parameter convertParameter(const ASTNode& param, const SymbolTable& st);

    std::unique_ptr<MethodStub> convertMethod(ASTNode* m, const SymbolTable& st);

    void scanClass(String contextName, SymbolTable* parent, ASTNode* cl);
};
