#pragma once
#include "panda_c.h"
#include "Char32_types.h"
#include "panda/core/Char32_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/UInt64_types.h"

void panda$core$Char32$init$panda$core$Int32(panda$core$Char32* self, panda$core$Int32 p_value);
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other);
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char32 self, panda$core$Int64 p_count);
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char32 p_char);
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self);
panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8(panda$core$Char32 self);
panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16(panda$core$Char32 self);
panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32(panda$core$Char32 self);
panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64(panda$core$Char32 self);
panda$core$UInt8 panda$core$Char32$convert$R$panda$core$UInt8(panda$core$Char32 self);
panda$core$UInt16 panda$core$Char32$convert$R$panda$core$UInt16(panda$core$Char32 self);
panda$core$UInt32 panda$core$Char32$convert$R$panda$core$UInt32(panda$core$Char32 self);
panda$core$UInt64 panda$core$Char32$convert$R$panda$core$UInt64(panda$core$Char32 self);
panda$core$String* panda$core$Char32$convert$R$panda$core$String(panda$core$Char32 self);
void panda$core$Char32$cleanup(panda$core$Char32 self);

