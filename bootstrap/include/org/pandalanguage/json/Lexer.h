#pragma once
#include "panda_c.h"
#include "Lexer_types.h"
typedef struct org$pandalanguage$json$Lexer org$pandalanguage$json$Lexer;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "org/pandalanguage/json/Token_types.h"

void org$pandalanguage$json$Lexer$start$panda$core$String(org$pandalanguage$json$Lexer* self, panda$core$String* p_source);
panda$core$Int64* org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 p_count, panda$core$Int64 p_fill);
panda$core$Int64** org$pandalanguage$json$Lexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64* org$pandalanguage$json$Lexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
void org$pandalanguage$json$Lexer$cleanup(org$pandalanguage$json$Lexer* self);
org$pandalanguage$json$Token org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(org$pandalanguage$json$Lexer* self);
void org$pandalanguage$json$Lexer$init(org$pandalanguage$json$Lexer* self);

