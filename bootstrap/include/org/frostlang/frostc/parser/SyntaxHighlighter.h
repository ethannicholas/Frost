#pragma once
#include "frost_c.h"
#include "SyntaxHighlighter_types.h"
typedef struct org$frostlang$frostc$parser$SyntaxHighlighter org$frostlang$frostc$parser$SyntaxHighlighter;
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"

void org$frostlang$frostc$parser$SyntaxHighlighter$reset(void* rawSelf);
void org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(void* rawSelf, org$frostlang$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(void* rawSelf, org$frostlang$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(void* rawSelf, org$frostlang$frostc$parser$Token p_token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind p_syntaxKind);
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token(void* rawSelf, org$frostlang$frostc$parser$Token p_token);
void org$frostlang$frostc$parser$SyntaxHighlighter$rewind(void* rawSelf);
void org$frostlang$frostc$parser$SyntaxHighlighter$init(void* rawSelf);
void org$frostlang$frostc$parser$SyntaxHighlighter$cleanup(void* rawSelf);

