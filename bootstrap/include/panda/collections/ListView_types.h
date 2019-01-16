#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ListView {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$ListView;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[9]; } panda$collections$ListView$class_type;
extern panda$collections$ListView$class_type panda$collections$ListView$class;

