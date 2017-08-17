#include "PandaParser.h"

#include <algorithm>

class AutoCommaContext {
public:
    AutoCommaContext(PandaParser* parser, bool value)
    : fParser(*parser) {
        fParser.fCommaSeparatedExpressionContext.push(value);
    }

    ~AutoCommaContext() {
        fParser.fCommaSeparatedExpressionContext.pop();
    }

private:
    PandaParser& fParser;
};

PandaParser::PandaParser(ErrorReporter* errors)
: fErrors(errors) {
    pandalex_init(&fScanner);
    fCommaSeparatedExpressionContext.push(false);
}

PandaParser::~PandaParser() {
    pandalex_destroy(fScanner);
}

void PandaParser::advancePosition(const char* text) {
    for (const char* c = text; *c != '\0'; c++) {
        switch (*c) {
            case '\n':
                ++fLine;
                fColumn = 1;
                break;
            case '\t':
                fColumn += 4 - fColumn % 4;
                break;
            default:
                ++fColumn;
        }
    }
}

Token PandaParser::nextRawToken() {
    if (fPushbackBuffer.size()) {
        Token result = fPushbackBuffer.back();
        fPushbackBuffer.pop_back();
        return result;
    }
    int token = pandalex(fScanner);
    Position p(fName, fLine, fColumn);
    const char* text = pandaget_text(fScanner);
    this->advancePosition(text);
    if (fInSpeculative) {
        Token result = Token(p, (Token::Kind) token, String(text));
        fSpeculativeBuffer.push_back(result);
        return result;
    }
    return Token(p, (Token::Kind) token, String(text));
}

Token PandaParser::nextToken() {
    Token token;
    for (;;) {
        token = this->nextRawToken();
        switch (token.fKind) {
            case Token::Kind::WHITESPACE:
                break;
            case Token::Kind::BLOCK_COMMENT: {
                Position p = token.fPosition;
                Token next;
                do {
                    next = this->nextRawToken();
                }
                while (next.fKind != Token::Kind::BLOCK_COMMENT_END &&
                        next.fKind != Token::Kind::END_OF_FILE);
                if (next.fKind == Token::Kind::END_OF_FILE) {
                    this->error(p, "unterminated comment");
                }
                break;
            }
            case Token::Kind::LINE_COMMENT: {
                Token next;
                bool done = false;
                do {
                    next = this->nextRawToken();
                    if (next.fKind == Token::Kind::END_OF_FILE) {
                        done = true;
                    }
                    else if (next.fKind == Token::Kind::WHITESPACE) {
                        for (char c : next.fText) {
                            if (c == '\n') {
                                done = true;
                                break;
                            }
                        }
                    }
                }
                while (!done);
                break;
            }
            default: return std::move(token);
        }
    }
}

void PandaParser::pushback(Token t) {
    fPushbackBuffer.push_back(std::move(t));
}

Token PandaParser::peek() {
    Token result = this->nextToken();
    this->pushback(result);
    return result;
}

bool PandaParser::checkNext(Token::Kind kind, Token* result) {
    Token next = this->nextToken();
    if (next.fKind == kind) {
        if (result) {
            *result = next;
        }
        return true;
    }
    this->pushback(next);
    return false;
}

bool PandaParser::expect(Token::Kind kind, const char* expected, Token* result) {
    return this->expect(kind, String(expected), result);
}

bool PandaParser::expect(Token::Kind kind, String expected, Token* result) {
    Token next = this->nextToken();
    if (next.fKind == kind) {
        if (result) {
            *result = next;
        }
        return true;
    } else {
        this->error(next.fPosition, "expected " + expected + ", but found '" + next.fText + "'");
        return false;
    }
}

void PandaParser::error(Position position, String msg) {
    if (!fInSpeculative) {
        fErrors->error(position, msg);
    }
}

void PandaParser::startSpeculative() {
    ASSERT(!fInSpeculative);
    fInSpeculative = true;
    fSpeculativeBuffer = fPushbackBuffer;
}

void PandaParser::accept() {
    fInSpeculative = false;
}

void PandaParser::rewind() {
    fInSpeculative = false;
    std::reverse(fSpeculativeBuffer.begin(), fSpeculativeBuffer.end());
    fPushbackBuffer.insert(fPushbackBuffer.begin(), fSpeculativeBuffer.begin(),
            fSpeculativeBuffer.end());
}

static int to_operator(Token::Kind kind) {
    switch (kind) {
        case Token::Kind::ADD:          return (int) Operator::ADD;
        case Token::Kind::SUB:          return (int) Operator::SUB;
        case Token::Kind::MUL:          return (int) Operator::MUL;
        case Token::Kind::DIV:          return (int) Operator::DIV;
        case Token::Kind::INTDIV:       return (int) Operator::INTDIV;
        case Token::Kind::REM:          return (int) Operator::REM;
        case Token::Kind::POW:          return (int) Operator::POW;
        case Token::Kind::OR:           return (int) Operator::OR;
        case Token::Kind::AND:          return (int) Operator::AND;
        case Token::Kind::XOR:          return (int) Operator::XOR;
        case Token::Kind::BITWISEOR:    return (int) Operator::BITWISEOR;
        case Token::Kind::BITWISEAND:   return (int) Operator::BITWISEAND;
        case Token::Kind::BITWISEXOR:   return (int) Operator::BITWISEXOR;
        case Token::Kind::SHIFTLEFT:    return (int) Operator::SHIFTLEFT;
        case Token::Kind::ASSIGNMENT:   return (int) Operator::ASSIGNMENT;
        case Token::Kind::ADDEQ:        return (int) Operator::ADDEQ;
        case Token::Kind::SUBEQ:        return (int) Operator::SUBEQ;
        case Token::Kind::MULEQ:        return (int) Operator::MULEQ;
        case Token::Kind::DIVEQ:        return (int) Operator::DIVEQ;
        case Token::Kind::INTDIVEQ:     return (int) Operator::INTDIVEQ;
        case Token::Kind::REMEQ:        return (int) Operator::REMEQ;
        case Token::Kind::POWEQ:        return (int) Operator::POWEQ;
        case Token::Kind::OREQ:         return (int) Operator::OREQ;
        case Token::Kind::ANDEQ:        return (int) Operator::ANDEQ;
        case Token::Kind::XOREQ:        return (int) Operator::XOREQ;
        case Token::Kind::BITWISEOREQ:  return (int) Operator::BITWISEOREQ;
        case Token::Kind::BITWISEANDEQ: return (int) Operator::BITWISEANDEQ;
        case Token::Kind::BITWISEXOREQ: return (int) Operator::BITWISEXOREQ;
        case Token::Kind::SHIFTLEFTEQ:  return (int) Operator::SHIFTLEFTEQ;
        case Token::Kind::SHIFTRIGHTEQ: return (int) Operator::SHIFTRIGHTEQ;
        case Token::Kind::NOT:          return (int) Operator::NOT;
        case Token::Kind::BITWISENOT:   return (int) Operator::BITWISENOT;
        case Token::Kind::EQ:           return (int) Operator::EQ;
        case Token::Kind::NEQ:          return (int) Operator::NEQ;
        case Token::Kind::IDENTITY:     return (int) Operator::IDENTITY;
        case Token::Kind::NIDENTITY:    return (int) Operator::NIDENTITY;
        case Token::Kind::GT:           return (int) Operator::GT;
        case Token::Kind::LT:           return (int) Operator::LT;
        case Token::Kind::GTEQ:         return (int) Operator::GTEQ;
        case Token::Kind::LTEQ:         return (int) Operator::LTEQ;
        case Token::Kind::INSTANCEOF:   return (int) Operator::INSTANCEOF;
        case Token::Kind::NINSTANCEOF:  return (int) Operator::NINSTANCEOF;
        case Token::Kind::CAST:         return (int) Operator::CAST;
        default: abort();
    }
}

