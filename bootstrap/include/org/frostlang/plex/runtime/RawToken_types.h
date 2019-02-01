#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
#include "frost/core/String/Index_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/plex/runtime/RawToken_types.h"

typedef struct org$frostlang$plex$runtime$RawToken {
    frost$core$Int64 kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlang$plex$runtime$RawToken;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$plex$runtime$RawToken$class_type;
extern org$frostlang$plex$runtime$RawToken$class_type org$frostlang$plex$runtime$RawToken$class;
typedef struct org$frostlang$plex$runtime$RawToken$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$plex$runtime$RawToken value;
} org$frostlang$plex$runtime$RawToken$wrapper;
typedef struct org$frostlang$plex$runtime$RawToken$nullable {
    org$frostlang$plex$runtime$RawToken value;
    bool nonnull;
} org$frostlang$plex$runtime$RawToken$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$plex$runtime$RawToken$wrapperclass_type;
extern org$frostlang$plex$runtime$RawToken$wrapperclass_type org$frostlang$plex$runtime$RawToken$wrapperclass;

