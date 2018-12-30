#pragma once
#include "panda_c.h"
#include "UInt8.GT_types.h"
#include "panda/core/Range.LTpanda/core/UInt8.GT.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$UInt8$GT panda$core$Range$LTpanda$core$UInt8$GT$init$panda$core$UInt8$panda$core$UInt8$panda$core$Bit(panda$core$UInt8 p_min, panda$core$UInt8 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$UInt8$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$UInt8$GT self);
void panda$core$Range$LTpanda$core$UInt8$GT$cleanup(panda$core$Range$LTpanda$core$UInt8$GT self);

