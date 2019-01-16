#pragma once
#include "panda_c.h"
#include "RangeIterator_types.h"
typedef struct panda$collections$Iterator$RangeIterator panda$collections$Iterator$RangeIterator;
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64(panda$collections$Iterator$RangeIterator* self, panda$collections$Iterator* p_base, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Bit p_inclusive, panda$core$Int64 p_step);
panda$core$Bit panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$RangeIterator* self);
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(panda$collections$Iterator$RangeIterator* self);
void panda$collections$Iterator$RangeIterator$cleanup(panda$collections$Iterator$RangeIterator* self);

