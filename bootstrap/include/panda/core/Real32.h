#pragma once
#include "panda_c.h"
#include "Real32_types.h"
#include "panda/core/Real32_types.h"
#include "panda/core/Bit_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/UInt64_types.h"
#include "panda/core/Real64_types.h"

void panda$core$Real32$init$builtin_float32(panda$core$Real32* self, float p_value);
panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32(panda$core$Real32 self);
panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real32 panda$core$Real32$abs$R$panda$core$Real32(panda$core$Real32 self);
panda$core$Real32 panda$core$Real32$sqrt$R$panda$core$Real32(panda$core$Real32 self);
panda$core$Int64 panda$core$Real32$hash$R$panda$core$Int64(panda$core$Real32 self);
panda$core$Real32$nullable panda$core$Real32$parse$panda$core$String$R$panda$core$Real32$Q(panda$core$String* p_s);
panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8(panda$core$Real32 self);
panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16(panda$core$Real32 self);
panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32(panda$core$Real32 self);
panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64(panda$core$Real32 self);
panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8(panda$core$Real32 self);
panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16(panda$core$Real32 self);
panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32(panda$core$Real32 self);
panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64(panda$core$Real32 self);
panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64(panda$core$Real32 self);
panda$core$String* panda$core$Real32$convert$R$panda$core$String(panda$core$Real32 self);
void panda$core$Real32$cleanup(panda$core$Real32 self);

