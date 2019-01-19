#pragma once
#include "frost_c.h"
#include "UInt16_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/UInt16.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt16.Cfrost/core/UInt16.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$UInt16 frost$core$UInt16$init$builtin_uint16(uint16_t p_value);
frost$core$UInt16 frost$core$UInt16$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$Int32 frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$UInt16 frost$core$UInt16$$SUB$R$frost$core$UInt16(frost$core$UInt16 self);
frost$core$Int32 frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt16 self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt16 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt16 self, frost$core$Real64 p_other);
frost$core$UInt16 frost$core$UInt16$$BNOT$R$frost$core$UInt16(frost$core$UInt16 self);
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$$SHL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$UInt16$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt16$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$$SHR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$UInt16$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt16$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt16 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 self, frost$core$Int32 p_other);
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt8 p_other);
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 self, frost$core$UInt64 p_other);
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$Range$LTfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$Range$LTfrost$core$UInt16$GT p_range);
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT p_range);
frost$core$Bit frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt16 self, frost$core$Int64 p_index);
frost$core$Int64 frost$core$UInt16$get_count$R$frost$core$Int64(frost$core$UInt16 self);
frost$collections$Iterator* frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt16 self);
frost$core$Int64 frost$core$UInt16$get_hash$R$frost$core$Int64(frost$core$UInt16 self);
frost$core$UInt16$nullable frost$core$UInt16$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt16$Q(frost$core$String* p_str, frost$core$Int64 p_radix);
frost$core$Int8 frost$core$UInt16$convert$R$frost$core$Int8(frost$core$UInt16 self);
frost$core$Int16 frost$core$UInt16$convert$R$frost$core$Int16(frost$core$UInt16 self);
frost$core$Int32 frost$core$UInt16$convert$R$frost$core$Int32(frost$core$UInt16 self);
frost$core$Int64 frost$core$UInt16$convert$R$frost$core$Int64(frost$core$UInt16 self);
frost$core$UInt8 frost$core$UInt16$convert$R$frost$core$UInt8(frost$core$UInt16 self);
frost$core$UInt32 frost$core$UInt16$convert$R$frost$core$UInt32(frost$core$UInt16 self);
frost$core$UInt64 frost$core$UInt16$convert$R$frost$core$UInt64(frost$core$UInt16 self);
frost$core$Real32 frost$core$UInt16$convert$R$frost$core$Real32(frost$core$UInt16 self);
frost$core$Real64 frost$core$UInt16$convert$R$frost$core$Real64(frost$core$UInt16 self);
frost$core$String* frost$core$UInt16$get_asString$R$frost$core$String(frost$core$UInt16 self);
frost$core$String* frost$core$UInt16$format$frost$core$String$R$frost$core$String(frost$core$UInt16 self, frost$core$String* p_fmt);
void frost$core$UInt16$cleanup(frost$core$UInt16 self);

