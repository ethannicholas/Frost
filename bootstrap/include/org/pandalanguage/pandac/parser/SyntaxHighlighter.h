#pragma once
#include "panda_c.h"
#include "SyntaxHighlighter_types.h"
typedef struct org$pandalanguage$pandac$parser$SyntaxHighlighter org$pandalanguage$pandac$parser$SyntaxHighlighter;
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind_types.h"
#include "org/pandalanguage/pandac/parser/Token_types.h"

void org$pandalanguage$pandac$parser$SyntaxHighlighter$reset(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$Token p_token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_syntaxKind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$Token p_token);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$rewind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$init(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);

