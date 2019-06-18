#pragma once
#include "frost_c.h"
#include "UInt_types.h"
#include "frost/core/UInt_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/UInt.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt.Cfrost/core/UInt.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$UInt frost$core$UInt$init$builtin_uint(uint64_t p_value);
frost$core$UInt frost$core$UInt$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$UInt frost$core$UInt$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Int64 frost$core$UInt$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Int64 frost$core$UInt$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$UInt frost$core$UInt$$SUB$R$frost$core$UInt(frost$core$UInt self);
frost$core$Int64 frost$core$UInt$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Int64 frost$core$UInt$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Int64 frost$core$UInt$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$UInt$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$UInt$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$UInt$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt self, frost$core$Real64 p_other);
frost$core$UInt frost$core$UInt$$BNOT$R$frost$core$UInt(frost$core$UInt self);
frost$core$Int32 frost$core$UInt$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt self, frost$core$Int64 p_other);
frost$core$Int frost$core$UInt$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Int32 frost$core$UInt$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt self, frost$core$Int64 p_other);
frost$core$Int frost$core$UInt$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Int32 frost$core$UInt$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt self, frost$core$Int64 p_other);
frost$core$Int frost$core$UInt$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt32 frost$core$UInt$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$UInt frost$core$UInt$$SHL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$UInt frost$core$UInt$$SHR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt self, frost$core$Int p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt self, frost$core$Int p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt self, frost$core$Int p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt self, frost$core$Int p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt self, frost$core$Int p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt self, frost$core$Int p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Int64 frost$core$UInt$min$frost$core$Int8$R$frost$core$Int64(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Int64 frost$core$UInt$min$frost$core$Int16$R$frost$core$Int64(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt frost$core$UInt$min$frost$core$UInt8$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$UInt frost$core$UInt$min$frost$core$UInt16$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$core$Int64 frost$core$UInt$max$frost$core$Int8$R$frost$core$Int64(frost$core$UInt self, frost$core$Int8 p_other);
frost$core$Int64 frost$core$UInt$max$frost$core$Int16$R$frost$core$Int64(frost$core$UInt self, frost$core$Int16 p_other);
frost$core$Int64 frost$core$UInt$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$UInt$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt self, frost$core$Int p_other);
frost$core$UInt frost$core$UInt$max$frost$core$UInt8$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt8 p_other);
frost$core$UInt frost$core$UInt$max$frost$core$UInt16$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt16 p_other);
frost$core$UInt32 frost$core$UInt$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$UInt$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$UInt$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt self, frost$core$UInt p_other);
frost$collections$ListView* frost$core$UInt$$IDX$frost$core$Range$LTfrost$core$UInt$GT$R$frost$collections$ListView$LTfrost$core$UInt$GT(frost$core$Range$LTfrost$core$UInt$GT p_range);
frost$collections$ListView* frost$core$UInt$$IDX$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$R$frost$collections$ListView$LTfrost$core$UInt$GT(frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT p_range);
frost$core$Bit frost$core$UInt$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt self, frost$core$Int p_index);
frost$core$Int frost$core$UInt$get_count$R$frost$core$Int(frost$core$UInt self);
void frost$core$UInt$get_bitCount$R$frost$core$UInt(frost$core$UInt* result, frost$core$UInt self);
frost$collections$Iterator* frost$core$UInt$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt self);
frost$core$Int frost$core$UInt$get_hash$R$frost$core$Int(frost$core$UInt self);
frost$core$UInt$nullable frost$core$UInt$parse$frost$core$String$frost$core$Int$R$frost$core$UInt$Q(frost$core$String* p_str, frost$core$Int p_radix);
frost$core$Int frost$core$UInt$get_asInt$R$frost$core$Int(frost$core$UInt self);
frost$core$Int8 frost$core$UInt$get_asInt8$R$frost$core$Int8(frost$core$UInt self);
frost$core$Int16 frost$core$UInt$get_asInt16$R$frost$core$Int16(frost$core$UInt self);
frost$core$Int32 frost$core$UInt$get_asInt32$R$frost$core$Int32(frost$core$UInt self);
frost$core$Int64 frost$core$UInt$get_asInt64$R$frost$core$Int64(frost$core$UInt self);
frost$core$UInt8 frost$core$UInt$get_asUInt8$R$frost$core$UInt8(frost$core$UInt self);
frost$core$UInt16 frost$core$UInt$get_asUInt16$R$frost$core$UInt16(frost$core$UInt self);
frost$core$UInt32 frost$core$UInt$get_asUInt32$R$frost$core$UInt32(frost$core$UInt self);
frost$core$UInt64 frost$core$UInt$get_asUInt64$R$frost$core$UInt64(frost$core$UInt self);
frost$core$Real32 frost$core$UInt$get_asReal32$R$frost$core$Real32(frost$core$UInt self);
frost$core$Real64 frost$core$UInt$get_asReal64$R$frost$core$Real64(frost$core$UInt self);
frost$core$String* frost$core$UInt$get_asString$R$frost$core$String(frost$core$UInt self);
frost$core$String* frost$core$UInt$format$frost$core$String$R$frost$core$String(frost$core$UInt self, frost$core$String* p_fmt);
void frost$core$UInt$cleanup(frost$core$UInt self);
