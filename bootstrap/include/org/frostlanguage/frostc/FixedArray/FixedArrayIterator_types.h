#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$FixedArray$FixedArrayIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$FixedArray* array;
    frost$core$Int64 index;
} org$frostlanguage$frostc$FixedArray$FixedArrayIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$FixedArray$FixedArrayIterator$class_type;
extern org$frostlanguage$frostc$FixedArray$FixedArrayIterator$class_type org$frostlanguage$frostc$FixedArray$FixedArrayIterator$class;

