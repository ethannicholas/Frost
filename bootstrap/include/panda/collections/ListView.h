#pragma once
#include "panda_c.h"
#include "ListView_types.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64_types.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
typedef struct panda$collections$Iterator panda$collections$Iterator;

panda$core$Object* panda$collections$ListView$$IDX$panda$core$Int64$R$panda$collections$ListView$T(panda$collections$ListView* self, panda$core$Int64 p_index);
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$GT p_r);
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r);
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r);
panda$collections$ListView* panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self, panda$core$MutableMethod* p_predicate);
panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(panda$collections$ListView* self);

