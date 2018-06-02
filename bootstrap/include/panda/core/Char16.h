#pragma once
#include "panda_c.h"
#include "Char16_types.h"
#include "panda/core/Char16_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/UInt64_types.h"

void panda$core$Char16$init$panda$core$UInt16(panda$core$Char16* self, panda$core$UInt16 p_value);
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other);
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char16 self, panda$core$Int64 p_count);
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$panda$core$Char16$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char16 p_char);
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self);
panda$core$Int8 panda$core$Char16$convert$R$panda$core$Int8(panda$core$Char16 self);
panda$core$Int16 panda$core$Char16$convert$R$panda$core$Int16(panda$core$Char16 self);
panda$core$Int32 panda$core$Char16$convert$R$panda$core$Int32(panda$core$Char16 self);
panda$core$Int64 panda$core$Char16$convert$R$panda$core$Int64(panda$core$Char16 self);
panda$core$UInt8 panda$core$Char16$convert$R$panda$core$UInt8(panda$core$Char16 self);
panda$core$UInt16 panda$core$Char16$convert$R$panda$core$UInt16(panda$core$Char16 self);
panda$core$UInt32 panda$core$Char16$convert$R$panda$core$UInt32(panda$core$Char16 self);
panda$core$UInt64 panda$core$Char16$convert$R$panda$core$UInt64(panda$core$Char16 self);
panda$core$String* panda$core$Char16$convert$R$panda$core$String(panda$core$Char16 self);
void panda$core$Char16$cleanup(panda$core$Char16 self);

