#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"

typedef struct org$pandalanguage$plex$runtime$RawToken {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$plex$runtime$RawToken;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$plex$runtime$RawToken$class_type;
extern org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$RawToken;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$plex$runtime$RawToken$init$panda$core$String(org$pandalanguage$plex$runtime$RawToken* self, panda$core$String* p_source);

#endif
