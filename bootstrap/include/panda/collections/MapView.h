#pragma once
#include "panda_c.h"
#include "MapView_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$collections$MapView panda$collections$MapView;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;

panda$core$Int64 panda$collections$MapView$get_count$R$panda$core$Int64(panda$collections$MapView* self);
panda$core$Object* panda$collections$MapView$$IDX$panda$collections$MapView$K$R$panda$collections$MapView$V$Q(panda$collections$MapView* self, panda$core$Object* p_key);
panda$core$Bit panda$collections$MapView$contains$panda$collections$MapView$K$R$panda$core$Bit(panda$collections$MapView* self, panda$core$Object* p_key);
panda$collections$Iterator* panda$collections$MapView$get_keys$R$panda$collections$Iterator$LTpanda$collections$MapView$K$GT(panda$collections$MapView* self);
panda$collections$Iterator* panda$collections$MapView$get_values$R$panda$collections$Iterator$LTpanda$collections$MapView$V$GT(panda$collections$MapView* self);

