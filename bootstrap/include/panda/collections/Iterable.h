#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$collections$Iterable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$Iterable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$collections$Iterable$class_type;
extern panda$collections$Iterable$class_type panda$collections$Iterable$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$collections$Iterable panda$collections$Iterable;

panda$collections$Iterator* panda$collections$Iterable$iterator$R$panda$collections$Iterator$LTpanda$collections$Iterable$T$GT(panda$collections$Iterable* self);

#endif
