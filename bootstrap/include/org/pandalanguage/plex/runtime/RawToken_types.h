#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
#include "panda/core/String/Index_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/plex/runtime/RawToken_types.h"

typedef struct org$pandalanguage$plex$runtime$RawToken {
    panda$core$Int64 kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$plex$runtime$RawToken;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$plex$runtime$RawToken$class_type;
extern org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class;
typedef struct org$pandalanguage$plex$runtime$RawToken$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$plex$runtime$RawToken value;
} org$pandalanguage$plex$runtime$RawToken$wrapper;
typedef struct org$pandalanguage$plex$runtime$RawToken$nullable {
    org$pandalanguage$plex$runtime$RawToken value;
    bool nonnull;
} org$pandalanguage$plex$runtime$RawToken$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$plex$runtime$RawToken$wrapperclass_type;
extern org$pandalanguage$plex$runtime$RawToken$wrapperclass_type org$pandalanguage$plex$runtime$RawToken$wrapperclass;

