#pragma once

#include "ASTNode.h"
#include "CodeGenerator.h"
#include "ErrorReporter.h"
#include "IRNode.h"
#include "Method.h"
#include "Scanner.h"
#include "Symbol.h"
#include "SymbolTable.h"
#include "Type.h"
#include "Util.h"

#include <stack>
#include <unordered_map>

class Compiler {
public:
    Compiler(CodeGenerator* codeGenerator, ErrorReporter* errors)
    : fScanner(errors)
    , fCodeGenerator(*codeGenerator)
    , fErrors(*errors) {
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_UINT,
                "builtin_bit", 1)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_INT,
                "builtin_int8", 8)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_INT,
                "builtin_int16", 16)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_INT,
                "builtin_int32", 32)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_INT,
                "builtin_int64", 64)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_UINT,
                "builtin_uint8", 8)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_UINT,
                "builtin_uint16", 16)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_UINT,
                "builtin_uint32", 32)));
        fRoot.add(std::unique_ptr<Symbol>(new Type(Position(), Type::Category::BUILTIN_UINT,
                "builtin_uint64", 64)));
        static Class* builtin = new Class(Position(), {}, {}, Annotations(), "builtin", &fRoot,
                Type());
        fRoot.add(std::unique_ptr<Symbol>(new Method(Position(), builtin,
                Annotations(Annotations::CLASS), Method::Kind::METHOD, "print",
                { { "v", Type::Int64() } }, Type::Void(), ASTNode())));
    }

    void scan(ASTNode* file);

    void compile();

    void resolveType(const SymbolTable& st, Type* t);

    Class* resolveClass(const SymbolTable& st, Type t);

    std::vector<const Field*> getAllFields(const Class& cl);

private:
    // for all convert methods: a true result means "successful enough to have produced output",
    // false means failure. Success may still have generated errors.

    bool coerce(IRNode* expr, const Type& type, IRNode* out);

    /**
     * Determines the "cost" of converting a type to a different type. The cost is a number with no
     * intrinsic meaning beyond "low costs are better than high costs". Returns INT_MAX in the event
     * that no type coercion is possible.
     */
    int coercionCost(const Type& type, const Type& target);

    /**
     * As coercionCost(Type, Type), but determines the cost of converting a value to a different
     * type. This variant handles more conversion situations than the (Type, Type) variant, because
     * it handles complex situations such as unresolved methods.
     */
    int coercionCost(const IRNode& node, const Type& target);

    /**
     * Determines which method(s) are the best match for the provided arguments and (optional)
     * required return type, storing them in outMatches. Returns a number representing the match
     * cost of the method call (INT_MAX in the case where no matches were found.)
     */
    int matchMethods(const std::vector<const Method*>& methods, const std::vector<IRNode>& args,
            const Type* returnType, std::vector<const Method*>* outMatches);

    /**
     * Determine the "cost" (see coercionCost) of calling a method with the provided parameters and
     * (optional) expected return type. If returnType is null, it is ignored for matching purposes.
     */
    int callCost(const Method& method, const std::vector<IRNode>& args, const Type* returnType);

    void reportNoMatch(Position position, const String& name, const std::vector<IRNode>& args,
            const Type* returnType);

    void reportAmbiguousMatch(Position position, const std::vector<const Method*>& methods,
            const std::vector<IRNode>& args, const Type* returnType);

    bool call(IRNode method, std::vector<IRNode> args, IRNode* out);

    bool foldBits(Position p, const IRNode& left, Operator op, const IRNode& right, IRNode* out);

    bool foldInts(Position p, const IRNode& left, Operator op, const IRNode& right, IRNode* out);

    IRNode operatorCall(IRNode* left, const Method& m, IRNode* right);

    int operatorCost(IRNode* left, const Method& m, IRNode* right);

    bool operatorCall(IRNode* left, Operator op, IRNode* right, IRNode* outResult);

    bool convertBinary(const ASTNode& b, IRNode* out);

    bool convertPrefix(Position p, Operator op, IRNode base, IRNode* out);

    bool convertPrefix(const ASTNode& p, IRNode* out);

    bool convertCall(const ASTNode& b, IRNode* out);

    /**
     * Adds a method to a vector, replacing an existing match if present.
     */
    void addMethod(Position p, const SymbolTable& st, Method* m, std::vector<IRNode>* methods);

    /**
     * Adds all methods matching the specified name to the vector, recursively across symbol tables.
     * More recent (i.e. closer to the provided symbol table) method versions will override older
     * ones, as in inheritance.
     */
    void addAllMethods(Position p, const SymbolTable& st, const String& name,
            std::vector<IRNode>* methods, bool start = true);

    void symbolRef(Position p, const SymbolTable& st, Symbol* symbol, IRNode* out,
            IRNode* target = nullptr);

    // as symbolRef, but expands to include all superclass / interface methods with that name
    void symbolRefAllMethods(Position p, const SymbolTable& st, Symbol* symbol, IRNode* out,
            IRNode* target = nullptr);

    bool convertIdentifier(const ASTNode& i, IRNode* out);

    bool convertDot(const ASTNode& d, IRNode* out);

    bool convertSelf(const ASTNode& s, IRNode* out);

    bool convertExpression(const ASTNode& e, IRNode* out);

    IRNode resolve(IRNode* value);

    bool doConvertExpression(const ASTNode& e, IRNode* out);
    
    bool convertParameter(const ASTNode& p, IRNode* out);

    bool convertIf(const ASTNode& p, IRNode* out);

    bool convertTarget(const ASTNode& t, IRNode* value, IRNode* out);

    bool convertDeclaration(const ASTNode& d, IRNode* out);

    bool convertVar(const ASTNode& v, IRNode* out);

    bool convertReturn(const ASTNode& s, IRNode* out);

    bool convertStatement(const ASTNode& p, IRNode* out);

    bool convertBlock(const ASTNode& p, IRNode* out);

    bool convertType(const ASTNode& method, IRNode* out);

    void compile(const SymbolTable& parent, const Method& method);

    void compile(const SymbolTable& symbols);

    void resolveTypes(Method* m);

    void findClassesAndResolveTypes(SymbolTable& symbols);

    void resolveTypes(SymbolTable& symbols);

    void buildVTable(Class& cl);

    void buildVTables(SymbolTable& symbols);

    void processFieldValues();

    void error(Position position, String msg);

    Scanner fScanner;
    
    CodeGenerator& fCodeGenerator;

    ErrorReporter& fErrors;

    SymbolTable fRoot;

    SymbolTable* fSymbolTable;

    std::stack<Method*> fCurrentMethod;

    std::stack<Class*> fCurrentClass;

    std::unordered_map<String, Class*> fClasses;
};