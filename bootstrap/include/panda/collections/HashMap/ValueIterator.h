#pragma once
#include "panda_c.h"
#include "ValueIterator_types.h"
typedef struct panda$collections$HashMap$ValueIterator panda$collections$HashMap$ValueIterator;
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT(panda$collections$HashMap$ValueIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$ValueIterator* self);
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(panda$collections$HashMap$ValueIterator* self);
void panda$collections$HashMap$ValueIterator$cleanup(panda$collections$HashMap$ValueIterator* self);

