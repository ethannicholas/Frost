#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$core$Immutable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Immutable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Immutable$class_type;
extern panda$core$Immutable$class_type panda$core$Immutable$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Immutable panda$core$Immutable;

void panda$core$Immutable$init(panda$core$Immutable* self);
void panda$core$Immutable$cleanup(panda$core$Immutable* self);

#endif
