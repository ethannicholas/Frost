#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$collections$IdentityMap$Entry panda$collections$IdentityMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$IdentityMap {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 bucketCount;
    panda$collections$IdentityMap$Entry** contents;
    panda$core$Int64 threshold;
    panda$core$Int64 changeCount;
} panda$collections$IdentityMap;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[12]; } panda$collections$IdentityMap$class_type;
extern panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class;

