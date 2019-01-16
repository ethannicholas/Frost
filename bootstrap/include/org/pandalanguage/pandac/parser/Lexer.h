#pragma once
#include "panda_c.h"
#include "Lexer_types.h"
typedef struct org$pandalanguage$pandac$parser$Lexer org$pandalanguage$pandac$parser$Lexer;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "org/pandalanguage/pandac/parser/Token_types.h"

void org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(org$pandalanguage$pandac$parser$Lexer* self, panda$core$String* p_source);
panda$core$Int64* org$pandalanguage$pandac$parser$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 p_count, panda$core$Int64 p_fill);
panda$core$Int64** org$pandalanguage$pandac$parser$Lexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64* org$pandalanguage$pandac$parser$Lexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
void org$pandalanguage$pandac$parser$Lexer$cleanup(org$pandalanguage$pandac$parser$Lexer* self);
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Lexer* self);
void org$pandalanguage$pandac$parser$Lexer$init(org$pandalanguage$pandac$parser$Lexer* self);

