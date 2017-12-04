#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$collections$MapView {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$MapView;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[6]; } panda$collections$MapView$class_type;
extern panda$collections$MapView$class_type panda$collections$MapView$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$collections$MapView panda$collections$MapView;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$Iterator panda$collections$Iterator;

panda$core$Int64 panda$collections$MapView$get_count$R$panda$core$Int64(panda$collections$MapView* self);
panda$core$Object* panda$collections$MapView$$IDX$panda$collections$MapView$K$R$panda$collections$MapView$V$Q(panda$collections$MapView* self, panda$core$Object* p_key);
panda$collections$Iterator* panda$collections$MapView$keys$R$panda$collections$Iterator$LTpanda$collections$MapView$K$GT(panda$collections$MapView* self);
panda$collections$Iterator* panda$collections$MapView$values$R$panda$collections$Iterator$LTpanda$collections$MapView$V$GT(panda$collections$MapView* self);

#endif
