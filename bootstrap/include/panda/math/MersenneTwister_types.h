#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$String panda$core$String;

typedef struct panda$math$MersenneTwister {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Array* mt;
    panda$core$Int64 index;
    panda$collections$ListView* state;
} panda$math$MersenneTwister;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[7]; } panda$math$MersenneTwister$class_type;
extern panda$math$MersenneTwister$class_type panda$math$MersenneTwister$class;