// file = bodyEntry*
bool PandaParser::file(const String* name, const String& text, ASTNode* outResult) {
    fName = name;
    fBuffer = panda_scan_string(text.c_str(), fScanner);
    fLine = 1;
    fColumn = 1;
    std::vector<ASTNode> entries;
    while (this->peek().fKind != Token::Kind::END_OF_FILE) {
        ASTNode entry;
        if (!this->bodyEntry(&entry)) {
            ASSERT(!fInSpeculative);
            panda_delete_buffer(fBuffer, fScanner);
            return false;
        }
        ASSERT(!fInSpeculative);
        entries.push_back(std::move(entry));
    }
    *outResult = ASTNode(Position(), ASTNode::Kind::BODY_ENTRIES, std::move(entries));
    panda_delete_buffer(fBuffer, fScanner);
    return true;
}

// additiveExpression = multiplicativeExpression 
//         ((ADD | SUB | BITWISEOR) multiplicativeExpression)*
bool PandaParser::additiveExpression(ASTNode* outResult) {
    if (!this->multiplicativeExpression(outResult)) {
        return false;
    }
    for (;;) {
        Token op = this->nextToken();
        switch (op.fKind) {
            case Token::Kind::ADD: // fall through
            case Token::Kind::SUB: // fall through
            case Token::Kind::BITWISEXOR: {
                ASTNode next;
                if (!this->multiplicativeExpression(&next)) {
                    return false;
                }
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                children.push_back(std::move(next));
                *outResult = ASTNode(op.fPosition, ASTNode::Kind::BINARY, to_operator(op.fKind),
                        std::move(children));
                break;
            }
            default:
                this->pushback(op);
                return true;
        }
    }
}

// andExpression = comparisonExpression ((AND | XOR) comparisonExpression)*
bool PandaParser::andExpression(ASTNode* outResult) {
    if (!this->comparisonExpression(outResult)) {
        return false;
    }
    for (;;) {
        Token op = this->nextToken();
        switch (op.fKind) {
            case Token::Kind::AND: // fall through
            case Token::Kind::XOR: {
                ASTNode next;
                if (!this->comparisonExpression(&next)) {
                    return false;
                }
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                children.push_back(std::move(next));
                *outResult = ASTNode(op.fPosition, ASTNode::Kind::BINARY, to_operator(op.fKind),
                        std::move(children));
                break;
            }
            default:
                this->pushback(op);
                return true;
        }
    }
}

// annotations = ANNOTATION*
bool PandaParser::annotations(ASTNode* outResult) {
    std::vector<ASTNode> children;
    Token next;
    while (this->checkNext(Token::Kind::ANNOTATION, &next)) {
        children.emplace_back(next.fPosition, ASTNode::Kind::ANNOTATION, next.fText);
    }
    *outResult = ASTNode(Position(), ASTNode::Kind::ANNOTATIONS, std::move(children));
    return true;
}

bool PandaParser::anyLoop(ASTNode* outResult, String label) {
    switch (this->peek().fKind) {
        case Token::Kind::DO:    return this->doLoop(outResult, label);
        case Token::Kind::FOR:   return this->forLoop(outResult, label);
        case Token::Kind::LOOP:  return this->loopLoop(outResult, label);
        case Token::Kind::WHILE: return this->whileLoop(outResult, label);
        default:
            // trigger error
            this->expect(Token::Kind::DO, "'do', 'for', 'loop', or 'while' following label");
            return false;
    }
}
// assert = ASSERT expression (COMMA expression)?
bool PandaParser::assertStatement(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::ASSERT, "'assert'", &start)) {
        return false;
    }
    ASTNode expression;
    if (!this->expression(&expression)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(expression));
    if (this->checkNext(Token::Kind::COMMA)) {
        ASTNode message;
        if (!this->expression(&message)) {
            return false;
        }
        children.push_back(std::move(message));
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::ASSERT, std::move(children));
    return true;
}

// block = LBRACE statement* terminalStatement? RBRACE
bool PandaParser::block(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::LBRACE, "'{'")) {
        return false;
    }
    std::vector<ASTNode> children;
    bool done = false;
    do {
        switch (peek().fKind) {
            case Token::Kind::RBRACE:
                this->nextToken();
                done = true;
                break;
            case Token::Kind::BREAK:    // fall through
            case Token::Kind::CONTINUE: // fall through
            case Token::Kind::RETURN: {
                ASTNode stmt;
                if (!this->terminalStatement(&stmt)) {
                    return false;
                }
                if (!this->expect(Token::Kind::RBRACE, "'}'")) {
                    return false;
                }
                done = true;
                children.push_back(std::move(stmt));
                break;
            }
            default: {
                ASTNode stmt;
                if (!this->statement(&stmt)) {
                    return false;
                }
                children.push_back(std::move(stmt));
            }
        }
    }
    while (!done);
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::BLOCK, std::move(children));
    return true;
}

// bodyEntry = usesDeclaration | packageDeclaration | statement | declaration
bool PandaParser::bodyEntry(ASTNode* outResult) {
    switch (peek().fKind) {
        case Token::Kind::USES:       return this->usesDeclaration(outResult);
        case Token::Kind::PACKAGE:    return this->packageDeclaration(outResult);
        case Token::Kind::CLASS:      // fall through
        case Token::Kind::INTERFACE:  // fall through
        case Token::Kind::CHOICE:     // fall through
        case Token::Kind::METHOD:     // fall through
        case Token::Kind::FUNCTION:   // fall through
        case Token::Kind::ANNOTATION: // fall through
        case Token::Kind::DOC_COMMENT:
            return this->declaration(outResult);
        default:
            return this->statement(outResult);
    }
}

bool PandaParser::breakStatement(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::BREAK, "'break'", &start)) {
        return false;
    }
    Token label;
    this->checkNext(Token::Kind::IDENTIFIER, &label);
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::BREAK, label.fText);
    return true;
}

static String get_class_name(const ASTNode& expr) {
    switch (expr.fKind) {
        case ASTNode::Kind::IDENTIFIER:
            return expr.fText;
        case ASTNode::Kind::DOT: {
            String result = get_class_name(expr.fChildren[0]);
            if (result.size()) {
                result += "." + expr.fText;
            }
            return result;
        }
        default:
            return "";
    }
}

