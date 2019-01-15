#pragma once
#include "frost_c.h"
#include "SyntaxHighlighter_types.h"
typedef struct org$frostlanguage$frostc$parser$SyntaxHighlighter org$frostlanguage$frostc$parser$SyntaxHighlighter;
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter/Kind_types.h"
#include "org/frostlanguage/frostc/parser/Token_types.h"

void org$frostlanguage$frostc$parser$SyntaxHighlighter$reset(org$frostlanguage$frostc$parser$SyntaxHighlighter* self);
void org$frostlanguage$frostc$parser$SyntaxHighlighter$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$SyntaxHighlighter* self, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlanguage$frostc$parser$SyntaxHighlighter$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$SyntaxHighlighter* self, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlanguage$frostc$parser$SyntaxHighlighter$add$org$frostlanguage$frostc$parser$Token$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$SyntaxHighlighter* self, org$frostlanguage$frostc$parser$Token p_token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind p_syntaxKind);
void org$frostlanguage$frostc$parser$SyntaxHighlighter$add$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$SyntaxHighlighter* self, org$frostlanguage$frostc$parser$Token p_token);
void org$frostlanguage$frostc$parser$SyntaxHighlighter$rewind(org$frostlanguage$frostc$parser$SyntaxHighlighter* self);
void org$frostlanguage$frostc$parser$SyntaxHighlighter$init(org$frostlanguage$frostc$parser$SyntaxHighlighter* self);
void org$frostlanguage$frostc$parser$SyntaxHighlighter$cleanup(org$frostlanguage$frostc$parser$SyntaxHighlighter* self);

