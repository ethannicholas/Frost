#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$Frost {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$HashMap* allocations;
    frost$collections$HashMap* traces;
} frost$core$Frost;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } frost$core$Frost$class_type;
extern frost$core$Frost$class_type frost$core$Frost$class;

