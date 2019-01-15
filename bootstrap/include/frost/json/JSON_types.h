#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$json$JSON {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 $rawValue;
    int8_t $data[8];
} frost$json$JSON;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[15]; } frost$json$JSON$class_type;
extern frost$json$JSON$class_type frost$json$JSON$class;

