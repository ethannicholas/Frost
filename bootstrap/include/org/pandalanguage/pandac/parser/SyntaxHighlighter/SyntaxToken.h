#pragma once
#include "panda_c.h"
#include "SyntaxToken_types.h"
typedef struct org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken;
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind_types.h"

void org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$init$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken* self, panda$core$String* p_text, org$pandalanguage$pandac$parser$Token$Kind p_tokenKind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_syntaxKind);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken* self);

