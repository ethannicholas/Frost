/*

    This file is IGNORED during the build process!

    As this file is updated so infrequently, to avoid a dependency on flex you must manually
    regenerate the lex.parser.c file by running:

        flex parser.flex

*/

%option prefix="parser"
%option reentrant
%option yylineno
%option never-interactive
%option nounistd

%{
#include "ParserGeneratorToken.h"
%}

RANGECHAR [^\\\]\n\r]|(\\[^\n\r])
RANGE {RANGECHAR}("-"[{RANGECHAR}])?

LITERALCHAR [^\\']|\\[trn\\']

%%

"::"                    { return ParserGenerator::Token::COLONCOLON; }
":"                     { return ParserGenerator::Token::COLON; }
"."                     { return ParserGenerator::Token::DOT; }
","                     { return ParserGenerator::Token::COMMA; }
"<"                     { return ParserGenerator::Token::LT; }
">"                     { return ParserGenerator::Token::GT; }
"!"                     { return ParserGenerator::Token::NOT; }
"^"                     { return ParserGenerator::Token::CARET; }
"{"                     { return ParserGenerator::Token::LBRACE; }
"}"                     { return ParserGenerator::Token::RBRACE; }
"="                     { return ParserGenerator::Token::EQ; }
";"                     { return ParserGenerator::Token::SEMICOLON; }
"?"                     { return ParserGenerator::Token::QUESTION; }
"["{RANGE}*"]"        { return ParserGenerator::Token::CHARSET; }
"'"{LITERALCHAR}*"'"    { return ParserGenerator::Token::LITERAL; }
[@A-Za-z_][A-Za-z0-9_]* { return ParserGenerator::Token::IDENTIFIER; }

[ \t\r\n]+              { return ParserGenerator::Token::WHITESPACE; }

. { return ParserGenerator::Token::INVALID_TOKEN; }

%%

int parserwrap(yyscan_t scanner) {
    return 1; // terminate
}
