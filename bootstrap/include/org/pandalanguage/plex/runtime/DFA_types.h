#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Char8_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$plex$runtime$DFA {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 stateCount;
    panda$core$Int64** transitions;
    panda$core$Int64* accepts;
    panda$core$Char8* source;
    panda$core$Int64 offset;
    panda$core$Int64 sourceEnd;
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$plex$runtime$DFA;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$plex$runtime$DFA$class_type;
extern org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class;

