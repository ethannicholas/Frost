#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$plex$runtime$DFA org$pandalanguage$plex$runtime$DFA;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$json$Lexer {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$plex$runtime$DFA* dfa;
    panda$core$Int64** transitions;
    panda$core$Int64* accepts;
} org$pandalanguage$json$Lexer;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$json$Lexer$class_type;
extern org$pandalanguage$json$Lexer$class_type org$pandalanguage$json$Lexer$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$json$Lexer org$pandalanguage$json$Lexer;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"
#include "org/pandalanguage/json/Token.h"

void org$pandalanguage$json$Lexer$start$panda$core$String(org$pandalanguage$json$Lexer* self, panda$core$String* p_source);
panda$core$Int64* org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 p_count, panda$core$Int64 p_fill);
panda$core$Int64** org$pandalanguage$json$Lexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64* org$pandalanguage$json$Lexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
void org$pandalanguage$json$Lexer$cleanup(org$pandalanguage$json$Lexer* self);
org$pandalanguage$json$Token org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(org$pandalanguage$json$Lexer* self);
void org$pandalanguage$json$Lexer$init(org$pandalanguage$json$Lexer* self);

#endif
