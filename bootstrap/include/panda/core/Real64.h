#pragma once
#include "panda_c.h"
#include "Real64_types.h"
#include "panda/core/Real64_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/UInt64_types.h"
#include "panda/core/Real32_types.h"

void panda$core$Real64$init$builtin_float64(panda$core$Real64* self, double p_value);
void panda$core$Real64$init$panda$core$Int64(panda$core$Real64* self, panda$core$Int64 p_value);
panda$core$Real64 panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$$SUB$R$panda$core$Real64(panda$core$Real64 self);
panda$core$Real64 panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$min$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$max$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other);
panda$core$Real64 panda$core$Real64$abs$R$panda$core$Real64(panda$core$Real64 self);
panda$core$Real64 panda$core$Real64$sqrt$R$panda$core$Real64(panda$core$Real64 self);
panda$core$Int64 panda$core$Real64$hash$R$panda$core$Int64(panda$core$Real64 self);
panda$core$Real64$nullable panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q(panda$core$String* p_s);
panda$core$Int8 panda$core$Real64$convert$R$panda$core$Int8(panda$core$Real64 self);
panda$core$Int16 panda$core$Real64$convert$R$panda$core$Int16(panda$core$Real64 self);
panda$core$Int32 panda$core$Real64$convert$R$panda$core$Int32(panda$core$Real64 self);
panda$core$Int64 panda$core$Real64$convert$R$panda$core$Int64(panda$core$Real64 self);
panda$core$UInt8 panda$core$Real64$convert$R$panda$core$UInt8(panda$core$Real64 self);
panda$core$UInt16 panda$core$Real64$convert$R$panda$core$UInt16(panda$core$Real64 self);
panda$core$UInt32 panda$core$Real64$convert$R$panda$core$UInt32(panda$core$Real64 self);
panda$core$UInt64 panda$core$Real64$convert$R$panda$core$UInt64(panda$core$Real64 self);
panda$core$Real32 panda$core$Real64$convert$R$panda$core$Real32(panda$core$Real64 self);
panda$core$String* panda$core$Real64$convert$R$panda$core$String(panda$core$Real64 self);
void panda$core$Real64$cleanup(panda$core$Real64 self);

