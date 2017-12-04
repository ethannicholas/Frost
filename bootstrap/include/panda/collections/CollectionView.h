#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$collections$CollectionView {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$CollectionView;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$collections$CollectionView$class_type;
extern panda$collections$CollectionView$class_type panda$collections$CollectionView$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$collections$CollectionView panda$collections$CollectionView;

panda$core$Int64 panda$collections$CollectionView$get_count$R$panda$core$Int64(panda$collections$CollectionView* self);

#endif
