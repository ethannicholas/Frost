#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Int64.h"
typedef struct panda$collections$ImmutableHashMap$Entry panda$collections$ImmutableHashMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableHashMap$EntryIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ImmutableHashMap* map;
    panda$core$Int64 bucket;
    panda$collections$ImmutableHashMap$Entry* entry;
} panda$collections$ImmutableHashMap$EntryIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ImmutableHashMap$EntryIterator$class_type;
extern panda$collections$ImmutableHashMap$EntryIterator$class_type panda$collections$ImmutableHashMap$EntryIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$ImmutableHashMap$EntryIterator panda$collections$ImmutableHashMap$EntryIterator;
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Bit.h"
typedef struct panda$collections$ImmutableHashMap$Entry panda$collections$ImmutableHashMap$Entry;

void panda$collections$ImmutableHashMap$EntryIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self, panda$collections$ImmutableHashMap* p_map);
panda$core$Bit panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$EntryIterator* self);
panda$collections$ImmutableHashMap$Entry* panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self);
void panda$collections$ImmutableHashMap$EntryIterator$cleanup(panda$collections$ImmutableHashMap$EntryIterator* self);

#endif
