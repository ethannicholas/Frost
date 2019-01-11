#pragma once
#include "panda_c.h"
#include "Int64_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/UInt16_types.h"
#include "panda/core/UInt32_types.h"
#include "panda/core/Real64_types.h"
#include "panda/core/UInt64_types.h"
#include "panda/core/Real32_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

panda$core$Int64 panda$core$Int64$init$builtin_int64(int64_t p_value);
panda$core$Int64 panda$core$Int64$init$panda$core$Int8(panda$core$Int8 p_value);
panda$core$Int64 panda$core$Int64$init$panda$core$Int16(panda$core$Int16 p_value);
panda$core$Int64 panda$core$Int64$init$panda$core$Int32(panda$core$Int32 p_value);
panda$core$Int64 panda$core$Int64$init$panda$core$UInt8(panda$core$UInt8 p_value);
panda$core$Int64 panda$core$Int64$init$panda$core$UInt16(panda$core$UInt16 p_value);
panda$core$Int64 panda$core$Int64$init$panda$core$UInt32(panda$core$UInt32 p_value);
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64(panda$core$Int64 self);
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt8 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt16 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt32 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt64 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Real32$R$panda$core$Real64(panda$core$Int64 self, panda$core$Real32 p_other);
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Int64 self, panda$core$Real64 p_other);
panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64(panda$core$Int64 self);
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other);
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other);
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other);
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other);
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int64$get_abs$R$panda$core$Int64(panda$core$Int64 self);
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other);
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other);
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$Range$LTpanda$core$Int64$GT p_range);
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT p_range);
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_index);
panda$core$Int64 panda$core$Int64$get_count$R$panda$core$Int64(panda$core$Int64 self);
panda$collections$Iterator* panda$core$Int64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int64 self);
panda$core$Int64 panda$core$Int64$get_hash$R$panda$core$Int64(panda$core$Int64 self);
panda$core$Int64$nullable panda$core$Int64$parse$panda$core$String$panda$core$Int64$R$panda$core$Int64$Q(panda$core$String* p_str, panda$core$Int64 p_radix);
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 self);
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 self);
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 self);
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 self);
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 self);
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 self);
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 self);
panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32(panda$core$Int64 self);
panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64(panda$core$Int64 self);
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 self);
panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String(panda$core$Int64 self, panda$core$String* p_fmt);
void panda$core$Int64$cleanup(panda$core$Int64 self);

