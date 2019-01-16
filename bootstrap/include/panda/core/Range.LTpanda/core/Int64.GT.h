#pragma once
#include "panda_c.h"
#include "Int64.GT_types.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$Int64$GT panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(panda$core$Int64 p_min, panda$core$Int64 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int64$GT self);
void panda$core$Range$LTpanda$core$Int64$GT$cleanup(panda$core$Range$LTpanda$core$Int64$GT self);

