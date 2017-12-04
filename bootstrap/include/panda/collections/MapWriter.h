#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$collections$MapWriter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$MapWriter;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$collections$MapWriter$class_type;
extern panda$collections$MapWriter$class_type panda$collections$MapWriter$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$MapWriter panda$collections$MapWriter;
typedef struct panda$core$Object panda$core$Object;

void panda$collections$MapWriter$$IDXEQ$panda$collections$MapWriter$K$panda$collections$MapWriter$V(panda$collections$MapWriter* self, panda$core$Object* p_key, panda$core$Object* p_value);

#endif
