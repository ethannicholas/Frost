#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$core$Class {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Class* super;
    ITable* itable;
    void* vtable[];
} panda$core$Class;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Class$class_type;
extern panda$core$Class$class_type panda$core$Class$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;

void panda$core$Class$init(panda$core$Class* self);
void panda$core$Class$cleanup(panda$core$Class* self);

#endif
