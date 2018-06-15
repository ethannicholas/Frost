#pragma once
#include "panda_c.h"
#include "SyntaxHighlighter_types.h"
typedef struct org$pandalanguage$pandac$parser$SyntaxHighlighter org$pandalanguage$pandac$parser$SyntaxHighlighter;
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"

void org$pandalanguage$pandac$parser$SyntaxHighlighter$init(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$reset(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, panda$core$String* p_s, org$pandalanguage$pandac$parser$Token$Kind p_tokenKind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_syntaxKind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, panda$core$String* p_s, org$pandalanguage$pandac$parser$Token$Kind p_kind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$rewind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter* self);

