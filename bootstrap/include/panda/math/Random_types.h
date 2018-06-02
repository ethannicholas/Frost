#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$math$Random {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$math$Random;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[8]; } panda$math$Random$class_type;
extern panda$math$Random$class_type panda$math$Random$class;

