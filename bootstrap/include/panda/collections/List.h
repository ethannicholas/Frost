#pragma once
#include "panda_c.h"
#include "List_types.h"
typedef struct panda$collections$List panda$collections$List;
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
typedef struct panda$core$MutableMethod panda$core$MutableMethod;

void panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT(panda$collections$List* self, panda$core$Range$LTpanda$core$Int64$GT p_range, panda$collections$ListView* p_list);
void panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT(panda$collections$List* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range, panda$collections$ListView* p_list);
void panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* self, panda$core$MutableMethod* p_f);
void panda$collections$List$sortInPlace$$LPpanda$collections$List$T$Cpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* self, panda$core$MutableMethod* p_greater);

