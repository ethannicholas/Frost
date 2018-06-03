#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Equatable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Equatable;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$Equatable$class_type;
extern panda$core$Equatable$class_type panda$core$Equatable$class;
