#pragma once
#include "frost_c.h"
#include "Int32_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/Int32.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$Int32 frost$core$Int32$init$builtin_int32(int32_t p_value);
frost$core$Int32 frost$core$Int32$init$frost$core$Int8(frost$core$Int8 p_value);
frost$core$Int32 frost$core$Int32$init$frost$core$Int16(frost$core$Int16 p_value);
frost$core$Int32 frost$core$Int32$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$Int32 frost$core$Int32$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Int32 frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int32$$SUB$R$frost$core$Int32(frost$core$Int32 self);
frost$core$Int32 frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int32 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int32 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int32 self, frost$core$Real64 p_other);
frost$core$Int32 frost$core$Int32$$BNOT$R$frost$core$Int32(frost$core$Int32 self);
frost$core$Int32 frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int32$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int32$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int32$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int32$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int32$get_abs$R$frost$core$Int32(frost$core$Int32 self);
frost$core$Int32 frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Int64 frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 self, frost$core$Int64 p_other);
frost$core$Int64 frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt8 p_other);
frost$core$Int64 frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 self, frost$core$UInt32 p_other);
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$Range$LTfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$Range$LTfrost$core$Int32$GT p_range);
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT p_range);
frost$core$Bit frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 self, frost$core$Int64 p_index);
frost$core$Int64 frost$core$Int32$get_count$R$frost$core$Int64(frost$core$Int32 self);
frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int32 self);
frost$core$Int64 frost$core$Int32$get_hash$R$frost$core$Int64(frost$core$Int32 self);
frost$core$Int32$nullable frost$core$Int32$parse$frost$core$String$frost$core$Int64$R$frost$core$Int32$Q(frost$core$String* p_str, frost$core$Int64 p_radix);
frost$core$Int8 frost$core$Int32$convert$R$frost$core$Int8(frost$core$Int32 self);
frost$core$Int16 frost$core$Int32$convert$R$frost$core$Int16(frost$core$Int32 self);
frost$core$Int64 frost$core$Int32$convert$R$frost$core$Int64(frost$core$Int32 self);
frost$core$UInt8 frost$core$Int32$convert$R$frost$core$UInt8(frost$core$Int32 self);
frost$core$UInt16 frost$core$Int32$convert$R$frost$core$UInt16(frost$core$Int32 self);
frost$core$UInt32 frost$core$Int32$convert$R$frost$core$UInt32(frost$core$Int32 self);
frost$core$UInt64 frost$core$Int32$convert$R$frost$core$UInt64(frost$core$Int32 self);
frost$core$Real32 frost$core$Int32$convert$R$frost$core$Real32(frost$core$Int32 self);
frost$core$Real64 frost$core$Int32$convert$R$frost$core$Real64(frost$core$Int32 self);
frost$core$String* frost$core$Int32$convert$R$frost$core$String(frost$core$Int32 self);
frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String(frost$core$Int32 self, frost$core$String* p_fmt);
void frost$core$Int32$cleanup(frost$core$Int32 self);
