#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ListView {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$ListView;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$collections$ListView$class_type;
extern panda$collections$ListView$class_type panda$collections$ListView$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

panda$core$Object* panda$collections$ListView$$IDX$panda$core$Int64$R$panda$collections$ListView$T(panda$collections$ListView* self, panda$core$Int64 p_index);
panda$core$String* panda$collections$ListView$join$R$panda$core$String(panda$collections$ListView* self);
panda$core$String* panda$collections$ListView$join$panda$core$String$R$panda$core$String(panda$collections$ListView* self, panda$core$String* p_separator);

#endif
