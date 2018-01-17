#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$core$Value {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Value;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Value$class_type;
extern panda$core$Value$class_type panda$core$Value$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Value panda$core$Value;

void panda$core$Value$init(panda$core$Value* self);
void panda$core$Value$cleanup(panda$core$Value* self);

#endif
