#include "ParserGeneratorParser.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunneeded-internal-declaration"
#pragma clang diagnostic ignored "-Wnull-conversion"
#pragma clang diagnostic ignored "-Wsign-compare"
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wdeprecated-register"
#endif
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wunused-function"
#endif
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4018)
#endif
#include "lex.parser.c"

namespace ParserGenerator {

Parser::Parser(String text, ErrorReporter* errors)
: fPushback(Position(), Token::INVALID_TOKEN, "")
, fErrors(*errors) {
    parserlex_init(&fScanner);
    fBuffer = parser_scan_string(text.c_str(), fScanner);
    parserset_lineno(1, fScanner);

    if (false) {
        // avoid unused warning
        yyunput(0, nullptr, fScanner);
    }
}

Parser::~Parser() {
    parser_delete_buffer((yy_buffer_state*) fBuffer, fScanner);
    parserlex_destroy(fScanner);
}

Token Parser::nextRawToken() {
    if (fPushback.fKind != Token::INVALID_TOKEN) {
        Token result = fPushback;
        fPushback.fKind = Token::INVALID_TOKEN;
        fPushback.fText = "";
        return result;
    }
    int token = parserlex(fScanner);
    String text = String(parserget_text(fScanner));
    return Token(Position(parserget_lineno(fScanner)), (Token::Kind) token, text);
}

Token Parser::nextToken() {
    Token token;
    do {
        token = this->nextRawToken();
        if (token.fKind == Token::INVALID_TOKEN) {
            fErrors.error(Position(parserget_lineno(fScanner)), "invalid token: '" + token.fText +
                    "'");
            token.fKind = Token::END_OF_FILE;
        }
    } while (token.fKind == Token::WHITESPACE);
    return token;
}

void Parser::pushback(Token t) {
    ASSERT(fPushback.fKind == Token::INVALID_TOKEN, "already have a token pushed back");
    fPushback = t;
}

Token Parser::peek() {
    Token result = this->nextToken();
    this->pushback(result);
    return result;
}

bool Parser::expect(Token::Kind kind, const char* expected, Token* result) {
    Token next = this->nextToken();
    if (next.fKind == kind) {
        if (result) {
            *result = next;
        }
        return true;
    }
    else {
        fErrors.error(next.fPosition, String("expected ") + expected + ", but found '" +
                next.fText + "'");
        return false;
    }
}

bool Parser::checkNext(Token::Kind kind, Token* result) {
    Token next = this->nextToken();
    if (next.fKind == kind) {
        if (result) {
            *result = next;
        }
        return true;
    }
    pushback(next);
    return false;
}

static char get_charset_char(String s, int* index) {
    ASSERT(*index < s.length(), "index out of bounds");
    char result;
    if (s[*index] == '\\') {
        ++(*index);
        ASSERT(*index < s.length(), "index out of bounds");
        switch (s[*index]) {
            case 'n':  result = '\n'; break;
            case 'r':  result = '\r'; break;
            case 't':  result = '\t'; break;
            case '\'': result = '\''; break;
            case '\\': result = '\\'; break;
            case ']':  result = ']';  break;
            default: abort();
        }
    }
    else {
        result = s[*index];
    }
    ++(*index);
    return result;
}

static std::unordered_set<char> charset(String s) {
    ASSERT(s[0] == '[' && s[s.length() - 1] == ']', "expected charset to be wrapped by brackets");
    s = s.substr(1, s.length() - 2);
    std::unordered_set<char> result;
    bool inverse = s[0] == '^';
    int index = inverse ? 1 : 0;
    if (inverse) {
        for (unsigned char c = START_CHAR; c <= END_CHAR; ++c) {
            result.insert(c);
        }
    }
    while (index < s.length()) {
        char start = get_charset_char(s, &index);
        char end;
        if (index < s.length() - 1 && s[index] == '-') {
            ++index;
            end = get_charset_char(s, &index);
        }
        else {
            end = start;
        }
        ASSERT(start <= end, "invalid charset");
        for (unsigned char c = start; c <= end; ++c) {
            if (inverse) {
                result.erase(c);
            }
            else {
                result.insert(c);
            }
        }
    }
    return result;
}

static String process_escapes(const String&& s) {
    String result;
    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c == '\\') {
            ++i;
            ASSERT(i < s.length(), "invalid escape sequence");
            switch (s[i]) {
                case 'n':  result += '\n'; break;
                case 'r':  result += '\r'; break;
                case 't':  result += '\t'; break;
                case '\'': result += '\''; break;
                case '\\': result += '\\'; break;
                default:
                    printf("invalid escape sequence");
                    abort();
            }
        }
        else {
            result += c;
        }
    }
    return result;
}

