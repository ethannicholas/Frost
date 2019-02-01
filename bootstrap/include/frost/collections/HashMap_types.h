#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$collections$HashMap$Entry frost$collections$HashMap$Entry;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$HashMap {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int64 _count;
    frost$core$Int64 bucketCount;
    frost$collections$HashMap$Entry** contents;
    frost$core$Int64 threshold;
    frost$core$Int64 changeCount;
} frost$collections$HashMap;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } frost$collections$HashMap$class_type;
extern frost$collections$HashMap$class_type frost$collections$HashMap$class;

