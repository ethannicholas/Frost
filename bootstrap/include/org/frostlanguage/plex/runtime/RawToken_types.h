#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
#include "frost/core/String/Index_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/plex/runtime/RawToken_types.h"

typedef struct org$frostlanguage$plex$runtime$RawToken {
    frost$core$Int64 kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlanguage$plex$runtime$RawToken;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$plex$runtime$RawToken$class_type;
extern org$frostlanguage$plex$runtime$RawToken$class_type org$frostlanguage$plex$runtime$RawToken$class;
typedef struct org$frostlanguage$plex$runtime$RawToken$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$plex$runtime$RawToken value;
} org$frostlanguage$plex$runtime$RawToken$wrapper;
typedef struct org$frostlanguage$plex$runtime$RawToken$nullable {
    org$frostlanguage$plex$runtime$RawToken value;
    bool nonnull;
} org$frostlanguage$plex$runtime$RawToken$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$plex$runtime$RawToken$wrapperclass_type;
extern org$frostlanguage$plex$runtime$RawToken$wrapperclass_type org$frostlanguage$plex$runtime$RawToken$wrapperclass;

