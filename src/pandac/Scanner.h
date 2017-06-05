#pragma once

#include "Annotations.h"
#include "ASTNode.h"
#include "ErrorReporter.h"
#include "Field.h"
#include "Method.h"
#include "SymbolTable.h"
#include "Type.h"

/**
 * Scans through an AST file, creating symbols for the packages, classes cand methods contained
 * within.
 */
class Scanner {
public:
    /**
     * Stores information about a field's value prior to converting it to an IRNode.
     */
    struct FieldDescriptor {
        // The field in question
        Field& fField;
        // index into the fFieldValues list, from which the field's value is drawn
        int fValueIndex;
        // if this is part of a tuple destructuring, holds tuple indices
        // e.g. in def (a, (b, c)), c would have indices { 0, 1 }.
        // Will be empty for a straight assignment.
        std::vector<int> fTupleIndices;
    };

    Scanner(ErrorReporter* errors)
    : fErrors(*errors) {}

    void scan(ASTNode* file, SymbolTable* root);

    std::vector<std::pair<Class*, const ASTNode*>> fFieldValues;

    std::vector<FieldDescriptor> fFieldDescriptors;

private:
    Annotations convertAnnotations(const ASTNode& a);

    Type convertType(const ASTNode& t, const SymbolTable& st);
    
    Method::Parameter convertParameter(const ASTNode& param, const SymbolTable& st);

    void convertDeclaration(const Annotations& annotations, Field::Kind kind, const ASTNode& d,
            Class* owner, std::vector<int> tupleIndices);

    void convertField(ASTNode* f, SymbolTable* st, Class* owner);

    void convertMethod(ASTNode* m, SymbolTable* st, Class* owner);

    void convertInit(ASTNode* i, SymbolTable* st, Class* owner);

    void scanClass(String contextName, std::vector<Class::UsesDeclaration> uses,
            SymbolTable* parent, ASTNode* cl);

    void error(Position position, String msg);

    ErrorReporter& fErrors;
};
