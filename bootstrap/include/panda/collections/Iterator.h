#pragma once
#include "panda_c.h"
#include "Iterator_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64_types.h"
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
typedef struct panda$collections$List panda$collections$List;

panda$core$Bit panda$collections$Iterator$get_done$R$panda$core$Bit(panda$collections$Iterator* self);
panda$core$Object* panda$collections$Iterator$next$R$panda$collections$Iterator$T(panda$collections$Iterator* self);
panda$core$Int64 panda$collections$Iterator$count$R$panda$core$Int64(panda$collections$Iterator* self);
panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0);
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$MutableMethod* p_predicate);
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range);
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_range);
panda$collections$List* panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self);
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* self, panda$core$MutableMethod* p_m);
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f);
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start);

