#pragma once
#include "panda_c.h"
#include "ValueIterator_types.h"
typedef struct panda$collections$ImmutableHashMap$ValueIterator panda$collections$ImmutableHashMap$ValueIterator;
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT(panda$collections$ImmutableHashMap$ValueIterator* self, panda$collections$ImmutableHashMap* p_map);
panda$core$Bit panda$collections$ImmutableHashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$ValueIterator* self);
panda$core$Object* panda$collections$ImmutableHashMap$ValueIterator$next$R$panda$collections$ImmutableHashMap$ValueIterator$V(panda$collections$ImmutableHashMap$ValueIterator* self);
void panda$collections$ImmutableHashMap$ValueIterator$cleanup(panda$collections$ImmutableHashMap$ValueIterator* self);