// callExpression = term ((LPAREN (expression (COMMA expression)*)? RPAREN |
//         DOT (methodName | INIT) | LBRACKET expression RBRACKET)* |
//         (CAST | INSTANCEOF | NINSTANCEOF) type)* |
//         (<if result so far is a valid class name> LT type (COMMA type)* GT)?
// Note there is a great deal of special handling to deal with class names, due to ambiguities
// between generic parameters and comparison expressions, e.g. foo(X < Y, Z > ... could be either a
// generic type X<Y, Z> or two comparison expressions X < Y and Z > <whatever the next token is>. We
// can't disambiguate this until we see the next token.
bool PandaParser::callExpression(ASTNode* outResult) {
    if (!this->term(outResult)) {
        return false;
    }
    for (;;) {
        Token next = this->nextToken();
        switch (next.fKind) {
            case Token::Kind::LPAREN: {
                AutoCommaContext(this, true);
                Position p = outResult->fPosition;
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                ASTNode expr;
                if (!this->checkNext(Token::Kind::RPAREN)) {
                    if (!this->expression(&expr)) {
                        return false;
                    }
                    children.push_back(std::move(expr));
                    while (this->checkNext(Token::Kind::COMMA)) {
                        if (!this->expression(&expr)) {
                            return false;
                        }
                        children.push_back(std::move(expr));
                    }
                    if (!this->expect(Token::Kind::RPAREN, "')'")) {
                        return false;
                    }
                }
                *outResult = ASTNode(p, ASTNode::Kind::CALL, std::move(children));
                break;
            }
            case Token::Kind::LBRACKET: {
                Position p = outResult->fPosition;
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                ASTNode expr;
                if (!this->expression(&expr)) {
                    return false;
                }
                children.push_back(std::move(expr));
                *outResult = ASTNode(p, ASTNode::Kind::BINARY, (int) Operator::INDEX,
                        std::move(children));
                if (!this->expect(Token::Kind::RBRACKET, "']'")) {
                    return false;
                }
                break;
            }
            case Token::Kind::DOT: {
                String name;
                if (this->checkNext(Token::Kind::INIT)) {
                    name = "init";
                }
                else if (!this->methodName(&name)) {
                    return false;
                }
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                *outResult = ASTNode(next.fPosition, ASTNode::Kind::DOT, name, std::move(children));
                break;
            }
            case Token::Kind::CAST:       // fall through
            case Token::Kind::INSTANCEOF: // fall through
            case Token::Kind::NINSTANCEOF: {
                ASTNode type;
                if (!this->type(&type)) {
                    return false;
                }
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                children.push_back(std::move(type));
                *outResult = ASTNode(next.fPosition, ASTNode::Kind::ARROW, to_operator(next.fKind),
                        std::move(children));
                break;
            }
            case Token::Kind::LT: {
                // this is where we need to be careful. First, we make sure it makes sense to
                // interpret this as the start of a generic parameter list...
                this->pushback(next);
                String name = get_class_name(*outResult);
                if (name.size()) {
                    this->startSpeculative();
                    this->nextToken();
                    // no matter what, we might have to backtrack, because we might not find a '>'
                    // e.g. foo(X < Y)
                    std::vector<ASTNode> types;
                    ASTNode type;
                    if (!this->type(&type, false)) {
                        this->rewind();
                        return true;
                    }
                    types.push_back(std::move(type));
                    while (this->checkNext(Token::Kind::COMMA)) {
                        ASTNode type;
                        if (!this->type(&type, false)) {
                            this->rewind();
                            return true;
                        }
                        types.push_back(std::move(type));
                    }
                    if (!this->expect(Token::Kind::GT, "'>'")) {
                        this->rewind();
                        return true;
                    }
                    // ok, we've successfully parsed a type... but we still might be wrong. If we
                    // have, say, X<Y, Z>, it's possible that was supposed to be two comparison
                    // expressions (which would include whatever the next token is).
                    // Consider the following cases:
                    //
                    // var x := X<Y, Z>
                    // foo() -- type name followed by a method call
                    //
                    // bar(X<Y, Z>foo) -- two expressions, X<Y and Z>foo
                    //
                    // note that, ignoring whitespace, the sequence X<Y,Z>foo is identical in both
                    // cases. We can resolve the ambiguity by noting that the other interpretation
                    // is incorrect in both cases; there is no way for var x := (two expressions) to
                    // make sense, and there is no way for (<type name> <identifier>) to make sense
                    // in function call parameters.
                    // So, we keep track of whether we are in a context that expects a comma-
                    // separated list of expressions. If so, we need to look at the next token after
                    // the type, as only a very few tokens can legally follow a type name in an
                    // expression list. If not, we know it's a type regardless of what follows it,
                    // because there is no way it can resolve to multiple expressions.
                    bool accept;
                    if (this->fCommaSeparatedExpressionContext.top()) {
                        switch (this->peek().fKind) {
                            case Token::Kind::DOT:        // fall through
                            case Token::Kind::RPAREN:     // fall through
                            case Token::Kind::COMMA:      // fall through
                            case Token::Kind::CAST:       // fall through
                            case Token::Kind::INSTANCEOF: // fall through
                            case Token::Kind::NINSTANCEOF:
                                accept = true;
                                break;
                            default:
                                accept = false;
                        }
                    }
                    else {
                        accept = true;
                    }
                    if (accept) {
                        this->accept();
                        *outResult = ASTNode(outResult->fPosition, ASTNode::Kind::CLASS_TYPE,
                                std::move(name), std::move(types));
                        break;
                    }
                    else {
                        this->rewind();
                        return true;
                    }
                }
                return true;
            }
            default:
                this->pushback(next);
                return true;
        }
    }
}

bool PandaParser::choiceDeclaration(ASTNode* outResult, ASTNode doccomment,
        ASTNode annotations) {
    abort();
}

// classDeclaration = CLASS IDENTIFIER genericsDeclaration? typeDeclaration? interfaces? LBRACE
//         declaration* RBRACE
bool PandaParser::classDeclaration(ASTNode* outResult, ASTNode doccomment, ASTNode annotations) {
    std::vector<ASTNode> children;
    children.push_back(std::move(doccomment));
    children.push_back(std::move(annotations));
    Token start;
    if (!this->expect(Token::Kind::CLASS, "'class'", &start)) {
        return false;
    }
    Token name;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &name)) {
        return false;
    }
    ASTNode genericsDeclaration;
    if (peek().fKind == Token::Kind::LT && !this->genericsDeclaration(&genericsDeclaration)) {
        return false;
    }
    children.push_back(std::move(genericsDeclaration));
    ASTNode typeDeclaration;
    if (peek().fKind == Token::Kind::COLON && !this->typeDeclaration(&typeDeclaration)) {
        return false;
    }
    children.push_back(std::move(typeDeclaration));
    ASTNode interfaces;
    if (peek().fKind == Token::Kind::LPAREN && !this->interfaces(&interfaces)) {
        return false;
    }
    children.push_back(std::move(interfaces));
    Token brace;
    if (!this->expect(Token::Kind::LBRACE, "'{'", &brace)) {
        return false;
    }
    std::vector<ASTNode> members;
    while (!this->checkNext(Token::Kind::RBRACE)) {
        ASTNode member;
        if (!this->declaration(&member)) {
            return false;
        }
        members.push_back(std::move(member));
    }
    children.emplace_back(brace.fPosition, ASTNode::Kind::CLASS_MEMBERS, std::move(members));
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::CLASS, name.fText, std::move(children));
    return true;
}

// comparisonExpression = rangeExpression ((EQ | IDENTITY | NEQ | 
//         NIDENTITY | LT | GT | LTEQ | GTEQ | IN) rangeExpression)*
bool PandaParser::comparisonExpression(ASTNode* outResult) {
    if (!this->rangeExpression(outResult)) {
        return false;
    }
    for (;;) {
        Token op = this->nextToken();
        switch (op.fKind) {
            case Token::Kind::EQ:        // fall through
            case Token::Kind::NEQ:       // fall through
            case Token::Kind::IDENTITY:  // fall through
            case Token::Kind::NIDENTITY: // fall through
            case Token::Kind::LT:        // fall through
            case Token::Kind::GT:        // fall through
            case Token::Kind::LTEQ:      // fall through
            case Token::Kind::GTEQ:      // fall through
             {
                ASTNode next;
                if (!this->rangeExpression(&next)) {
                    return false;
                }
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                children.push_back(std::move(next));
                *outResult = ASTNode(op.fPosition, ASTNode::Kind::BINARY, to_operator(op.fKind),
                        std::move(children));
                break;
            }
            default:
                this->pushback(op);
                return true;
        }
    }
}

bool PandaParser::continueStatement(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::CONTINUE, "'continue'", &start)) {
        return false;
    }
    Token label;
    this->checkNext(Token::Kind::IDENTIFIER, &label);
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::CONTINUE, label.fText);
    return true;
}

// declaration = invariant | (doccomment? annotations) (classDeclaration | interfaceDeclaration |
//         choiceDeclaration | methodDeclaration | functionDeclaration | initDeclaration |
//         fieldDeclaration)
bool PandaParser::declaration(ASTNode* outResult) {
    Token start = this->peek();
    if (start.fKind == Token::Kind::ANNOTATION && start.fText == "invariant") {
        return this->invariant(outResult);
    }
    ASTNode dc;
    if (start.fKind == Token::Kind::DOC_COMMENT && !this->doccomment(&dc)) {
        return false;
    }
    ASTNode a;
    if (!this->annotations(&a)) {
        return false;
    }
    switch (peek().fKind) {
        case Token::Kind::CLASS:
            return this->classDeclaration(outResult, std::move(dc), std::move(a));
        case Token::Kind::INTERFACE:
            return this->interfaceDeclaration(outResult, std::move(dc), std::move(a));
        case Token::Kind::CHOICE:
            return this->choiceDeclaration(outResult, std::move(dc), std::move(a));
        case Token::Kind::METHOD:
            return this->methodDeclaration(outResult, std::move(dc), std::move(a));
        case Token::Kind::FUNCTION:
            return this->functionDeclaration(outResult, std::move(dc), std::move(a));
        case Token::Kind::INIT:
            return this->initDeclaration(outResult, std::move(dc), std::move(a));
        case Token::Kind::VAR:      // fall through
        case Token::Kind::DEF:      // fall through
        case Token::Kind::PROPERTY: // fall through
        case Token::Kind::CONSTANT: // fall through
            return this->fieldDeclaration(outResult, std::move(dc), std::move(a));
        default:
            // trigger error
            this->expect(Token::Kind::CLASS, "a declaration");
            return false;
    }
}

