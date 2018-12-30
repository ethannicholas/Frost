#pragma once
#include "panda_c.h"
#include "Index.Q.GT_types.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.Q.GT.h"
#include "panda/core/MutableString/Index_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Range$LTpanda$core$MutableString$Index$Q$GT panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(panda$core$MutableString$Index$nullable p_min, panda$core$MutableString$Index$nullable p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$MutableString$Index$Q$GT self);
void panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$cleanup(panda$core$Range$LTpanda$core$MutableString$Index$Q$GT self);

