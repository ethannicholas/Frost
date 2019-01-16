#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ListView$ListIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ListView* list;
    panda$core$Int64 index;
} panda$collections$ListView$ListIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ListView$ListIterator$class_type;
extern panda$collections$ListView$ListIterator$class_type panda$collections$ListView$ListIterator$class;

