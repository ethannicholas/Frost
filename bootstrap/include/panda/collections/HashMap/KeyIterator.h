#pragma once
#include "panda_c.h"
#include "KeyIterator_types.h"
typedef struct panda$collections$HashMap$KeyIterator panda$collections$HashMap$KeyIterator;
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$Key panda$collections$Key;

void panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT(panda$collections$HashMap$KeyIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$KeyIterator* self);
panda$collections$Key* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(panda$collections$HashMap$KeyIterator* self);
void panda$collections$HashMap$KeyIterator$cleanup(panda$collections$HashMap$KeyIterator* self);

