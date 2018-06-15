#pragma once
#include "panda_c.h"
#include "Kind_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind_types.h"
#include "panda/core/Int64_types.h"

panda$core$String* org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$convert$R$panda$core$String(org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind self);
void org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind* self, panda$core$Int64 p_rv);

