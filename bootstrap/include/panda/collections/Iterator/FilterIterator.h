#pragma once
#include "panda_c.h"
#include "FilterIterator_types.h"
typedef struct panda$collections$Iterator$FilterIterator panda$collections$Iterator$FilterIterator;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$Iterator$FilterIterator* self, panda$collections$Iterator* p_base, panda$core$MutableMethod* p_filter);
void panda$collections$Iterator$FilterIterator$getNext(panda$collections$Iterator$FilterIterator* self);
panda$core$Bit panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$FilterIterator* self);
panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(panda$collections$Iterator$FilterIterator* self);
void panda$collections$Iterator$FilterIterator$cleanup(panda$collections$Iterator$FilterIterator* self);

