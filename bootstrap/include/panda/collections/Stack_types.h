#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Stack {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Array* contents;
} panda$collections$Stack;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[9]; } panda$collections$Stack$class_type;
extern panda$collections$Stack$class_type panda$collections$Stack$class;

