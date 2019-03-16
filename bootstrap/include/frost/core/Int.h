#pragma once
#include "frost_c.h"
#include "Int_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

frost$core$Int frost$core$Int$init$builtin_int(int64_t p_value);
frost$core$Int frost$core$Int$init$frost$core$Int8(frost$core$Int8 p_value);
frost$core$Int frost$core$Int$init$frost$core$Int16(frost$core$Int16 p_value);
frost$core$Int frost$core$Int$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$Int frost$core$Int$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Int32 frost$core$Int$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$ADD$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int64 frost$core$Int$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Int64 frost$core$Int$$ADD$frost$core$UInt$R$frost$core$Int64(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int32 frost$core$Int$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$SUB$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int64 frost$core$Int$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Int64 frost$core$Int$$SUB$frost$core$UInt$R$frost$core$Int64(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int frost$core$Int$$SUB$R$frost$core$Int(frost$core$Int self);
frost$core$Int32 frost$core$Int$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$MUL$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int64 frost$core$Int$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Int64 frost$core$Int$$MUL$frost$core$UInt$R$frost$core$Int64(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int32 frost$core$Int$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$INTDIV$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int64 frost$core$Int$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Int64 frost$core$Int$$INTDIV$frost$core$UInt$R$frost$core$Int64(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int32 frost$core$Int$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$REM$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int64 frost$core$Int$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Int64 frost$core$Int$$REM$frost$core$UInt$R$frost$core$Int64(frost$core$Int self, frost$core$UInt p_other);
frost$core$Real32 frost$core$Int$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$Int$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$Int$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Int$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Int$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$Int$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Int$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int self, frost$core$Real64 p_other);
frost$core$Int frost$core$Int$$BNOT$R$frost$core$Int(frost$core$Int self);
frost$core$Int32 frost$core$Int$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$UInt32 frost$core$Int$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$Int$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int32 frost$core$Int$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$BOR$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$UInt32 frost$core$Int$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$Int$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int32 frost$core$Int$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$UInt32 frost$core$Int$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$UInt64 frost$core$Int$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int self, frost$core$UInt64 p_other);
frost$core$UInt frost$core$Int$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int frost$core$Int$$SHL$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int frost$core$Int$$SHR$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int self, frost$core$Int p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int self, frost$core$UInt p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int self, frost$core$Int p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int self, frost$core$UInt p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int self, frost$core$Int p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$Int self, frost$core$UInt p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int self, frost$core$Int p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$Int self, frost$core$UInt p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int self, frost$core$Int p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$Int self, frost$core$UInt p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int self, frost$core$Int p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Bit frost$core$Int$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int frost$core$Int$get_abs$R$frost$core$Int(frost$core$Int self);
frost$core$Int frost$core$Int$min$frost$core$Int8$R$frost$core$Int(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Int frost$core$Int$min$frost$core$Int16$R$frost$core$Int(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$min$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int64 frost$core$Int$min$frost$core$UInt8$R$frost$core$Int64(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Int64 frost$core$Int$min$frost$core$UInt16$R$frost$core$Int64(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Int64 frost$core$Int$min$frost$core$UInt$R$frost$core$Int64(frost$core$Int self, frost$core$UInt p_other);
frost$core$Int frost$core$Int$max$frost$core$Int8$R$frost$core$Int(frost$core$Int self, frost$core$Int8 p_other);
frost$core$Int frost$core$Int$max$frost$core$Int16$R$frost$core$Int(frost$core$Int self, frost$core$Int16 p_other);
frost$core$Int32 frost$core$Int$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int self, frost$core$Int32 p_other);
frost$core$Int64 frost$core$Int$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int self, frost$core$Int64 p_other);
frost$core$Int frost$core$Int$max$frost$core$Int$R$frost$core$Int(frost$core$Int self, frost$core$Int p_other);
frost$core$Int64 frost$core$Int$max$frost$core$UInt8$R$frost$core$Int64(frost$core$Int self, frost$core$UInt8 p_other);
frost$core$Int64 frost$core$Int$max$frost$core$UInt16$R$frost$core$Int64(frost$core$Int self, frost$core$UInt16 p_other);
frost$core$Int64 frost$core$Int$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int self, frost$core$UInt32 p_other);
frost$core$Int64 frost$core$Int$max$frost$core$UInt$R$frost$core$Int64(frost$core$Int self, frost$core$UInt p_other);
frost$collections$ListView* frost$core$Int$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$core$Int$GT(frost$core$Range$LTfrost$core$Int$GT p_range);
frost$collections$ListView* frost$core$Int$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$core$Int$GT(frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT p_range);
frost$core$Bit frost$core$Int$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int self, frost$core$Int p_index);
frost$core$Int frost$core$Int$get_count$R$frost$core$Int(frost$core$Int self);
void frost$core$Int$get_bitCount$R$frost$core$Int(frost$core$Int* result, frost$core$Int self);
frost$collections$Iterator* frost$core$Int$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int self);
frost$core$Int frost$core$Int$get_hash$R$frost$core$Int(frost$core$Int self);
frost$core$Int$nullable frost$core$Int$parse$frost$core$String$frost$core$Int$R$frost$core$Int$Q(frost$core$String* p_str, frost$core$Int p_radix);
frost$core$Int8 frost$core$Int$get_asInt8$R$frost$core$Int8(frost$core$Int self);
frost$core$Int16 frost$core$Int$get_asInt16$R$frost$core$Int16(frost$core$Int self);
frost$core$Int32 frost$core$Int$get_asInt32$R$frost$core$Int32(frost$core$Int self);
frost$core$Int64 frost$core$Int$get_asInt64$R$frost$core$Int64(frost$core$Int self);
frost$core$UInt frost$core$Int$get_asUInt$R$frost$core$UInt(frost$core$Int self);
frost$core$UInt8 frost$core$Int$get_asUInt8$R$frost$core$UInt8(frost$core$Int self);
frost$core$UInt16 frost$core$Int$get_asUInt16$R$frost$core$UInt16(frost$core$Int self);
frost$core$UInt32 frost$core$Int$get_asUInt32$R$frost$core$UInt32(frost$core$Int self);
frost$core$UInt64 frost$core$Int$get_asUInt64$R$frost$core$UInt64(frost$core$Int self);
frost$core$Real32 frost$core$Int$get_asReal32$R$frost$core$Real32(frost$core$Int self);
frost$core$Real64 frost$core$Int$get_asReal64$R$frost$core$Real64(frost$core$Int self);
frost$core$String* frost$core$Int$get_asString$R$frost$core$String(frost$core$Int self);
frost$core$String* frost$core$Int$format$frost$core$String$R$frost$core$String(frost$core$Int self, frost$core$String* p_fmt);
void frost$core$Int$cleanup(frost$core$Int self);

