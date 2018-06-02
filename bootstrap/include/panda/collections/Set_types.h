#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Set {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* contents;
} panda$collections$Set;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[8]; } panda$collections$Set$class_type;
extern panda$collections$Set$class_type panda$collections$Set$class;

