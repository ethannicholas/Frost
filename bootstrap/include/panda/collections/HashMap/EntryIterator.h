#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Int64.h"
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;

typedef struct panda$collections$HashMap$EntryIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* map;
    panda$core$Int64 bucket;
    panda$collections$HashMap$Entry* entry;
} panda$collections$HashMap$EntryIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$HashMap$EntryIterator$class_type;
extern panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$HashMap$EntryIterator panda$collections$HashMap$EntryIterator;
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Bit.h"
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;

void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* self);
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self);
void panda$collections$HashMap$EntryIterator$cleanup(panda$collections$HashMap$EntryIterator* self);

#endif
