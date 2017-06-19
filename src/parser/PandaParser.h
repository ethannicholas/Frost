#include "Token.h"

#include "Annotations.h"
#include "ASTNode.h"
#include "ErrorReporter.h"

#include <stack>

typedef void* yyscan_t;

struct yy_buffer_state;

typedef struct yy_buffer_state* YY_BUFFER_STATE;

int pandalex_init(yyscan_t* scanner);

int pandalex_destroy(yyscan_t yyscanner);

void panda_delete_buffer(YY_BUFFER_STATE b, yyscan_t yyscanner);

int pandalex(yyscan_t yyscanner);

YY_BUFFER_STATE panda_scan_string(const char* yy_str, yyscan_t yyscanner);

char* pandaget_text(yyscan_t yyscanner);

class PandaParser {
public:
    PandaParser(ErrorReporter* errors);

    ~PandaParser();

    bool file(const String* name, const String& text, ASTNode* outResult);

private:
    void advancePosition(const char* text);

    Token nextRawToken();

    Token nextToken();

    void pushback(Token t);

    Token peek();

    bool checkNext(Token::Kind kind, Token* result = nullptr);

    bool expect(Token::Kind kind, const char* expected, Token* result = nullptr);

    bool expect(Token::Kind kind, String expected, Token* result);

    void error(Position position, String msg);

    // Begins a speculative parse. Must call either rewind() or accept() prior to the next call to
    // startSpeculative().
    void startSpeculative();

    // Undo all tokens read since the start of startSpeculative().
    void rewind();

    // Accept a speculative parse.
    void accept();

    // ----

    bool additiveExpression(ASTNode* outResult);

    bool andExpression(ASTNode* outResult);

    bool annotations(ASTNode* outResult);

    bool anyLoop(ASTNode* outResult, String label);

    bool assertStatement(ASTNode* outResult);

    bool block(ASTNode* outResult);

    bool bodyEntry(ASTNode* outResult);

    bool breakStatement(ASTNode* outResult);

    bool callExpression(ASTNode* outResult);

    bool choiceDeclaration(ASTNode* outResult, ASTNode doccomment = ASTNode(),
            ASTNode annotations = ASTNode());

    bool classDeclaration(ASTNode* outResult, ASTNode doccomment = ASTNode(),
            ASTNode annotations = ASTNode());

    bool classMember(ASTNode* outResult);

    bool comparisonExpression(ASTNode* outResult);

    bool continueStatement(ASTNode* outResult);

    bool declaration(ASTNode* outResult);

    bool doccomment(ASTNode* outResult);
    
    bool doLoop(ASTNode* outResult, String label = "");

    bool exponentExpression(ASTNode* outResult);

    bool expression(ASTNode* outResult);

    bool expressionOrAssignment(ASTNode* outResult);

    bool fieldDeclaration(ASTNode* outResult, ASTNode doccomment, ASTNode annotations);

    bool forLoop(ASTNode* outResult, String label = "");

    bool functionDeclaration(ASTNode* outResult, ASTNode doccomment = ASTNode(),
            ASTNode annotations = ASTNode());

    bool genericsDeclaration(ASTNode* outResult);

    bool ifStatement(ASTNode* outResult);

    bool initDeclaration(ASTNode* outResult, ASTNode doccomment = ASTNode(),
            ASTNode annotations = ASTNode());

    bool interfaces(ASTNode* outResult);

    bool interfaceDeclaration(ASTNode* outResult, ASTNode doccomment = ASTNode(),
            ASTNode annotations = ASTNode());

    bool invariant(ASTNode* outResult);

    bool loopLoop(ASTNode* outResult, String label = "");

    bool matchStatement(ASTNode* outResult);

    bool methodDeclaration(ASTNode* outResult, ASTNode doccomment = ASTNode(),
            ASTNode annotations = ASTNode());

    bool methodName(String* outResult);

    bool multiplicativeExpression(ASTNode* outResult);

    bool packageDeclaration(ASTNode* outResult);

    bool parameter(ASTNode* outResult);

    bool parameters(ASTNode* outResult);

    bool postconditions(ASTNode* outResult);

    bool prefixExpression(ASTNode* outResult);

    bool rangeExpression(ASTNode* outResult);

    bool returnStatement(ASTNode* outResult);

    bool singleVar(ASTNode* outResult);

    bool statement(ASTNode* outResult);

    bool target(ASTNode* outResult);

    bool terminalStatement(ASTNode* outResult);

    bool string(ASTNode* outResult);

    bool term(ASTNode* outResult);

    bool type(ASTNode* outResult);

    bool typeDeclaration(ASTNode* outResult);

    bool usesDeclaration(ASTNode* outResult);

    bool varDeclaration(ASTNode* outResult);

    bool whileLoop(ASTNode* outResult, String label = "");

    ErrorReporter* fErrors;
    const String* fName;
    int fLine;
    int fColumn;
    yyscan_t fScanner;
    YY_BUFFER_STATE fBuffer;
    std::vector<Token> fPushbackBuffer;
    bool fInSpeculative = false;
    std::vector<Token> fSpeculativeBuffer;
    std::stack<bool> fCommaSeparatedExpressionContext;

    friend class AutoCommaContext;
};
