#pragma once
#include "panda_c.h"
#include "Index.GT_types.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$String$Index$GT panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(panda$core$String$Index p_min, panda$core$String$Index p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$String$Index$GT self);
void panda$core$Range$LTpanda$core$String$Index$GT$cleanup(panda$core$Range$LTpanda$core$String$Index$GT self);