bool PandaParser::doccomment(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::DOC_COMMENT, "a documentation comment")) {
        return false;
    }
    String result;
    Token next;
    for (;;) {
        next = this->nextRawToken();
        if (next.fKind == Token::Kind::DOC_COMMENT) {
            break;
        }
        if (next.fKind == Token::Kind::END_OF_FILE) {
            this->error(start.fPosition, "unterminated documentation comment");
            return false;
        }
        result += next.fText;
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::DOC_COMMENT, result);
    return true;
}

// exponentExression = callExpression (POW callExpression)*
bool PandaParser::exponentExpression(ASTNode* outResult) {
    if (!this->callExpression(outResult)) {
        return false;
    }
    Token op;
    while (this->checkNext(Token::Kind::POW, &op)) {
        ASTNode next;
        if (!this->callExpression(&next)) {
            return false;
        }
        std::vector<ASTNode> children;
        children.push_back(std::move(*outResult));
        children.push_back(std::move(next));
        *outResult = ASTNode(op.fPosition, ASTNode::Kind::BINARY, to_operator(op.fKind),
                std::move(children));
    }
    return true;
}

// expression = andExpression (OR andExpression)*
bool PandaParser::expression(ASTNode* outResult) {
    if (!this->andExpression(outResult)) {
        return false;
    }
    Token op;
    while (this->checkNext(Token::Kind::OR, &op)) {
        ASTNode next;
        if (!this->andExpression(&next)) {
            return false;
        }
        std::vector<ASTNode> children;
        children.push_back(std::move(*outResult));
        children.push_back(std::move(next));
        *outResult = ASTNode(op.fPosition, ASTNode::Kind::BINARY, to_operator(op.fKind),
                std::move(children));
    }
    return true;
}

// expressionOrAssignment = expression assignmentOperator expression)?
bool PandaParser::expressionOrAssignment(ASTNode* outResult) {
    ASTNode start;
    if (!this->expression(&start)) {
        return false;
    }
    switch (this->peek().fKind) {
        case Token::Kind::ASSIGNMENT:   // fall through
        case Token::Kind::ADDEQ:        // fall through
        case Token::Kind::SUBEQ:        // fall through
        case Token::Kind::MULEQ:        // fall through
        case Token::Kind::DIVEQ:        // fall through
        case Token::Kind::REMEQ:        // fall through
        case Token::Kind::INTDIVEQ:     // fall through
        case Token::Kind::OREQ:         // fall through
        case Token::Kind::BITWISEOREQ:  // fall through
        case Token::Kind::ANDEQ:        // fall through
        case Token::Kind::BITWISEANDEQ: // fall through
        case Token::Kind::XOREQ:        // fall through
        case Token::Kind::BITWISEXOREQ: // fall through
        case Token::Kind::SHIFTLEFTEQ:  // fall through
        case Token::Kind::SHIFTRIGHTEQ: // fall through
        case Token::Kind::POWEQ: {
            Token op = this->nextToken();
            ASTNode rvalue;
            if (!this->expression(&rvalue)) {
                return false;
            }
            std::vector<ASTNode> children;
            Position p = start.fPosition;
            children.push_back(std::move(start));
            children.push_back(std::move(rvalue));
            *outResult = ASTNode(p, ASTNode::Kind::BINARY, to_operator(op.fKind),
                    std::move(children));
            return true;
        }
        default:
            *outResult = std::move(start);
            return true;
    }
}

// fieldDeclaration = varDeclaration
bool PandaParser::fieldDeclaration(ASTNode* outResult, ASTNode doccomment, ASTNode annotations) {
    std::vector<ASTNode> children;
    ASTNode child;
    if (!this->varDeclaration(&child)) {
        return false;
    }
    Position p = child.fPosition;
    children.push_back(std::move(doccomment));
    children.push_back(std::move(annotations));
    children.push_back(std::move(child));
    *outResult = ASTNode(p, ASTNode::Kind::FIELD, std::move(children));
    return true;
}

// genericsDeclaration = LT IDENTIFIER typeDeclaration? (COMMA IDENTIFIER typeDeclaration?)* GT
bool PandaParser::genericsDeclaration(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::LT, "'<'", &start)) {
        return false;
    }
    Token id;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &id)) {
        return false;
    }
    std::vector<ASTNode> children;
    ASTNode type;
    std::vector<ASTNode> idChildren;
    if (this->checkNext(Token::Kind::COLON)) {
        if (!this->type(&type)) {
            return false;
        }
        idChildren.push_back(std::move(type));
    }
    children.emplace_back(id.fPosition, ASTNode::Kind::IDENTIFIER, id.fText, std::move(idChildren));
    while (this->checkNext(Token::Kind::COMMA)) {
        if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &id)) {
            return false;
        }
        idChildren.clear();
        if (this->checkNext(Token::Kind::COLON)) {
            if (this->type(&type)) {
                return false;
            }
            idChildren.push_back(std::move(type));
        }
        children.emplace_back(id.fPosition, ASTNode::Kind::IDENTIFIER, id.fText,
                std::move(idChildren));
    }
    if (!this->expect(Token::Kind::GT, "'>'")) {
        return false;
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::GENERICS, std::move(children));
    return true;
}

// forLoop = FOR target IN expression block
bool PandaParser::forLoop(ASTNode* outResult, String label) {
    Token start;
    if (!this->expect(Token::Kind::FOR, "'for'", &start)) {
        return false;
    }
    ASTNode target;
    if (!this->target(&target)) {
        return false;
    }
    if (!this->expect(Token::Kind::IN, "'in'", &start)) {
        return false;
    }
    ASTNode list;
    if (!this->expression(&list)) {
        return false;
    }
    ASTNode block;
    if (!this->block(&block)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(target));
    children.push_back(std::move(list));
    children.push_back(std::move(block));
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::FOR, label, std::move(children));
    return true;
}

bool PandaParser::functionDeclaration(ASTNode* outResult, ASTNode doccomment,
        ASTNode annotations) {
    Token start;
    if (!this->expect(Token::Kind::FUNCTION, "'function'", &start)) {
        return false;
    }
    String methodName;
    if (!this->methodName(&methodName)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(doccomment));
    children.push_back(std::move(annotations));
    ASTNode parameters;
    if (!this->parameters(&parameters)) {
        return false;
    }
    children.push_back(std::move(parameters));
    ASTNode returnType;
    if (peek().fKind == Token::Kind::COLON && !this->typeDeclaration(&returnType)) {
        return false;
    }    
    children.push_back(std::move(returnType));
    ASTNode block;
    if (peek().fKind == Token::Kind::LBRACE && !this->block(&block)) {
        return false;
    }
    children.push_back(std::move(block));
    ASTNode post;
    Token next = this->peek();;
    if (next.fKind == Token::Kind::ANNOTATION &&
            (next.fText == "post" || next.fText == "postAnd")) {
        if (!this->postconditions(&post)) {
            return false;
        }
    }
    children.push_back(std::move(post));

    *outResult = ASTNode(start.fPosition, ASTNode::Kind::FUNCTION, std::move(methodName),
            std::move(children));
    return true;
}

// ifStatement = IF expression BLOCK (else (ifStatement | BLOCK))?
bool PandaParser::ifStatement(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::IF, "'if'", &start)) {
        return false;
    }
    ASTNode test;
    if (!this->expression(&test)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(test));
    ASTNode ifTrue;
    if (!this->block(&ifTrue)) {
        return false;
    }
    children.push_back(std::move(ifTrue));
    if (this->checkNext(Token::Kind::ELSE)) {
        ASTNode ifFalse;
        if (this->peek().fKind == Token::Kind::IF) {
            if (!this->ifStatement(&ifFalse)) {
                return false;
            }
        }
        else if (!this->block(&ifFalse)) {
            return false;
        }
        children.push_back(std::move(ifFalse));
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::IF, std::move(children));
    return true;
}

