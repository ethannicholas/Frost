#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$Console {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$io$Console;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$io$Console$class_type;
extern panda$io$Console$class_type panda$io$Console$class;

