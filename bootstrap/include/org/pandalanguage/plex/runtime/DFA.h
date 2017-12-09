#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$RawToken;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ListView panda$collections$ListView;

typedef struct org$pandalanguage$plex$runtime$DFA {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 stateCount;
    panda$core$Int64** transitions;
    panda$core$Int64* accepts;
    org$pandalanguage$plex$runtime$RawToken* rawToken;
    panda$core$String* source;
    panda$collections$ListView* utf8;
    panda$core$Int64 offset;
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$plex$runtime$DFA;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$plex$runtime$DFA$class_type;
extern org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$plex$runtime$DFA org$pandalanguage$plex$runtime$DFA;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$RawToken;

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts);
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts);
org$pandalanguage$plex$runtime$RawToken* org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self);

#endif