// initCall = INIT LPAREN (expression (COMMA expression)*)? RPAREN
bool PandaParser::initCall(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::INIT, "'init'", &start)) {
        return false;
    }
    if (!this->expect(Token::Kind::LPAREN, "'('")) {
        return false;
    }
    AutoCommaContext(this, true);
    std::vector<ASTNode> children;
    children.push_back(ASTNode(start.fPosition, ASTNode::Kind::IDENTIFIER, start.fText));
    ASTNode expr;
    if (!this->checkNext(Token::Kind::RPAREN)) {
        if (!this->expression(&expr)) {
            return false;
        }
        children.push_back(std::move(expr));
        while (this->checkNext(Token::Kind::COMMA)) {
            if (!this->expression(&expr)) {
                return false;
            }
            children.push_back(std::move(expr));
        }
        if (!this->expect(Token::Kind::RPAREN, "')'")) {
            return false;
        }
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::CALL, std::move(children));
    return true;
}


// initDeclaration = INIT parameters block? postconditions?
bool PandaParser::initDeclaration(ASTNode* outResult, ASTNode doccomment, ASTNode annotations) {
    Token start;
    if (!this->expect(Token::Kind::INIT, "'init'", &start)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(doccomment));
    children.push_back(std::move(annotations));
    ASTNode parameters;
    if (!this->parameters(&parameters)) {
        return false;
    }
    children.push_back(std::move(parameters));
    ASTNode block;
    if (peek().fKind == Token::Kind::LBRACE && !this->block(&block)) {
        return false;
    }
    children.push_back(std::move(block));
    ASTNode post;
    Token next = this->peek();;
    if (next.fKind == Token::Kind::ANNOTATION &&
            (next.fText == "post" || next.fText == "postAnd")) {
        if (!this->postconditions(&post)) {
            return false;
        }
    }
    children.push_back(std::move(post));

    *outResult = ASTNode(start.fPosition, ASTNode::Kind::INIT, std::move(children));
    return true;
}

// interfaceDeclaration = INTERFACE IDENTIFIER genericsDeclaration? (COLON type (COMMA type)*)?
//         LBRACE declaration* RBRACE
bool PandaParser::interfaceDeclaration(ASTNode* outResult, ASTNode doccomment,
        ASTNode annotations) {
    std::vector<ASTNode> children;
    children.push_back(std::move(doccomment));
    children.push_back(std::move(annotations));
    Token start;
    if (!this->expect(Token::Kind::INTERFACE, "'interface'", &start)) {
        return false;
    }
    Token name;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &name)) {
        return false;
    }
    ASTNode genericsDeclaration;
    if (peek().fKind == Token::Kind::LT && !this->genericsDeclaration(&genericsDeclaration)) {
        return false;
    }
    children.push_back(std::move(genericsDeclaration));
    std::vector<ASTNode> interfaces;
    if (this->checkNext(Token::Kind::COLON)) {
        ASTNode type;
        if (!this->type(&type)) {
            return false;
        }
        interfaces.push_back(std::move(type));
        while (this->checkNext(Token::Kind::COMMA)) {
            if (!this->type(&type)) {
                return false;
            }
            interfaces.push_back(std::move(type));
        }
    }
    children.emplace_back(start.fPosition, ASTNode::Kind::TYPES, std::move(interfaces));
    Token brace;
    if (!this->expect(Token::Kind::LBRACE, "'{'", &brace)) {
        return false;
    }
    std::vector<ASTNode> members;
    while (!this->checkNext(Token::Kind::RBRACE)) {
        ASTNode member;
        if (!this->declaration(&member)) {
            return false;
        }
        members.push_back(std::move(member));
    }
    children.emplace_back(brace.fPosition, ASTNode::Kind::CLASS_MEMBERS, std::move(members));
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::INTERFACE, name.fText,
            std::move(children));
    return true;
}

// interfaces = LPAREN type (COMMA type)* RPAREN
bool PandaParser::interfaces(ASTNode* outResult) {
    Token start;
    std::vector<ASTNode> children;
    if (!this->expect(Token::Kind::LPAREN, "'('", &start)) {
        return false;
    }
    ASTNode type;
    if (!this->type(&type)) {
        return false;
    }
    children.push_back(std::move(type));
    while (this->checkNext(Token::Kind::COMMA)) {
        ASTNode type;
        if (!this->type(&type)) {
            return false;
        }
        children.push_back(std::move(type));
    }
    if (!this->expect(Token::Kind::RPAREN, "')'")) {
        return false;
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::TYPES, std::move(children));
    return true;
}

bool PandaParser::invariant(ASTNode* outResult) {
    abort();
}

// when = WHEN expression (COMMA expression)* COLON statement* terminalStatement?
bool PandaParser::when(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::WHEN, "'when'", &start)) {
        return false;
    }
    std::vector<ASTNode> expressions;
    ASTNode expr;
    if (!this->expression(&expr)) {
        return false;
    }
    expressions.push_back(std::move(expr));
    while (this->checkNext(Token::Kind::COMMA)) {
        if (!this->expression(&expr)) {
            return false;
        }
        expressions.push_back(std::move(expr));
    }
    std::vector<ASTNode> children;
    children.emplace_back(start.fPosition, ASTNode::Kind::EXPRESSIONS, std::move(expressions));
    if (!this->expect(Token::Kind::COLON, "':'")) {
        return false;
    }
    for (;;) {
        switch (this->peek().fKind) {
            case Token::Kind::WHEN:      // fall through
            case Token::Kind::OTHERWISE: // fall through
            case Token::Kind::RBRACE:
                goto end;
            case Token::Kind::BREAK:    // fall through
            case Token::Kind::CONTINUE: // fall through
            case Token::Kind::RETURN: {
                ASTNode statement;
                if (!this->terminalStatement(&statement)) {
                    return false;
                }
                children.push_back(std::move(statement));
                goto end;
            }
            default: {
                ASTNode statement;
                if (!this->statement(&statement)) {
                    return false;
                }
                children.push_back(std::move(statement));
            }
        }
    }
    end:
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::WHEN, std::move(children));
    return true;
}

// match = MATCH expression LBRACE when* (DEFAULT COLON statement*)? RBRACE
bool PandaParser::matchStatement(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::MATCH, "'match'", &start)) {
        return false;
    }
    std::vector<ASTNode> children;
    ASTNode expr;
    if (!this->expression(&expr)) {
        return false;
    }
    children.push_back(std::move(expr));
    if (!this->expect(Token::Kind::LBRACE, "'{'")) {
        return false;
    }
    for (;;) {
        Token next = this->peek();
        switch (next.fKind) {
            case Token::Kind::RBRACE:
                goto end;
            case Token::Kind::WHEN: {
                ASTNode when;
                if (!this->when(&when)) {
                    return false;
                }
                children.push_back(std::move(when));
                break;
            }
            case Token::Kind::OTHERWISE: {
                Token def = this->nextToken();
                if (!this->expect(Token::Kind::COLON, "':'")) {
                    return false;
                }
                std::vector<ASTNode> statements;
                for (;;) {
                    ASTNode statement;
                    switch (this->peek().fKind) {
                        case Token::Kind::RBRACE:
                            goto defaultEnd;
                        case Token::Kind::BREAK:    // fall through
                        case Token::Kind::CONTINUE: // fall through
                        case Token::Kind::RETURN: {
                            if (!this->terminalStatement(&statement)) {
                                return false;
                            }
                            statements.push_back(std::move(statement));
                            goto defaultEnd;
                        }
                        default:
                            if (!this->statement(&statement)) {
                                return false;
                            }
                            statements.push_back(std::move(statement));
                    }
                }
                defaultEnd:
                children.emplace_back(def.fPosition, ASTNode::Kind::OTHERWISE,
                        std::move(statements));
                goto end;
            }
            default:
                this->error(next.fPosition, "expected 'when', 'default', or '}', but found '" +
                        next.fText + "'");
        }
    }
    end:
    if (!this->expect(Token::Kind::RBRACE, "'}'")) {
        return false;
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::MATCH, std::move(children));
    return true;
}

