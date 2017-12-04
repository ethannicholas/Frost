#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"

typedef struct org$pandalanguage$plex$runtime$RawToken {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$Int64 length;
} org$pandalanguage$plex$runtime$RawToken;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* methods[2]; } org$pandalanguage$plex$runtime$RawToken$class_type;
extern org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$RawToken;

void org$pandalanguage$plex$runtime$RawToken$init(org$pandalanguage$plex$runtime$RawToken* self);

#endif
