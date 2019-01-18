#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$FixedArray$FixedArrayIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$FixedArray* array;
    frost$core$Int64 index;
} org$frostlang$frostc$FixedArray$FixedArrayIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$FixedArray$FixedArrayIterator$class_type;
extern org$frostlang$frostc$FixedArray$FixedArrayIterator$class_type org$frostlang$frostc$FixedArray$FixedArrayIterator$class;
