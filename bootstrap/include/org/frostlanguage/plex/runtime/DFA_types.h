#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Char8_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$plex$runtime$DFA {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 stateCount;
    frost$core$Int64** transitions;
    frost$core$Int64* accepts;
    frost$core$Char8* source;
    frost$core$Int64 offset;
    frost$core$Int64 sourceEnd;
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlanguage$plex$runtime$DFA;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlanguage$plex$runtime$DFA$class_type;
extern org$frostlanguage$plex$runtime$DFA$class_type org$frostlanguage$plex$runtime$DFA$class;

