#pragma once
#include "frost_c.h"
#include "Real64_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/UInt_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

frost$core$Real64 frost$core$Real64$init$builtin_float64(double p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$Int8(frost$core$Int8 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$Int16(frost$core$Int16 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$Int32(frost$core$Int32 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$Int64(frost$core$Int64 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$Int(frost$core$Int p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$UInt32(frost$core$UInt32 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$UInt64(frost$core$UInt64 p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$UInt(frost$core$UInt p_value);
frost$core$Real64 frost$core$Real64$init$frost$core$Real32(frost$core$Real32 p_value);
frost$core$Real64 frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Real64 frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Real64 frost$core$Real64$$SUB$R$frost$core$Real64(frost$core$Real64 self);
frost$core$Real64 frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int8 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int16 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int64 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt8 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt16 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt64 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Real64 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 self, frost$core$Real64 p_other);
frost$core$Real64 frost$core$Real64$get_abs$R$frost$core$Real64(frost$core$Real64 self);
frost$core$Real64 frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int8 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int16 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int64 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$Int$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt8 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt16 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt64 p_other);
frost$core$Real64 frost$core$Real64$min$frost$core$UInt$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int8 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int16 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int64 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$Int$R$frost$core$Real64(frost$core$Real64 self, frost$core$Int p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt8 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt16 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt64 p_other);
frost$core$Real64 frost$core$Real64$max$frost$core$UInt$R$frost$core$Real64(frost$core$Real64 self, frost$core$UInt p_other);
void frost$core$Real64$get_floor$R$frost$core$Real64(frost$core$Real64* result, frost$core$Real64 self);
void frost$core$Real64$get_ceiling$R$frost$core$Real64(frost$core$Real64* result, frost$core$Real64 self);
void frost$core$Real64$get_sqrt$R$frost$core$Real64(frost$core$Real64* result, frost$core$Real64 self);
void frost$core$Real64$get_sin$R$frost$core$Real64(frost$core$Real64* result, frost$core$Real64 self);
void frost$core$Real64$get_cos$R$frost$core$Real64(frost$core$Real64* result, frost$core$Real64 self);
void frost$core$Real64$get_tan$R$frost$core$Real64(frost$core$Real64* result, frost$core$Real64 self);
frost$core$Int frost$core$Real64$get_hash$R$frost$core$Int(frost$core$Real64 self);
frost$core$Int frost$core$Real64$get_asInt$R$frost$core$Int(frost$core$Real64 self);
frost$core$Int8 frost$core$Real64$get_asInt8$R$frost$core$Int8(frost$core$Real64 self);
frost$core$Int16 frost$core$Real64$get_asInt16$R$frost$core$Int16(frost$core$Real64 self);
frost$core$Int32 frost$core$Real64$get_asInt32$R$frost$core$Int32(frost$core$Real64 self);
frost$core$Int64 frost$core$Real64$get_asInt64$R$frost$core$Int64(frost$core$Real64 self);
frost$core$UInt frost$core$Real64$get_asUInt$R$frost$core$UInt(frost$core$Real64 self);
frost$core$UInt8 frost$core$Real64$get_asUInt8$R$frost$core$UInt8(frost$core$Real64 self);
frost$core$UInt16 frost$core$Real64$get_asUInt16$R$frost$core$UInt16(frost$core$Real64 self);
frost$core$UInt32 frost$core$Real64$get_asUInt32$R$frost$core$UInt32(frost$core$Real64 self);
frost$core$UInt64 frost$core$Real64$get_asUInt64$R$frost$core$UInt64(frost$core$Real64 self);
frost$core$Real32 frost$core$Real64$get_asReal32$R$frost$core$Real32(frost$core$Real64 self);
frost$core$Real64 frost$core$Real64$get_asReal64$R$frost$core$Real64(frost$core$Real64 self);
frost$core$String* frost$core$Real64$get_asString$R$frost$core$String(frost$core$Real64 self);
frost$core$String* frost$core$Real64$format$frost$core$String$R$frost$core$String(frost$core$Real64 self, frost$core$String* p_fmt);
void frost$core$Real64$cleanup(frost$core$Real64 self);

