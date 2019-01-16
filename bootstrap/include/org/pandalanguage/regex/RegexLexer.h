#pragma once
#include "panda_c.h"
#include "RegexLexer_types.h"
typedef struct org$pandalanguage$regex$RegexLexer org$pandalanguage$regex$RegexLexer;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "org/pandalanguage/regex/RegexToken_types.h"

void org$pandalanguage$regex$RegexLexer$start$panda$core$String(org$pandalanguage$regex$RegexLexer* self, panda$core$String* p_source);
panda$core$Int64* org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 p_count, panda$core$Int64 p_fill);
panda$core$Int64** org$pandalanguage$regex$RegexLexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64* org$pandalanguage$regex$RegexLexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
void org$pandalanguage$regex$RegexLexer$cleanup(org$pandalanguage$regex$RegexLexer* self);
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexLexer* self);
void org$pandalanguage$regex$RegexLexer$init(org$pandalanguage$regex$RegexLexer* self);

