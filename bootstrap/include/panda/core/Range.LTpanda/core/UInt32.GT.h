#pragma once
#include "panda_c.h"
#include "UInt32.GT_types.h"
#include "panda/core/Range.LTpanda/core/UInt32.GT.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$UInt32$GT panda$core$Range$LTpanda$core$UInt32$GT$init$panda$core$UInt32$panda$core$UInt32$panda$core$Bit(panda$core$UInt32 p_min, panda$core$UInt32 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$UInt32$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$UInt32$GT self);
void panda$core$Range$LTpanda$core$UInt32$GT$cleanup(panda$core$Range$LTpanda$core$UInt32$GT self);

