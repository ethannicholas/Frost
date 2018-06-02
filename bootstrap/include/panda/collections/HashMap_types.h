#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$HashMap {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 bucketCount;
    panda$collections$HashMap$Entry** contents;
    panda$core$Int64 threshold;
    panda$core$Int64 changeCount;
} panda$collections$HashMap;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[13]; } panda$collections$HashMap$class_type;
extern panda$collections$HashMap$class_type panda$collections$HashMap$class;

