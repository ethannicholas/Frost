#pragma once
#include "panda_c.h"
#include "Index.GT_types.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.GT.h"
#include "panda/core/MutableString/Index_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$MutableString$Index$GT panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(panda$core$MutableString$Index p_min, panda$core$MutableString$Index p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$MutableString$Index$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$MutableString$Index$GT self);
void panda$core$Range$LTpanda$core$MutableString$Index$GT$cleanup(panda$core$Range$LTpanda$core$MutableString$Index$GT self);

