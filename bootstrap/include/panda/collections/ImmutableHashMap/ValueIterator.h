#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$ImmutableHashMap$EntryIterator panda$collections$ImmutableHashMap$EntryIterator;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableHashMap$ValueIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ImmutableHashMap$EntryIterator* base;
} panda$collections$ImmutableHashMap$ValueIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ImmutableHashMap$ValueIterator$class_type;
extern panda$collections$ImmutableHashMap$ValueIterator$class_type panda$collections$ImmutableHashMap$ValueIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$ImmutableHashMap$ValueIterator panda$collections$ImmutableHashMap$ValueIterator;
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT(panda$collections$ImmutableHashMap$ValueIterator* self, panda$collections$ImmutableHashMap* p_map);
panda$core$Bit panda$collections$ImmutableHashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$ValueIterator* self);
panda$core$Object* panda$collections$ImmutableHashMap$ValueIterator$next$R$panda$collections$ImmutableHashMap$ValueIterator$V(panda$collections$ImmutableHashMap$ValueIterator* self);
void panda$collections$ImmutableHashMap$ValueIterator$cleanup(panda$collections$ImmutableHashMap$ValueIterator* self);

#endif
