#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/String/Index_types.h"
#include "frost/core/Bit_types.h"

typedef struct frost$core$String$MatchIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$String* haystack;
    frost$core$String* needle;
    frost$core$String$Index$nullable nextMatch;
    frost$core$Bit allowOverlaps;
} frost$core$String$MatchIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$core$String$MatchIterator$class_type;
extern frost$core$String$MatchIterator$class_type frost$core$String$MatchIterator$class;

