#pragma once
#include "panda_c.h"
#include "Int16.GT_types.h"
#include "panda/core/Range.LTpanda/core/Int16.GT.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$Int16$GT panda$core$Range$LTpanda$core$Int16$GT$init$panda$core$Int16$panda$core$Int16$panda$core$Bit(panda$core$Int16 p_min, panda$core$Int16 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$Int16$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int16$GT self);
void panda$core$Range$LTpanda$core$Int16$GT$cleanup(panda$core$Range$LTpanda$core$Int16$GT self);

