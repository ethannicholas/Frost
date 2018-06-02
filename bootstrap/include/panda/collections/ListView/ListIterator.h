#pragma once
#include "panda_c.h"
#include "ListIterator_types.h"
typedef struct panda$collections$ListView$ListIterator panda$collections$ListView$ListIterator;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT(panda$collections$ListView$ListIterator* self, panda$collections$ListView* p_list);
panda$core$Bit panda$collections$ListView$ListIterator$get_done$R$panda$core$Bit(panda$collections$ListView$ListIterator* self);
panda$core$Object* panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T(panda$collections$ListView$ListIterator* self);
void panda$collections$ListView$ListIterator$cleanup(panda$collections$ListView$ListIterator* self);

