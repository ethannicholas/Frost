#pragma once
#include "frost_c.h"
#include "UInt64_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/UInt64.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$UInt64 frost$core$UInt64$init$builtin_uint64(uint64_t p_value);
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt32(frost$core$UInt32 p_value);
frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64(frost$core$UInt64 self);
frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$UInt64 self, frost$core$Int8 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$UInt64 self, frost$core$Int16 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$UInt64 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt64 self, frost$core$Int64 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$UInt64 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt64 self, frost$core$Real64 p_other);
frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64(frost$core$UInt64 self);
frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt8 p_other);
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt16 p_other);
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 self, frost$core$UInt64 p_other);
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$Range$LTfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$Range$LTfrost$core$UInt64$GT p_range);
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT p_range);
frost$core$Bit frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt64 self, frost$core$Int64 p_index);
frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64(frost$core$UInt64 self);
frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt64 self);
frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64(frost$core$UInt64 self);
frost$core$UInt64$nullable frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* p_str, frost$core$Int64 p_radix);
frost$core$Int8 frost$core$UInt64$convert$R$frost$core$Int8(frost$core$UInt64 self);
frost$core$Int16 frost$core$UInt64$convert$R$frost$core$Int16(frost$core$UInt64 self);
frost$core$Int32 frost$core$UInt64$convert$R$frost$core$Int32(frost$core$UInt64 self);
frost$core$Int64 frost$core$UInt64$convert$R$frost$core$Int64(frost$core$UInt64 self);
frost$core$UInt8 frost$core$UInt64$convert$R$frost$core$UInt8(frost$core$UInt64 self);
frost$core$UInt16 frost$core$UInt64$convert$R$frost$core$UInt16(frost$core$UInt64 self);
frost$core$UInt32 frost$core$UInt64$convert$R$frost$core$UInt32(frost$core$UInt64 self);
frost$core$Real32 frost$core$UInt64$convert$R$frost$core$Real32(frost$core$UInt64 self);
frost$core$Real64 frost$core$UInt64$convert$R$frost$core$Real64(frost$core$UInt64 self);
frost$core$String* frost$core$UInt64$convert$R$frost$core$String(frost$core$UInt64 self);
frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String(frost$core$UInt64 self, frost$core$String* p_fmt);
void frost$core$UInt64$cleanup(frost$core$UInt64 self);

