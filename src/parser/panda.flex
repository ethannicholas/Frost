%option prefix="panda"
%option reentrant
%option never-interactive
%option nounistd

    #include "Token.h"

DIGIT  [0-9]
LETTER [a-zA-Z_$]

%%

{DIGIT}+ { return (int) Token::Kind::DECIMAL; }

"0b"[01]+ { return (int) Token::Kind::BINARY; }

"0x"[0-9A-Fa-f]+ { return (int) Token::Kind::HEX; }

(({DIGIT}*(\.{DIGIT}+)|{DIGIT}+(\.{DIGIT}+)?)([eE][+-]?[0-9]+)?) { 
    return (int) Token::Kind::FLOAT;
}

--[^\n]* { return (int) Token::Kind::LINE_COMMENT; }

"-*" { return (int) Token::Kind::BLOCK_COMMENT; }

"*-" { return (int) Token::Kind::BLOCK_COMMENT_END; }

"==="[=]* { return (int) Token::Kind::DOC_COMMENT; }

['] { return (int) Token::Kind::SINGLE_QUOTE; }

["] { return (int) Token::Kind::DOUBLE_QUOTE; }

"package"     { return (int) Token::Kind::PACKAGE; }
"uses"        { return (int) Token::Kind::USES; }
"as"          { return (int) Token::Kind::AS; }
"class"       { return (int) Token::Kind::CLASS; }
"interface"   { return (int) Token::Kind::INTERFACE; }
"choice"      { return (int) Token::Kind::CHOICE; }
"function"    { return (int) Token::Kind::FUNCTION; }
"method"      { return (int) Token::Kind::METHOD; }
"init"        { return (int) Token::Kind::INIT; }
"var"         { return (int) Token::Kind::VAR; }
"def"         { return (int) Token::Kind::DEF; }
"property"    { return (int) Token::Kind::PROPERTY; }
"constant"    { return (int) Token::Kind::CONSTANT; }
"return"      { return (int) Token::Kind::RETURN; }
"break"       { return (int) Token::Kind::BREAK; }
"continue"    { return (int) Token::Kind::CONTINUE; }
"do"          { return (int) Token::Kind::DO; }
"while"       { return (int) Token::Kind::WHILE; }
"for"         { return (int) Token::Kind::FOR; }
"by"          { return (int) Token::Kind::BY; }
"in"          { return (int) Token::Kind::IN; }
"loop"        { return (int) Token::Kind::LOOP; }
"if"          { return (int) Token::Kind::IF; }
"else"        { return (int) Token::Kind::ELSE; }
"true"        { return (int) Token::Kind::TRUE_LITERAL; }
"false"       { return (int) Token::Kind::FALSE_LITERAL; }
"null"        { return (int) Token::Kind::NULL_LITERAL; }
"new"         { return (int) Token::Kind::NEW; }
"assert"      { return (int) Token::Kind::ASSERT; }
"unreachable" { return (int) Token::Kind::UNREACHABLE; }
"match"       { return (int) Token::Kind::MATCH; }
"when"        { return (int) Token::Kind::WHEN; }
"default"     { return (int) Token::Kind::DEFAULT; }
"self"        { return (int) Token::Kind::SELF; }
"super"       { return (int) Token::Kind::SUPER; }
"@pre"        { return (int) Token::Kind::PRE; }
"_"           { return (int) Token::Kind::UNDERSCORE; }
"!"           { return (int) Token::Kind::NOT; }
"!!"          { return (int) Token::Kind::BITWISENOT; }
"+"           { return (int) Token::Kind::ADD; }
"-"           { return (int) Token::Kind::SUB; }
"*"           { return (int) Token::Kind::MUL; }
"/"           { return (int) Token::Kind::DIV; }
"//"          { return (int) Token::Kind::INTDIV; }
"%"           { return (int) Token::Kind::REM; }
"^"           { return (int) Token::Kind::POW; }
"="           { return (int) Token::Kind::EQ; }
"!="          { return (int) Token::Kind::NEQ; }
"=="          { return (int) Token::Kind::IDENTITY; }
"!=="         { return (int) Token::Kind::NIDENTITY; }
"<"           { return (int) Token::Kind::LT; }
">"           { return (int) Token::Kind::GT; }
"<="          { return (int) Token::Kind::LTEQ; }
">="          { return (int) Token::Kind::GTEQ; }
"&"           { return (int) Token::Kind::AND; }
"&&"          { return (int) Token::Kind::BITWISEAND; }
"|"           { return (int) Token::Kind::OR; }
"||"          { return (int) Token::Kind::BITWISEOR; }
"~"           { return (int) Token::Kind::XOR; }
"~~"          { return (int) Token::Kind::BITWISEXOR; }
"<<"          { return (int) Token::Kind::SHIFTLEFT; }
":="          { return (int) Token::Kind::ASSIGNMENT; }
"+="          { return (int) Token::Kind::ADDEQ; }
"-="          { return (int) Token::Kind::SUBEQ; }
"*="          { return (int) Token::Kind::MULEQ; }
"/="          { return (int) Token::Kind::DIVEQ; }
"%="          { return (int) Token::Kind::REMEQ; }
"//="         { return (int) Token::Kind::INTDIVEQ; }
"|="          { return (int) Token::Kind::OREQ; }
"||="         { return (int) Token::Kind::BITWISEOREQ; }
"&="          { return (int) Token::Kind::ANDEQ; }
"&&="         { return (int) Token::Kind::BITWISEANDEQ; }
"~="          { return (int) Token::Kind::XOREQ; }
"~~="         { return (int) Token::Kind::BITWISEXOREQ; }
"<<="         { return (int) Token::Kind::SHIFTLEFTEQ; }
">>="         { return (int) Token::Kind::SHIFTRIGHTEQ; }
"^="          { return (int) Token::Kind::POWEQ; }
"->"          { return (int) Token::Kind::CAST; }
"-?>"         { return (int) Token::Kind::INSTANCEOF; }
"-!>"         { return (int) Token::Kind::NINSTANCEOF; }
"=>"          { return (int) Token::Kind::YIELDS; }
"=&>"         { return (int) Token::Kind::YIELDS_METHOD; }
"=>*"         { return (int) Token::Kind::YIELDS_IMMUTABLE; }
"=&>*"        { return (int) Token::Kind::YIELDS_METHOD_IMMUTABLE; }
"?"           { return (int) Token::Kind::QUESTION; }
":"           { return (int) Token::Kind::COLON; }
".."          { return (int) Token::Kind::DOTDOT; }
"..."         { return (int) Token::Kind::ELLIPSIS; }
"."           { return (int) Token::Kind::DOT; }
"{"           { return (int) Token::Kind::LBRACE; }
"}"           { return (int) Token::Kind::RBRACE; }
"["           { return (int) Token::Kind::LBRACKET; }
"]"           { return (int) Token::Kind::RBRACKET; }
"("           { return (int) Token::Kind::LPAREN; }
")"           { return (int) Token::Kind::RPAREN; }
","           { return (int) Token::Kind::COMMA; }

[a-zA-Z_$][a-zA-Z0-9_$]* { return (int) Token::Kind::IDENTIFIER; }
"@"[a-zA-Z_$][a-zA-Z0-9_$]* { return (int) Token::Kind::ANNOTATION; }

[ \t\n\r]+ { return (int) Token::Kind::WHITESPACE; }

. { return (int) Token::Kind::INVALID; }

%%

int pandawrap(yyscan_t scanner) {
    return 1;
}
