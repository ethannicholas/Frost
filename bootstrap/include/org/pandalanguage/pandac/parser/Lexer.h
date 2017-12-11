#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$plex$runtime$DFA org$pandalanguage$plex$runtime$DFA;
#include "panda/core/Int64.h"

typedef struct org$pandalanguage$pandac$parser$Lexer {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$plex$runtime$DFA* dfa;
    panda$core$Int64** transitions;
    panda$core$Int64* accepts;
} org$pandalanguage$pandac$parser$Lexer;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$parser$Lexer$class_type;
extern org$pandalanguage$pandac$parser$Lexer$class_type org$pandalanguage$pandac$parser$Lexer$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$parser$Lexer org$pandalanguage$pandac$parser$Lexer;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/Token.h"

void org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(org$pandalanguage$pandac$parser$Lexer* self, panda$core$String* p_source);
panda$core$Int64* org$pandalanguage$pandac$parser$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 p_count, panda$core$Int64 p_fill);
panda$core$Int64** org$pandalanguage$pandac$parser$Lexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64* org$pandalanguage$pandac$parser$Lexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Lexer* self);
void org$pandalanguage$pandac$parser$Lexer$init(org$pandalanguage$pandac$parser$Lexer* self);

#endif
