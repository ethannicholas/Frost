#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Array$ArrayIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Array* array;
    panda$core$Int64 index;
} panda$collections$Array$ArrayIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$Array$ArrayIterator$class_type;
extern panda$collections$Array$ArrayIterator$class_type panda$collections$Array$ArrayIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Array$ArrayIterator panda$collections$Array$ArrayIterator;
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT(panda$collections$Array$ArrayIterator* self, panda$collections$Array* p_array);
panda$core$Bit panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit(panda$collections$Array$ArrayIterator* self);
panda$core$Object* panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T(panda$collections$Array$ArrayIterator* self);
void panda$collections$Array$ArrayIterator$cleanup(panda$collections$Array$ArrayIterator* self);

#endif
