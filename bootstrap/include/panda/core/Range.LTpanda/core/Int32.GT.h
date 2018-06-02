#pragma once
#include "panda_c.h"
#include "Int32.GT_types.h"
#include "panda/core/Range.LTpanda/core/Int32.GT_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Range$LTpanda$core$Int32$GT$init$panda$core$Int32$panda$core$Int32$panda$core$Bit(panda$core$Range$LTpanda$core$Int32$GT* self, panda$core$Int32 p_min, panda$core$Int32 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$Int32$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int32$GT self);
void panda$core$Range$LTpanda$core$Int32$GT$cleanup(panda$core$Range$LTpanda$core$Int32$GT self);

