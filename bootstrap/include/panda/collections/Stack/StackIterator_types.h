#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Stack panda$collections$Stack;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Stack$StackIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Stack* stack;
    panda$core$Int64 index;
} panda$collections$Stack$StackIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$Stack$StackIterator$class_type;
extern panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class;