// methodDeclaration = METHOD methodName parameters typeDeclaration? block? postconditions?
bool PandaParser::methodDeclaration(ASTNode* outResult, ASTNode doccomment,
        ASTNode annotations) {
    Token start;
    if (!this->expect(Token::Kind::METHOD, "'method'", &start)) {
        return false;
    }
    String methodName;
    if (!this->methodName(&methodName)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(doccomment));
    children.push_back(std::move(annotations));
    ASTNode parameters;
    if (!this->parameters(&parameters)) {
        return false;
    }
    children.push_back(std::move(parameters));
    ASTNode returnType;
    if (peek().fKind == Token::Kind::COLON && !this->typeDeclaration(&returnType)) {
        return false;
    }    
    children.push_back(std::move(returnType));
    ASTNode block;
    if (peek().fKind == Token::Kind::LBRACE && !this->block(&block)) {
        return false;
    }
    children.push_back(std::move(block));
    ASTNode post;
    Token next = this->peek();;
    if (next.fKind == Token::Kind::ANNOTATION &&
            (next.fText == "post" || next.fText == "postAnd")) {
        if (!this->postconditions(&post)) {
            return false;
        }
    }
    children.push_back(std::move(post));

    *outResult = ASTNode(start.fPosition, ASTNode::Kind::METHOD, std::move(methodName),
            std::move(children));
    return true;
}

// methodName = IDENTIFIER | ADD | SUB | MUL | DIV | INTDIV | POW | EQ | GT | LT | GTEQ | LTEQ |
//         REM | AND | BITWISEAND | OR | BITWISEOR | XOR | BITWISEXOR | NOT | BITWISENOT |
//         SHIFTLEFT | SHIFTRIGHT | (LBRACKET RBRACKET ASSIGNMENT?)
bool PandaParser::methodName(String* outResult) {
    Token name = this->nextToken();
    switch (name.fKind) {
        case Token::Kind::IDENTIFIER: // fall through
        case Token::Kind::ADD:        // fall through
        case Token::Kind::SUB:        // fall through
        case Token::Kind::MUL:        // fall through
        case Token::Kind::DIV:        // fall through
        case Token::Kind::INTDIV:     // fall through
        case Token::Kind::POW:        // fall through
        case Token::Kind::EQ:         // fall through
        case Token::Kind::NEQ:        // fall through
        case Token::Kind::LT:         // fall through
        case Token::Kind::GTEQ:       // fall through
        case Token::Kind::LTEQ:       // fall through
        case Token::Kind::REM:        // fall through
        case Token::Kind::AND:        // fall through
        case Token::Kind::BITWISEAND: // fall through
        case Token::Kind::OR:         // fall through
        case Token::Kind::BITWISEOR:  // fall through
        case Token::Kind::XOR:        // fall through
        case Token::Kind::BITWISEXOR: // fall through
        case Token::Kind::NOT:        // fall through
        case Token::Kind::BITWISENOT: // fall through
        case Token::Kind::SHIFTLEFT:
            *outResult = name.fText;
            return true;
        case Token::Kind::GT: {
            *outResult = name.fText;
            Token next = this->nextRawToken();
            if (next.fKind == Token::Kind::GT) { // two GT's in a row = SHIFTRIGHT
                *outResult += ">";
            }
            else {
                this->pushback(next);
            }
            return true;
        }
        case Token::Kind::LBRACKET:
            if (!this->expect(Token::Kind::RBRACKET, "']'")) {
                return false;
            }
            *outResult = "[]";
            if (this->checkNext(Token::Kind::ASSIGNMENT)) {
                *outResult += ":=";
            }
            return true;
        default:
            this->error(name.fPosition, "expected an identifier or operator, but found '" +
                    name.fText + "'");
            return false;
    }
}

// multiplicativeExpression = prefixExpression ((MUL | DIV | INTDIV | REM | SHIFTLEFT | SHIFTRIGHT |
//         BITWISEAND | BITWISEXOR) prefixExpression)*
// Note that SHIFTRIGHT is handled specially, as the lexer only produces GT and we synthesize the
// SHIFTRIGHT token here.
bool PandaParser::multiplicativeExpression(ASTNode* outResult) {
    if (!this->prefixExpression(outResult)) {
        return false;
    }
    for (;;) {
        Token op = this->nextToken();
        switch (op.fKind) {
            case Token::Kind::MUL:        // fall through
            case Token::Kind::DIV:        // fall through
            case Token::Kind::INTDIV:     // fall through
            case Token::Kind::REM:        // fall through
            case Token::Kind::SHIFTLEFT:  // fall through
            case Token::Kind::BITWISEAND: // fall through
            case Token::Kind::BITWISEOR: {
                ASTNode next;
                if (!this->prefixExpression(&next)) {
                    return false;
                }
                std::vector<ASTNode> children;
                children.push_back(std::move(*outResult));
                children.push_back(std::move(next));
                *outResult = ASTNode(op.fPosition, ASTNode::Kind::BINARY, to_operator(op.fKind),
                        std::move(children));
                break;
            }
            case Token::Kind::GT: {
                // two GTs in a row = SHIFTRIGHT
                Token next = this->nextRawToken();
                if (next.fKind == Token::Kind::GT) {
                    ASTNode next;
                    if (!this->prefixExpression(&next)) {
                        return false;
                    }
                    std::vector<ASTNode> children;
                    children.push_back(std::move(*outResult));
                    children.push_back(std::move(next));
                    *outResult = ASTNode(op.fPosition, ASTNode::Kind::BINARY, Operator::SHIFTRIGHT,
                            std::move(children));
                    break;
                }
                this->pushback(next);
                this->pushback(op);
                return true;
            }
            default:
                this->pushback(op);
                return true;
        }
    }
}

// packageDeclaration = PACKAGE IDENTIFIER (DOT IDENTIFIER)*
bool PandaParser::packageDeclaration(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::PACKAGE, "'package'")) {
        return false;
    }
    Token next;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &next)) {
        return false;
    }
    String name = next.fText;
    while (this->checkNext(Token::Kind::DOT)) {
        name += '.';
        if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &next)) {
            return false;
        }
        name += next.fText;
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::PACKAGE, std::move(name));
    return true;
}

// parameter = IDENTIFIER COLON type
bool PandaParser::parameter(ASTNode* outResult) {
    Token id;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &id)) {
        return false;
    }
    if (!this->expect(Token::Kind::COLON, "':'")) {
        return false;
    }
    ASTNode type;
    if (!this->type(&type)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(type));
    *outResult = ASTNode(id.fPosition, ASTNode::Kind::PARAMETER, id.fText, std::move(children));
    return true;
}

// parameters = LPAREN (parameter (COMMA parameter)*)? RPAREN
bool PandaParser::parameters(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::LPAREN, "'('", &start)) {
        return false;
    }
    std::vector<ASTNode> children;
    if (!this->checkNext(Token::Kind::RPAREN)) {
        ASTNode parameter;
        if (!this->parameter(&parameter)) {
            return false;
        }
        children.push_back(std::move(parameter));
        while (this->checkNext(Token::Kind::COMMA)) {
            if (!this->parameter(&parameter)) {
                return false;
            }
            children.push_back(std::move(parameter));
        }
        if (!this->expect(Token::Kind::RPAREN, "')'")) {
            return false;
        }
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::PARAMETERS, std::move(children));
    return true;
}

bool PandaParser::postconditions(ASTNode* outResult) {
    abort();
}

