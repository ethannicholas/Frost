#pragma once
#include "panda_c.h"
#include "Real32_types.h"
#include "panda/core/Real32_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/UInt64_types.h"
#include "panda/core/Real64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

panda$core$Real32 panda$core$Real32$init$builtin_float32(float p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$Int8(panda$core$Int8 p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$Int16(panda$core$Int16 p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$Int32(panda$core$Int32 p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$Int64(panda$core$Int64 p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$UInt8(panda$core$UInt8 p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$UInt16(panda$core$UInt16 p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$UInt32(panda$core$UInt32 p_value);
panda$core$Real32 panda$core$Real32$init$panda$core$UInt64(panda$core$UInt64 p_value);
panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real64 panda$core$Real32$$ADD$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real64 panda$core$Real32$$SUB$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32(panda$core$Real32 self);
panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real64 panda$core$Real32$$MUL$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int8 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int16 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int32 p_other);
panda$core$Real64 panda$core$Real32$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Real32 self, panda$core$Int64 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt8 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt16 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt32 p_other);
panda$core$Real64 panda$core$Real32$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Real32 self, panda$core$UInt64 p_other);
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Real64 panda$core$Real32$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$LT$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$GT$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$GE$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other);
panda$core$Bit panda$core$Real32$$LE$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real64 p_other);
panda$core$Real32 panda$core$Real32$get_abs$R$panda$core$Real32(panda$core$Real32 self);
panda$core$Real32 panda$core$Real32$min$panda$core$Int8$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int8 p_other);
panda$core$Real32 panda$core$Real32$min$panda$core$Int16$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int16 p_other);
panda$core$Real32 panda$core$Real32$min$panda$core$Int32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int32 p_other);
panda$core$Real64 panda$core$Real32$min$panda$core$Int64$R$panda$core$Real64(panda$core$Real32 self, panda$core$Int64 p_other);
panda$core$Real32 panda$core$Real32$min$panda$core$UInt8$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt8 p_other);
panda$core$Real32 panda$core$Real32$min$panda$core$UInt16$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt16 p_other);
panda$core$Real32 panda$core$Real32$min$panda$core$UInt32$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt32 p_other);
panda$core$Real64 panda$core$Real32$min$panda$core$UInt64$R$panda$core$Real64(panda$core$Real32 self, panda$core$UInt64 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$Int8$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int8 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$Int16$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int16 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$Int32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Int32 p_other);
panda$core$Real64 panda$core$Real32$max$panda$core$Int64$R$panda$core$Real64(panda$core$Real32 self, panda$core$Int64 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$UInt8$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt8 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$UInt16$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt16 p_other);
panda$core$Real32 panda$core$Real32$max$panda$core$UInt32$R$panda$core$Real32(panda$core$Real32 self, panda$core$UInt32 p_other);
panda$core$Real64 panda$core$Real32$max$panda$core$UInt64$R$panda$core$Real64(panda$core$Real32 self, panda$core$UInt64 p_other);
panda$core$Int64 panda$core$Real32$get_hash$R$panda$core$Int64(panda$core$Real32 self);
panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8(panda$core$Real32 self);
panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16(panda$core$Real32 self);
panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32(panda$core$Real32 self);
panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64(panda$core$Real32 self);
panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8(panda$core$Real32 self);
panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16(panda$core$Real32 self);
panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32(panda$core$Real32 self);
panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64(panda$core$Real32 self);
panda$core$Real32 panda$core$Real32$convert$R$panda$core$Real32(panda$core$Real32 self);
panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64(panda$core$Real32 self);
panda$core$String* panda$core$Real32$convert$R$panda$core$String(panda$core$Real32 self);
panda$core$String* panda$core$Real32$format$panda$core$String$R$panda$core$String(panda$core$Real32 self, panda$core$String* p_fmt);
void panda$core$Real32$cleanup(panda$core$Real32 self);

