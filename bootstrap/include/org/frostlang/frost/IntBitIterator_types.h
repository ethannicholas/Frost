#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frost$IntBitIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$UInt64 value;
    frost$core$UInt64 mask;
} org$frostlang$frost$IntBitIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frost$IntBitIterator$class_type;
extern org$frostlang$frost$IntBitIterator$class_type org$frostlang$frost$IntBitIterator$class;

