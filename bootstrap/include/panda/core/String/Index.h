#pragma once
#include "panda_c.h"
#include "Index_types.h"
#include "panda/core/String/Index_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

void panda$core$String$Index$init$panda$core$Int64(panda$core$String$Index* self, panda$core$Int64 p_value);
panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Bit panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Bit panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Bit panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Bit panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Bit panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Int64 panda$core$String$Index$hash$R$panda$core$Int64(panda$core$String$Index self);
void panda$core$String$Index$cleanup(panda$core$String$Index self);

