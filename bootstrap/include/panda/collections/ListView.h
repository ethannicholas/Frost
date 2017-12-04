#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$collections$ListView {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$ListView;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$collections$ListView$class_type;
extern panda$collections$ListView$class_type panda$collections$ListView$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64.h"

panda$core$Object* panda$collections$ListView$$IDX$panda$core$Int64$R$panda$collections$ListView$T(panda$collections$ListView* self, panda$core$Int64 p_index);

#endif
