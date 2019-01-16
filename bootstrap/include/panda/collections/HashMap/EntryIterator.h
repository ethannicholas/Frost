#pragma once
#include "panda_c.h"
#include "EntryIterator_types.h"
typedef struct panda$collections$HashMap$EntryIterator panda$collections$HashMap$EntryIterator;
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;

void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* self);
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self);
void panda$collections$HashMap$EntryIterator$cleanup(panda$collections$HashMap$EntryIterator* self);

