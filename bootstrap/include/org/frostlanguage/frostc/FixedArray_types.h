#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$FixedArray {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 _count;
    frost$core$Int64 dummy;
    frost$core$Object** data;
} org$frostlanguage$frostc$FixedArray;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$FixedArray$class_type;
extern org$frostlanguage$frostc$FixedArray$class_type org$frostlanguage$frostc$FixedArray$class;

