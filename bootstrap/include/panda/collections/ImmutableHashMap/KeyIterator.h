#pragma once
#include "panda_c.h"
#include "KeyIterator_types.h"
typedef struct panda$collections$ImmutableHashMap$KeyIterator panda$collections$ImmutableHashMap$KeyIterator;
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$Key panda$collections$Key;

void panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT(panda$collections$ImmutableHashMap$KeyIterator* self, panda$collections$ImmutableHashMap* p_map);
panda$core$Bit panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$KeyIterator* self);
panda$collections$Key* panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K(panda$collections$ImmutableHashMap$KeyIterator* self);
void panda$collections$ImmutableHashMap$KeyIterator$cleanup(panda$collections$ImmutableHashMap$KeyIterator* self);

