#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int8_types.h"
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Method {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int8* pointer;
    panda$core$Immutable* target;
} panda$core$Method;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Method$class_type;
extern panda$core$Method$class_type panda$core$Method$class;