// rangeExpression = additiveExpression | (additiveExpression? (DOTDOT | ELLIPSIS)
//        additiveExpression? (BY additiveExpression)?)
bool PandaParser::rangeExpression(ASTNode* outResult) {
    Token peek = this->peek();
    if (peek.fKind == Token::Kind::DOTDOT || peek.fKind == Token::Kind::ELLIPSIS) {
        *outResult = ASTNode();
    }
    else if (!this->additiveExpression(outResult)) {
        return false;
    }
    Token op = this->nextToken();
    switch (op.fKind) {
        case Token::Kind::DOTDOT: // fall through
        case Token::Kind::ELLIPSIS: {
            ASTNode right;
            peek = this->peek();
            if (peek.fKind != Token::Kind::RBRACKET && peek.fKind != Token::Kind::RPAREN &&
                    peek.fKind != Token::Kind::BY && !this->additiveExpression(&right)) {
                return false;
            }
            ASTNode step;
            if (this->checkNext(Token::Kind::BY) && !this->additiveExpression(&step)) {
                return false;
            }
            std::vector<ASTNode> children;
            children.push_back(std::move(*outResult));
            children.push_back(std::move(right));
            children.push_back(std::move(step));
            ASTNode::Kind kind = (op.fKind == Token::Kind::DOTDOT)
                    ? ASTNode::Kind::RANGE_EXCLUSIVE
                    : ASTNode::Kind::RANGE_INCLUSIVE;
            *outResult = ASTNode(op.fPosition, kind, std::move(children));
            return true;
        }
        default:
            this->pushback(op);
    }
    return true;
}

// returnStatement = RETURN expression?
bool PandaParser::returnStatement(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::RETURN, "'return'", &start)) {
        return false;
    }
    switch (this->peek().fKind) {
        case Token::Kind::RBRACE:  // fall through
        case Token::Kind::WHEN:    // fall through
        case Token::Kind::OTHERWISE:
            *outResult = ASTNode(start.fPosition, ASTNode::Kind::RETURN);
            return true;
        default:
            std::vector<ASTNode> children;
            ASTNode child;
            if (!this->expression(&child)) {
                return false;
            }
            children.push_back(std::move(child));
            *outResult = ASTNode(start.fPosition, ASTNode::Kind::RETURN, std::move(children));
            return true;
    }
}

// singleVar = target (ASSIGNMENT expression)?
bool PandaParser::singleVar(ASTNode* outResult) {
    std::vector<ASTNode> children;
    ASTNode target;
    if (!this->target(&target)) {
        return false;
    }
    Position p = target.fPosition;
    children.push_back(std::move(target));
    if (this->checkNext(Token::Kind::ASSIGNMENT)) {
        ASTNode value;
        if (!this->expression(&value)) {
            return false;
        }
        children.push_back(std::move(value));
    }
    *outResult = ASTNode(p, ASTNode::Kind::DECLARATION, std::move(children));
    return true;
}

// statement = ifStatement | anyLoop | expressionOrAssignment | assertStatement | matchStatement |
//         block | varDeclaration | initCall
bool PandaParser::statement(ASTNode* outResult) {
    switch (this->peek().fKind) {
        case Token::Kind::IF:     return this->ifStatement(outResult);
        case Token::Kind::FOR:    return this->forLoop(outResult);
        case Token::Kind::WHILE:  return this->whileLoop(outResult);
        case Token::Kind::DO:     return this->doLoop(outResult);
        case Token::Kind::LOOP:   return this->loopLoop(outResult);
        case Token::Kind::ASSERT: return this->assertStatement(outResult);
        case Token::Kind::MATCH:  return this->matchStatement(outResult);
        case Token::Kind::LBRACE: return this->block(outResult);
        case Token::Kind::IDENTIFIER: // fall through
        case Token::Kind::LPAREN: {
            Token id = this->nextToken();
            if (this->checkNext(Token::Kind::COLON)) {
                return this->anyLoop(outResult, id.fText);
            }
            this->pushback(id);
            return this->expressionOrAssignment(outResult);
        }
        case Token::Kind::SELF: // fall through
        case Token::Kind::SUPER:
            return this->expressionOrAssignment(outResult);
        case Token::Kind::VAR:      // fall through
        case Token::Kind::DEF:      // fall through
        case Token::Kind::PROPERTY: // fall through
        case Token::Kind::CONSTANT:
            return this->varDeclaration(outResult);
        case Token::Kind::INIT:
            return this->initCall(outResult);
        case Token::Kind::INVALID:
            if (this->peek().fText == ";") {
                Token semicolon = this->nextToken();
                this->error(semicolon.fPosition,
                        "statements are not terminated by semicolons in Panda");
                return true;
            }
            // fall through
        default:
            // trigger error
            this->expect(Token::Kind::IF, "a statement");
            return false;
    }
}

// terminalStatement = breakStatement | continueStatement | returnStatement
bool PandaParser::terminalStatement(ASTNode* outResult) {
    switch (this->peek().fKind) {
        case Token::Kind::BREAK:    return this->breakStatement(outResult);
        case Token::Kind::CONTINUE: return this->continueStatement(outResult);
        case Token::Kind::RETURN:   return this->returnStatement(outResult);
        default: abort();
    }
}

// target = IDENTIFIER (typeDeclaration?)
bool PandaParser::target(ASTNode* outResult) {
    Token id;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &id)) {
        return false;
    }
    if (this->peek().fKind == Token::Kind::COLON) {
        ASTNode type;
        if (!this->typeDeclaration(&type)) {
            return false;
        }
        std::vector<ASTNode> children;
        children.push_back(std::move(type));
        *outResult = ASTNode(id.fPosition, ASTNode::Kind::IDENTIFIER, id.fText,
                std::move(children));
    }
    else {
        *outResult = ASTNode(id.fPosition, ASTNode::Kind::IDENTIFIER, id.fText);
    }
    return true;
}

static void add_string_chunk(ASTNode chunk, ASTNode* outResult) {
    if (outResult->fKind != ASTNode::Kind::VOID) {
        Position p = outResult->fPosition;
        std::vector<ASTNode> children;
        children.push_back(std::move(*outResult));
        children.push_back(std::move(chunk));
        *outResult = ASTNode(p, ASTNode::Kind::BINARY,
                (int) Operator::ADD, std::move(children));
    }
    else {
        *outResult = std::move(chunk);
    }
}

bool PandaParser::string(ASTNode* outResult) {
    Token start = this->nextToken();
    if (start.fKind != Token::Kind::DOUBLE_QUOTE && start.fKind != Token::Kind::SINGLE_QUOTE) {
        this->error(start.fPosition, "expected a string, but found '" + start.fText + "'");
        return false;
    }
    *outResult = ASTNode();
    String result;
    for (;;) {
        Token next = this->nextRawToken();
        if (next.fKind == start.fKind) {
            break;
        }
        switch (next.fKind) {
            case Token::Kind::WHITESPACE:
                for (char c : next.fText) {
                    if (c == '\n') {
                        this->error(start.fPosition, "unterminated string literal");
                        return false;
                    }
                }
                result += next.fText;
                break;
            case Token::Kind::END_OF_FILE:
                this->error(start.fPosition, "unterminated string literal");
                return false;
            case Token::Kind::BACKSLASH: {
                Token escape = this->nextRawToken();
                if (escape.fKind == Token::Kind::END_OF_FILE) {
                    this->error(start.fPosition, "unterminated string literal");
                    return false;
                }
                ASSERT(escape.fText.size() > 0);
                switch (escape.fText[0]) {
                    case 'n':  result += '\n'; break;
                    case 'r':  result += '\r'; break;
                    case 't':  result += '\t'; break;
                    case '\'': result += '\''; break;
                    case '"':  result += '"';  break;
                    case '\\': result += '\\'; break;
                    case '{': {
                        ASTNode expr;
                        if (!this->expression(&expr)) {
                            return false;
                        }
                        if (!this->expect(Token::Kind::RBRACE, "'}'")) {
                            return false;
                        }
                        add_string_chunk(ASTNode(start.fPosition, ASTNode::Kind::STRING, result),
                                outResult);
                        result = "";
                        add_string_chunk(std::move(expr), outResult);
                        break;
                    }
                    default:
                        this->error(next.fPosition, "invalid string escape sequence");
                }
                result += escape.fText.substr(1);
                break;
            }
            default:
                result += next.fText;
        }
    }
    add_string_chunk(ASTNode(start.fPosition, ASTNode::Kind::STRING, result), outResult);
    return true;
}

