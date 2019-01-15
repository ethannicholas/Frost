#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frost$IntBitIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt64 value;
    frost$core$UInt64 mask;
} org$frostlanguage$frost$IntBitIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frost$IntBitIterator$class_type;
extern org$frostlanguage$frost$IntBitIterator$class_type org$frostlanguage$frost$IntBitIterator$class;

