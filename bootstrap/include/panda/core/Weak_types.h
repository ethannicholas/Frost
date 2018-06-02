#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Weak {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Object* value;
} panda$core$Weak;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$core$Weak$class_type;
extern panda$core$Weak$class_type panda$core$Weak$class;

