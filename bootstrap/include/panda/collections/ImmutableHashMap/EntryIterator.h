#pragma once
#include "panda_c.h"
#include "EntryIterator_types.h"
typedef struct panda$collections$ImmutableHashMap$EntryIterator panda$collections$ImmutableHashMap$EntryIterator;
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$ImmutableHashMap$Entry panda$collections$ImmutableHashMap$Entry;

void panda$collections$ImmutableHashMap$EntryIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self, panda$collections$ImmutableHashMap* p_map);
panda$core$Bit panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$EntryIterator* self);
panda$collections$ImmutableHashMap$Entry* panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self);
void panda$collections$ImmutableHashMap$EntryIterator$cleanup(panda$collections$ImmutableHashMap$EntryIterator* self);

