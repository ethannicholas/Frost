#pragma once
#include "panda_c.h"
#include "Index_types.h"
#include "panda/core/MutableString/Index_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

void panda$core$MutableString$Index$init$panda$core$Int64(panda$core$MutableString$Index* self, panda$core$Int64 p_value);
panda$core$Bit panda$core$MutableString$Index$$EQ$panda$core$MutableString$Index$R$panda$core$Bit(panda$core$MutableString$Index self, panda$core$MutableString$Index p_other);
panda$core$Bit panda$core$MutableString$Index$$GT$panda$core$MutableString$Index$R$panda$core$Bit(panda$core$MutableString$Index self, panda$core$MutableString$Index p_other);
panda$core$Int64 panda$core$MutableString$Index$hash$R$panda$core$Int64(panda$core$MutableString$Index self);
void panda$core$MutableString$Index$cleanup(panda$core$MutableString$Index self);

