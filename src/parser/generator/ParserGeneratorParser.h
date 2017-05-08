#pragma once

#include "ParserGeneratorErrorReporter.h"
#include "ParserGeneratorGrammar.h"
#include "ParserGeneratorProduction.h"
#include "ParserGeneratorNode.h"
#include "ParserGeneratorToken.h"

#define START_CHAR   9
#define END_CHAR   127

namespace ParserGenerator {

class Parser {
public:
    Parser(String text, ErrorReporter* errors);

    ~Parser();

    std::unique_ptr<Node> term();

    bool code(String* result);

    bool type(String* result);

    bool production(Production* result);

    bool grammar(Grammar* result);

private:
    Token nextRawToken();

    Token nextToken();

    void pushback(Token t);

    Token peek();

    bool expect(Token::Kind kind, const char* expected, Token* result = nullptr);

    bool checkNext(Token::Kind kind, Token* result = nullptr);

    Token fPushback;
    void* fScanner;
    void* fBuffer;
    ErrorReporter& fErrors;
};

}
