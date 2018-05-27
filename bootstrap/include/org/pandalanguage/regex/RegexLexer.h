#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$plex$runtime$DFA org$pandalanguage$plex$runtime$DFA;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$regex$RegexLexer {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$plex$runtime$DFA* dfa;
    panda$core$Int64** transitions;
    panda$core$Int64* accepts;
} org$pandalanguage$regex$RegexLexer;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$regex$RegexLexer$class_type;
extern org$pandalanguage$regex$RegexLexer$class_type org$pandalanguage$regex$RegexLexer$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$regex$RegexLexer org$pandalanguage$regex$RegexLexer;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"
#include "org/pandalanguage/regex/RegexToken.h"

void org$pandalanguage$regex$RegexLexer$start$panda$core$String(org$pandalanguage$regex$RegexLexer* self, panda$core$String* p_source);
panda$core$Int64* org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 p_count, panda$core$Int64 p_fill);
panda$core$Int64** org$pandalanguage$regex$RegexLexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64* org$pandalanguage$regex$RegexLexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
void org$pandalanguage$regex$RegexLexer$cleanup(org$pandalanguage$regex$RegexLexer* self);
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexLexer* self);
void org$pandalanguage$regex$RegexLexer$init(org$pandalanguage$regex$RegexLexer* self);

#endif