// IDENTIFIER (COLON (IDENTIFIER | CHARSET)) | SINGLELITERAL | CHARSET | CARET | AT DOUBLELITERAL?
std::unique_ptr<Node> Parser::term() {
    Token start = this->nextToken();
    switch (start.fKind) {
        case Token::IDENTIFIER:
            if (this->checkNext(Token::COLON)) {
                Token value = this->nextToken();
                switch (value.fKind) {
                    case Token::IDENTIFIER:
                        return std::unique_ptr<Node>(new IdentifierNode(start.fText, value.fText));
                    case Token::CHARSET:
                        return std::unique_ptr<Node>(new CharsetNode(start.fText, 
                                charset(value.fText)));
                    default:
                        fErrors.error(value.fPosition, "expected identifier or charset");
                        return nullptr;
                }
            }
            return std::unique_ptr<Node>(new IdentifierNode(start.fText));
        case Token::SINGLELITERAL:
            return std::unique_ptr<Node>(new LiteralNode(process_escapes(start.fText.substr(1, 
                    start.fText.length() - 2))));
        case Token::CHARSET:
            return std::unique_ptr<Node>(new CharsetNode(charset(start.fText)));
        case Token::CARET:
            return std::unique_ptr<Node>(new CutNode());
        case Token::AT: {
            Token text;
            if (this->checkNext(Token::DOUBLELITERAL, &text)) {
                return std::unique_ptr<Node>(new PushNode(text.fText.substr(1, 
                        text.fText.length() - 2)));
            }
            return std::unique_ptr<Node>(new PopNode());
        }
        default:
            fErrors.error(start.fPosition, "expected a term");
            return nullptr;
    }
}

// LBRACE <brace balanced code> RBRACE
bool Parser::code(String* result) {
    Token start;
    if (!this->expect(Token::LBRACE, "'{'", &start)) {
        return "";
    }
    int level = 1;
    *result = "";
    while (level) {
        Token token = this->nextRawToken();
        switch (token.fKind) {
            case Token::LBRACE:
                ++level;
                *result += token.fText;
                break;
            case Token::RBRACE:
                --level;
                if (level) {
                    *result += token.fText;
                }
                break;
            case Token::END_OF_FILE:
                fErrors.error(start.fPosition, "unterminated code block");
                return false;
            default:
                *result += token.fText;
        }
    }
    return true;
}

// IDENTIFIER ((DOT | COLONCOLON) IDENTIFIER)* (LT type (COMMA type)* GT)? QUESTION?
bool Parser::type(String* result) {
    Token t;
    if (!this->expect(Token::IDENTIFIER, "an identifier", &t)) {
        return false;
    }
    *result += t.fText;
    while (this->checkNext(Token::DOT, &t) || this->checkNext(Token::COLONCOLON, &t)) {
        *result += t.fText;
        if (!this->expect(Token::IDENTIFIER, "an identifier", &t)) {
            return false;
        }
        *result += t.fText;
    }
    if (this->checkNext(Token::LT)) {
        *result += "<";
        String type;
        if (!this->type(&type)) {
            return false;
        }
        *result += type;
        while (this->checkNext(Token::COMMA)) {
            *result += ",";
            if (!this->type(&type)) {
                return false;
            }
            *result += type;
        }
        if (!this->expect(Token::GT, ">")) {
            return false;
        }
        *result += ">";
    }
    if (this->checkNext(Token::QUESTION)) {
        *result += "?";
    }
    return true;
}

// IDENTIFIER (COLON type)? EQ term+ (NOT CHARSET)? code?
bool Parser::production(Production* result) {
    Token name;
    if (!this->expect(Token::IDENTIFIER, "an identifier", &name)) {
        return false;
    }
    String type;
    if (this->checkNext(Token::COLON)) {
        if (!this->type(&type)) {
            return nullptr;
        }
    }
    if (!this->expect(Token::EQ, "'='")) {
        return false;
    }
    std::vector<std::shared_ptr<Node>> nodes;
    std::unordered_set<char> excludes;
    String code;
    bool done = false;
    do {
        switch (this->peek().fKind) {
            case Token::IDENTIFIER:    // fall through
            case Token::SINGLELITERAL: // fall through
            case Token::CHARSET:       // fall through
            case Token::CARET:         // fall through
            case Token::AT: {
                std::unique_ptr<Node> term = this->term();
                if (!term) {
                    return false;
                }
                if (term->fKind == Node::kLiteral_Kind) {
                    LiteralNode& literal = (LiteralNode&) *term;
                    for (char c : literal.fLiteral) {
                        nodes.emplace_back(new CharNode(c));
                    }
                }
                else {
                    nodes.push_back(std::move(term));
                }
                break;
            }
            default:
                done = true;
        }
    } while (!done);
    if (this->checkNext(Token::NOT)) {
        Token excludesToken;
        if (this->expect(Token::CHARSET, "a charset", &excludesToken)) {
            excludes = charset(excludesToken.fText);
        }
    }
    if (this->peek().fKind == Token::LBRACE) {
        if (!this->code(&code)) {
            return false;
        }
    }
    else {
        this->expect(Token::SEMICOLON, "';'");
    }
    bool isStart = name.fText[0] == '@';
    String finalName;
    if (isStart) {
        finalName = name.fText.c_str() + 1;
    } 
    else {
        finalName = name.fText;
    }
    *result = Production(finalName, isStart, type, std::move(nodes), excludes, code);
    return true;
}

// code? production*
bool Parser::grammar(Grammar* result) {
    String code;
    if (this->peek().fKind == Token::LBRACE) {
        if (!this->code(&code)) {
            return false;
        }
    }
    std::vector<Production> productions;
    while (this->peek().fKind != Token::END_OF_FILE) {
        Production production;
        if (!this->production(&production)) {
            return false;
        }
        productions.push_back(std::move(production));
    }
    *result = Grammar(code, std::move(productions));
    return true;
}

}