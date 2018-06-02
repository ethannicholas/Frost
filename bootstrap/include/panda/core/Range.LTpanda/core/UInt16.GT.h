#pragma once
#include "panda_c.h"
#include "UInt16.GT_types.h"
#include "panda/core/Range.LTpanda/core/UInt16.GT_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Range$LTpanda$core$UInt16$GT$init$panda$core$UInt16$panda$core$UInt16$panda$core$Bit(panda$core$Range$LTpanda$core$UInt16$GT* self, panda$core$UInt16 p_min, panda$core$UInt16 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$UInt16$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$UInt16$GT self);
void panda$core$Range$LTpanda$core$UInt16$GT$cleanup(panda$core$Range$LTpanda$core$UInt16$GT self);

