#pragma once
#include "panda_c.h"
#include "Char8_types.h"
#include "panda/core/Char8_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/UInt64_types.h"

void panda$core$Char8$init$panda$core$UInt8(panda$core$Char8* self, panda$core$UInt8 p_value);
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other);
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self);
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char8 self, panda$core$Int64 p_count);
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char);
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self);
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self);
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self);
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self);
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self);
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 self);
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 self);
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 self);
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 self);
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 self);
void panda$core$Char8$cleanup(panda$core$Char8 self);

