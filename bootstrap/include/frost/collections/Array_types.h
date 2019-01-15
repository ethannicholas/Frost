#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$Array {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 _count;
    frost$core$Int64 capacity;
    frost$core$Object** data;
} frost$collections$Array;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[11]; } frost$collections$Array$class_type;
extern frost$collections$Array$class_type frost$collections$Array$class;

