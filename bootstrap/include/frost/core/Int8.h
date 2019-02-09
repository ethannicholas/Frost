#pragma once
#include "frost_c.h"
#include "Int8_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/Int8.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$Int8 frost$core$Int8$init$builtin_int8(int8_t p_value);
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Int8 frost$core$Int8$$SUB$R$frost$core$Int8(frost$core$Int8 self);
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int8 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int8 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int8 self, frost$core$Real64 p_other);
frost$core$Int8 frost$core$Int8$$BNOT$R$frost$core$Int8(frost$core$Int8 self);
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 self, frost$core$UInt64 p_other);
frost$core$Int32 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int32 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int8 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Int8 frost$core$Int8$get_abs$R$frost$core$Int8(frost$core$Int8 self);
frost$core$Int8 frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int16 frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Int16 frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Int32 frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$core$Int8 frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 self, frost$core$Int8 p_other);
frost$core$Int16 frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 self, frost$core$Int64 p_other);
frost$core$Int16 frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 self, frost$core$UInt8 p_other);
frost$core$Int32 frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 self, frost$core$UInt32 p_other);
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$Range$LTfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$Range$LTfrost$core$Int8$GT p_range);
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT p_range);
frost$core$Bit frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 self, frost$core$Int64 p_index);
frost$core$Int64 frost$core$Int8$get_count$R$frost$core$Int64(frost$core$Int8 self);
void frost$core$Int8$get_bitCount$R$frost$core$Int8(frost$core$Int8* result, frost$core$Int8 self);
frost$collections$Iterator* frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int8 self);
frost$core$Int64 frost$core$Int8$get_hash$R$frost$core$Int64(frost$core$Int8 self);
frost$core$Int8$nullable frost$core$Int8$parse$frost$core$String$frost$core$Int64$R$frost$core$Int8$Q(frost$core$String* p_str, frost$core$Int64 p_radix);
frost$core$Int16 frost$core$Int8$get_asInt16$R$frost$core$Int16(frost$core$Int8 self);
frost$core$Int32 frost$core$Int8$get_asInt32$R$frost$core$Int32(frost$core$Int8 self);
frost$core$Int64 frost$core$Int8$get_asInt64$R$frost$core$Int64(frost$core$Int8 self);
frost$core$UInt8 frost$core$Int8$get_asUInt8$R$frost$core$UInt8(frost$core$Int8 self);
frost$core$UInt16 frost$core$Int8$get_asUInt16$R$frost$core$UInt16(frost$core$Int8 self);
frost$core$UInt32 frost$core$Int8$get_asUInt32$R$frost$core$UInt32(frost$core$Int8 self);
frost$core$UInt64 frost$core$Int8$get_asUInt64$R$frost$core$UInt64(frost$core$Int8 self);
frost$core$Real32 frost$core$Int8$get_asReal32$R$frost$core$Real32(frost$core$Int8 self);
frost$core$Real64 frost$core$Int8$get_asReal64$R$frost$core$Real64(frost$core$Int8 self);
frost$core$String* frost$core$Int8$get_asString$R$frost$core$String(frost$core$Int8 self);
frost$core$String* frost$core$Int8$format$frost$core$String$R$frost$core$String(frost$core$Int8 self, frost$core$String* p_fmt);
void frost$core$Int8$cleanup(frost$core$Int8 self);

