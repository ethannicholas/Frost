#pragma once
#include "frost_c.h"
#include "Int64_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$Int64 frost$core$Int64$init$builtin_int64(int64_t p_value);
frost$core$Int64 frost$core$Int64$init$frost$core$Int8(frost$core$Int8 p_value);
frost$core$Int64 frost$core$Int64$init$frost$core$Int16(frost$core$Int16 p_value);
frost$core$Int64 frost$core$Int64$init$frost$core$Int32(frost$core$Int32 p_value);
frost$core$Int64 frost$core$Int64$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$Int64 frost$core$Int64$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Int64 frost$core$Int64$init$frost$core$UInt32(frost$core$UInt32 p_value);
frost$core$Int64 frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int64$$SUB$R$frost$core$Int64(frost$core$Int64 self);
frost$core$Int64 frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Int64 self, frost$core$UInt8 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Int64 self, frost$core$UInt16 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Int64 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int64 self, frost$core$UInt64 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Int64 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int64 self, frost$core$Real64 p_other);
frost$core$Int64 frost$core$Int64$$BNOT$R$frost$core$Int64(frost$core$Int64 self);
frost$core$Int64 frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$Int64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$UInt64 frost$core$Int64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64(frost$core$Int64 self);
frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int8 p_other);
frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 self, frost$core$Int64 p_other);
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$Range$LTfrost$core$Int64$GT p_range);
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT p_range);
frost$core$Bit frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 self, frost$core$Int64 p_index);
frost$core$Int64 frost$core$Int64$get_count$R$frost$core$Int64(frost$core$Int64 self);
frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int64 self);
frost$core$Int64 frost$core$Int64$get_hash$R$frost$core$Int64(frost$core$Int64 self);
frost$core$Int64$nullable frost$core$Int64$parse$frost$core$String$frost$core$Int64$R$frost$core$Int64$Q(frost$core$String* p_str, frost$core$Int64 p_radix);
frost$core$Int8 frost$core$Int64$convert$R$frost$core$Int8(frost$core$Int64 self);
frost$core$Int16 frost$core$Int64$convert$R$frost$core$Int16(frost$core$Int64 self);
frost$core$Int32 frost$core$Int64$convert$R$frost$core$Int32(frost$core$Int64 self);
frost$core$UInt8 frost$core$Int64$convert$R$frost$core$UInt8(frost$core$Int64 self);
frost$core$UInt16 frost$core$Int64$convert$R$frost$core$UInt16(frost$core$Int64 self);
frost$core$UInt32 frost$core$Int64$convert$R$frost$core$UInt32(frost$core$Int64 self);
frost$core$UInt64 frost$core$Int64$convert$R$frost$core$UInt64(frost$core$Int64 self);
frost$core$Real32 frost$core$Int64$convert$R$frost$core$Real32(frost$core$Int64 self);
frost$core$Real64 frost$core$Int64$convert$R$frost$core$Real64(frost$core$Int64 self);
frost$core$String* frost$core$Int64$convert$R$frost$core$String(frost$core$Int64 self);
frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String(frost$core$Int64 self, frost$core$String* p_fmt);
void frost$core$Int64$cleanup(frost$core$Int64 self);

