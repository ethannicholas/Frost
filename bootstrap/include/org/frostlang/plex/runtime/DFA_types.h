#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Char8_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$plex$runtime$DFA {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int64 stateCount;
    frost$core$Int64** transitions;
    frost$core$Int64* accepts;
    frost$core$Char8* source;
    frost$core$Int64 offset;
    frost$core$Int64 sourceEnd;
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlang$plex$runtime$DFA;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$plex$runtime$DFA$class_type;
extern org$frostlang$plex$runtime$DFA$class_type org$frostlang$plex$runtime$DFA$class;

