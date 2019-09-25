#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
#include "frost/unsafe/Pointer_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$plex$runtime$DFA {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int stateCount;
    frost$unsafe$Pointer transitions;
    frost$unsafe$Pointer accepts;
    frost$unsafe$Pointer source;
    frost$core$Int offset;
    frost$core$Int sourceEnd;
    frost$core$Int line;
    frost$core$Int column;
} org$frostlang$plex$runtime$DFA;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$plex$runtime$DFA$class_type;
extern org$frostlang$plex$runtime$DFA$class_type org$frostlang$plex$runtime$DFA$class;

