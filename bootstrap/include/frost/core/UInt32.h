#pragma once
#include "frost_c.h"
#include "UInt32_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/UInt32.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$UInt32 frost$core$UInt32$init$builtin_uint32(uint32_t p_value);
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$UInt32 frost$core$UInt32$$SUB$R$frost$core$UInt32(frost$core$UInt32 self);
frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt32 self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt32 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt32 self, frost$core$Real64 p_other);
frost$core$UInt32 frost$core$UInt32$$BNOT$R$frost$core$UInt32(frost$core$UInt32 self);
frost$core$Int32 frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt32$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt32$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt32$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt32$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Int64 frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$core$Int64 frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int8 p_other);
frost$core$Int64 frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt8 p_other);
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 self, frost$core$UInt64 p_other);
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$Range$LTfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$Range$LTfrost$core$UInt32$GT p_range);
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT p_range);
frost$core$Bit frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt32 self, frost$core$Int64 p_index);
frost$core$Int64 frost$core$UInt32$get_count$R$frost$core$Int64(frost$core$UInt32 self);
frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt32 self);
frost$core$Int64 frost$core$UInt32$get_hash$R$frost$core$Int64(frost$core$UInt32 self);
frost$core$UInt32$nullable frost$core$UInt32$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt32$Q(frost$core$String* p_str, frost$core$Int64 p_radix);
frost$core$Int8 frost$core$UInt32$get_asInt8$R$frost$core$Int8(frost$core$UInt32 self);
frost$core$Int16 frost$core$UInt32$get_asInt16$R$frost$core$Int16(frost$core$UInt32 self);
frost$core$Int32 frost$core$UInt32$get_asInt32$R$frost$core$Int32(frost$core$UInt32 self);
frost$core$Int64 frost$core$UInt32$get_asInt64$R$frost$core$Int64(frost$core$UInt32 self);
frost$core$UInt8 frost$core$UInt32$get_asUInt8$R$frost$core$UInt8(frost$core$UInt32 self);
frost$core$UInt16 frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(frost$core$UInt32 self);
frost$core$UInt64 frost$core$UInt32$get_asUInt64$R$frost$core$UInt64(frost$core$UInt32 self);
frost$core$Real32 frost$core$UInt32$get_asReal32$R$frost$core$Real32(frost$core$UInt32 self);
frost$core$Real64 frost$core$UInt32$get_asReal64$R$frost$core$Real64(frost$core$UInt32 self);
frost$core$String* frost$core$UInt32$get_asString$R$frost$core$String(frost$core$UInt32 self);
frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String(frost$core$UInt32 self, frost$core$String* p_fmt);
void frost$core$UInt32$cleanup(frost$core$UInt32 self);

