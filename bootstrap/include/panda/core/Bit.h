#pragma once
#include "panda_c.h"
#include "Bit_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"

void panda$core$Bit$init$builtin_bit(panda$core$Bit* self, bool p_value);
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit self);
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self);
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self);
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other);
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit self, panda$core$String* p_fmt);
void panda$core$Bit$cleanup(panda$core$Bit self);

