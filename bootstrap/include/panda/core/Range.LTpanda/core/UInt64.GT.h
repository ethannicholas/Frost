#pragma once
#include "panda_c.h"
#include "UInt64.GT_types.h"
#include "panda/core/Range.LTpanda/core/UInt64.GT.h"
#include "panda/core/UInt64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$UInt64$GT panda$core$Range$LTpanda$core$UInt64$GT$init$panda$core$UInt64$panda$core$UInt64$panda$core$Bit(panda$core$UInt64 p_min, panda$core$UInt64 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$UInt64$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$UInt64$GT self);
void panda$core$Range$LTpanda$core$UInt64$GT$cleanup(panda$core$Range$LTpanda$core$UInt64$GT self);

