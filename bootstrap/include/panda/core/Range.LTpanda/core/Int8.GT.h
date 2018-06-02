#pragma once
#include "panda_c.h"
#include "Int8.GT_types.h"
#include "panda/core/Range.LTpanda/core/Int8.GT_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Range$LTpanda$core$Int8$GT$init$panda$core$Int8$panda$core$Int8$panda$core$Bit(panda$core$Range$LTpanda$core$Int8$GT* self, panda$core$Int8 p_min, panda$core$Int8 p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$Int8$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int8$GT self);
void panda$core$Range$LTpanda$core$Int8$GT$cleanup(panda$core$Range$LTpanda$core$Int8$GT self);

