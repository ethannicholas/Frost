#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/plex/runtime/RawToken.h"

typedef struct org$pandalanguage$plex$runtime$RawToken {
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
typedef struct org$pandalanguage$plex$runtime$RawToken$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$plex$runtime$RawToken value;
} org$pandalanguage$plex$runtime$RawToken$wrapper;
typedef struct org$pandalanguage$plex$runtime$RawToken$nullable {
    org$pandalanguage$plex$runtime$RawToken value;
    bool nonnull;
} org$pandalanguage$plex$runtime$RawToken$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$plex$runtime$RawToken$wrapperclass_type;
extern org$pandalanguage$plex$runtime$RawToken$wrapperclass_type org$pandalanguage$plex$runtime$RawToken$wrapperclass;
org$pandalanguage$plex$runtime$RawToken$wrapper* wrap_org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$RawToken self);

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"

void org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(org$pandalanguage$plex$runtime$RawToken* self, panda$core$Int64 p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, panda$core$Int64 p_line, panda$core$Int64 p_column);

#endif
