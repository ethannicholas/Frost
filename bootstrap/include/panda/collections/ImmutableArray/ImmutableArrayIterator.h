#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "panda/core/Int64.h"

typedef struct panda$collections$ImmutableArray$ImmutableArrayIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ImmutableArray* array;
    panda$core$Int64 index;
} panda$collections$ImmutableArray$ImmutableArrayIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ImmutableArray$ImmutableArrayIterator$class_type;
extern panda$collections$ImmutableArray$ImmutableArrayIterator$class_type panda$collections$ImmutableArray$ImmutableArrayIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$ImmutableArray$ImmutableArrayIterator panda$collections$ImmutableArray$ImmutableArrayIterator;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT(panda$collections$ImmutableArray$ImmutableArrayIterator* self, panda$collections$ImmutableArray* p_array);
panda$core$Bit panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableArray$ImmutableArrayIterator* self);
panda$core$Object* panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T(panda$collections$ImmutableArray$ImmutableArrayIterator* self);

#endif