// term = IDENTIFIER | DECIMAL | BINARY | HEX | SELF | SUPER | NULL | TRUE | FALSE | string |
//         LPAREN expression RPAREN
bool PandaParser::term(ASTNode* outResult) {
    Token t = this->nextToken();
    switch (t.fKind) {
        case Token::Kind::IDENTIFIER:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::IDENTIFIER, t.fText);
            return true;
        case Token::Kind::DECIMAL:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::INT, (uint64_t) std::stoul(t.fText));
            return true;
        case Token::Kind::BINARY:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::INT,
                    (uint64_t) std::stoul(t.fText.substr(2), nullptr, 2));
            return true;
        case Token::Kind::HEX:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::INT,
                    (uint64_t) std::stoul(t.fText.substr(2), nullptr, 16));
            return true;
        case Token::Kind::SELF:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::SELF);
            return true;
        case Token::Kind::SUPER:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::SUPER);
            return true;
        case Token::Kind::NULL_LITERAL:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::NULL_LITERAL);
            return true;
        case Token::Kind::TRUE_LITERAL:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::TRUE_LITERAL);
            return true;
        case Token::Kind::FALSE_LITERAL:
            *outResult = ASTNode(t.fPosition, ASTNode::Kind::FALSE_LITERAL);
            return true;
        case Token::Kind::DOUBLE_QUOTE: // fall through
        case Token::Kind::SINGLE_QUOTE:
            this->pushback(t);
            return this->string(outResult);
        case Token::Kind::LPAREN: {
            if (!this->expression(outResult)) {
                return false;
            }
            return this->expect(Token::Kind::RPAREN, "')'");
        }
        default:
            this->error(t.fPosition, "expected an expression, but found '" + t.fText + "'");
            return false;
    }
}

// type = IDENTIFIER (DOT IDENTIFIER)* (LT type (COMMA type)*) GT)? QUESTION?
bool PandaParser::type(ASTNode* outResult, bool needSpeculativeParse) {
    Token start;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &start)) {
        return false;
    }
    String name = start.fText;
    while (this->checkNext(Token::Kind::DOT)) {
        Token id;
        if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &id)) {
            return false;
        }
        name += '.';
        name += id.fText;
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::CLASS_TYPE, name);
    if (this->peek().fKind == Token::Kind::LT) {
        // need to speculatively parse, because foo->Int8<bar looks like the start of a cast to
        // "Int8<bar...", but is actually a cast to Int8 followed by less-than bar
        if (needSpeculativeParse) {
            this->startSpeculative();
        }
        this->nextToken();
        std::vector<ASTNode> additionalChildren;
        ASTNode type;
        if (!this->type(&type, false)) {
            if (needSpeculativeParse) {
                this->rewind();
                return true;
            }
            return false;
        }
        additionalChildren.push_back(std::move(type));
        while (this->checkNext(Token::Kind::COMMA)) {
            ASTNode type;
            if (!this->type(&type, false)) {
                if (needSpeculativeParse) {
                    this->rewind();
                    return true;
                }
                return false;
            }
            additionalChildren.push_back(std::move(type));
        }
        if (!this->expect(Token::Kind::GT, "'>'")) {
            if (needSpeculativeParse) {
                this->rewind();
                return true;
            }
            return false;
        }
        for (ASTNode& n : additionalChildren) {
            outResult->fChildren.push_back(std::move(n));
        }
        this->accept();
    }
    if (this->checkNext(Token::Kind::QUESTION)) {
        std::vector<ASTNode> children;
        children.push_back(std::move(*outResult));
        *outResult = ASTNode(start.fPosition, ASTNode::Kind::NULLABLE_TYPE, std::move(children));
    }
    return true;
}

// typeDeclaration = COLON type
bool PandaParser::typeDeclaration(ASTNode* outResult) {
    if (!this->expect(Token::Kind::COLON, "':'")) {
        return false;
    }
    return this->type(outResult, false);
}

// prefixExpression = (SUB | NOT | BITWISENOT)? exponentExpression
bool PandaParser::prefixExpression(ASTNode* outResult) {
    Token op = this->nextToken();
    switch (op.fKind) {
        case Token::Kind::SUB: // fall through
        case Token::Kind::NOT: // fall through
        case Token::Kind::BITWISENOT: {
            ASTNode base;
            if (!this->exponentExpression(&base)) {
                return false;
            }
            std::vector<ASTNode> children;
            children.push_back(std::move(base));
            *outResult = ASTNode(op.fPosition, ASTNode::Kind::PREFIX, (int) to_operator(op.fKind),
                    std::move(children));
            return true;
        }
        default:
            this->pushback(op);
            return this->exponentExpression(outResult);
    }
}

// usesDeclaration = USES IDENTIFIER (DOT IDENTIFIER)* (DOT STAR)?
bool PandaParser::usesDeclaration(ASTNode* outResult) {
    Token start;
    if (!this->expect(Token::Kind::USES, "'uses'")) {
        return false;
    }
    Token next;
    if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &next)) {
        return false;
    }
    String name = next.fText;
    while (this->checkNext(Token::Kind::DOT)) {
        name += '.';
        if (this->checkNext(Token::Kind::MUL)) {
            name += "*";
            break;
        }
        if (!this->expect(Token::Kind::IDENTIFIER, "an identifier", &next)) {
            return false;
        }
        name += next.fText;
    }
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::USES, std::move(name));
    return true;
}

// varDeclaration = (VAR | DEF | PROPERTY | CONSTANT) singleVar (COMMA singleVar*)
bool PandaParser::varDeclaration(ASTNode* outResult) {
    ASTNode::Kind kind;
    Token start = this->nextToken();
    switch (start.fKind) {
        case Token::Kind::VAR:      kind = ASTNode::Kind::VAR;      break;
        case Token::Kind::DEF:      kind = ASTNode::Kind::DEF;      break;
        case Token::Kind::PROPERTY: kind = ASTNode::Kind::PROPERTY; break;
        case Token::Kind::CONSTANT: kind = ASTNode::Kind::CONSTANT; break;
        default:
            this->error(start.fPosition, "'var', 'def', 'property', or 'constant'");
    }
    std::vector<ASTNode> children;
    ASTNode child;
    if (!this->singleVar(&child)) {
        return false;
    }
    children.push_back(std::move(child));
    while (this->checkNext(Token::Kind::COMMA)) {
        if (!this->singleVar(&child)) {
            return false;
        }
        children.push_back(std::move(child));
    }
    *outResult = ASTNode(start.fPosition, kind, std::move(children));
    return true;
}

bool PandaParser::whileLoop(ASTNode* outResult, String label) {
    Token start;
    if (!this->expect(Token::Kind::WHILE, "'while'", &start)) {
        return false;
    }
    ASTNode test;
    if (!this->expression(&test)) {
        return false;
    }
    ASTNode block;
    if (!this->block(&block)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(test));
    children.push_back(std::move(block));
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::WHILE, label, std::move(children));
    return true;
}


bool PandaParser::doLoop(ASTNode* outResult, String label) {
    Token start;
    if (!this->expect(Token::Kind::DO, "'do'", &start)) {
        return false;
    }
    ASTNode block;
    if (!this->block(&block)) {
        return false;
    }
    if (!this->expect(Token::Kind::WHILE, "'while'")) {
        return false;
    }
    ASTNode test;
    if (!this->expression(&test)) {
        return false;
    }
    std::vector<ASTNode> children;
    children.push_back(std::move(block));
    children.push_back(std::move(test));
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::DO, label, std::move(children));
    return true;
}

bool PandaParser::loopLoop(ASTNode* outResult, String label) {
    Token start;
    if (!this->expect(Token::Kind::LOOP, "'loop'", &start)) {
        return false;
    }
    ASTNode block;
    if (!this->block(&block)) {
        return false;
    }    
    std::vector<ASTNode> children;
    children.push_back(std::move(block));
    *outResult = ASTNode(start.fPosition, ASTNode::Kind::LOOP, label, std::move(children));
    return true;
}
