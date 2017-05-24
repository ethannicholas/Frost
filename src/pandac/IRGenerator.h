#pragma once

#include "ASTNode.h"
#include "IRFile.h"
#include "IRNode.h"
#include "MethodStub.h"
#include "Symbol.h"
#include "SymbolTable.h"
#include "Type.h"
#include "Util.h"

class IRGenerator {
public:
    IRGenerator() {
        fSymbolTable->add(std::unique_ptr<Symbol>(new Type(Type::Category::BUILTIN_INT,
                "builtin_int8", 8)));
        fSymbolTable->add(std::unique_ptr<Symbol>(new Type(Type::Category::BUILTIN_INT,
                "builtin_int16", 16)));
        fSymbolTable->add(std::unique_ptr<Symbol>(new Type(Type::Category::BUILTIN_INT,
                "builtin_int32", 32)));
        fSymbolTable->add(std::unique_ptr<Symbol>(new Type(Type::Category::BUILTIN_INT,
                "builtin_int64", 64)));
        fSymbolTable->add(std::unique_ptr<Symbol>(new MethodStub("print", 
                { (Type&) *(*fSymbolTable)["builtin_int64"] }, Type::Void())));
    }

    // for all convert methods: a true result means "successful enough to have produced output",
    // false means failure. Success may still have generated errors.

    bool coerce(IRNode* expr, const Type& type, IRNode* out);

    bool call(IRNode* method, std::vector<IRNode>* args, IRNode* out);

    bool foldBits(Position p, const IRNode& left, Operator op, const IRNode& right, IRNode* out);

    bool foldInts(Position p, const IRNode& left, Operator op, const IRNode& right, IRNode* out);

    bool convertBinary(const ASTNode& b, IRNode* out);

    bool convertCall(const ASTNode& b, IRNode* out);

    bool convertIdentifier(const ASTNode& i, IRNode* out);

    bool convertExpression(const ASTNode& e, IRNode* out);

    bool convertBodyEntry(const ASTNode& bodyEntry, IRNode* out);

    bool convertParameter(const ASTNode& p, IRNode* out);

    bool convertIf(const ASTNode& p, IRNode* out);

    bool convertTarget(const ASTNode& t, IRNode* value, IRNode* out);

    bool convertDeclaration(const ASTNode& d, IRNode* out);

    bool convertVar(const ASTNode& v, IRNode* out);

    bool convertStatement(const ASTNode& p, IRNode* out);

    bool convertBlock(const ASTNode& p, IRNode* out);

    bool convertType(const ASTNode& method, IRNode* out);

    bool convertMethod(const ASTNode& method, IRNode* out);

    bool convertFile(const ASTNode& file, IRFile* out);

private:
    bool doConvertExpression(const ASTNode& e, IRNode* out);
    
    void error(Position position, String msg);

    std::shared_ptr<SymbolTable> fSymbolTable = std::make_shared<SymbolTable>();
};