#pragma once
#include "panda_c.h"
#include "MapIterator_types.h"
typedef struct panda$collections$Iterator$MapIterator panda$collections$Iterator$MapIterator;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Iterator$MapIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$MapIterator$T$GT$$LPpanda$collections$Iterator$MapIterator$T$RP$EQ$GT$LPpanda$collections$Iterator$MapIterator$U$RP(panda$collections$Iterator$MapIterator* self, panda$collections$Iterator* p_base, panda$core$MutableMethod* p_map);
panda$core$Bit panda$collections$Iterator$MapIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$MapIterator* self);
panda$core$Object* panda$collections$Iterator$MapIterator$next$R$panda$collections$Iterator$MapIterator$U(panda$collections$Iterator$MapIterator* self);
void panda$collections$Iterator$MapIterator$cleanup(panda$collections$Iterator$MapIterator* self);

