#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Iterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$Iterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[13]; } panda$collections$Iterator$class_type;
extern panda$collections$Iterator$class_type panda$collections$Iterator$class;

