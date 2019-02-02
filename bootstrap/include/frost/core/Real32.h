#pragma once
#include "frost_c.h"
#include "Real32_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

frost$core$Real32 frost$core$Real32$init$builtin_float32(float p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$Int8(frost$core$Int8 p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$Int16(frost$core$Int16 p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$Int32(frost$core$Int32 p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$Int64(frost$core$Int64 p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$UInt8(frost$core$UInt8 p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$UInt32(frost$core$UInt32 p_value);
frost$core$Real32 frost$core$Real32$init$frost$core$UInt64(frost$core$UInt64 p_value);
frost$core$Real32 frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Real32 frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Real32 frost$core$Real32$$SUB$R$frost$core$Real32(frost$core$Real32 self);
frost$core$Real32 frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Bit frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real32 p_other);
frost$core$Bit frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 self, frost$core$Real64 p_other);
frost$core$Real32 frost$core$Real32$get_abs$R$frost$core$Real32(frost$core$Real32 self);
frost$core$Real32 frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 self, frost$core$UInt64 p_other);
frost$core$Real32 frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int8 p_other);
frost$core$Real32 frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int16 p_other);
frost$core$Real32 frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 self, frost$core$Int32 p_other);
frost$core$Real64 frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 self, frost$core$Int64 p_other);
frost$core$Real32 frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt8 p_other);
frost$core$Real32 frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt16 p_other);
frost$core$Real32 frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 self, frost$core$UInt32 p_other);
frost$core$Real64 frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 self, frost$core$UInt64 p_other);
void frost$core$Real32$floor$R$frost$core$Real32(frost$core$Real32* result, frost$core$Real32 self);
void frost$core$Real32$ceiling$R$frost$core$Real32(frost$core$Real32* result, frost$core$Real32 self);
void frost$core$Real32$sqrt$R$frost$core$Real32(frost$core$Real32* result, frost$core$Real32 self);
void frost$core$Real32$sin$R$frost$core$Real32(frost$core$Real32* result, frost$core$Real32 self);
void frost$core$Real32$cos$R$frost$core$Real32(frost$core$Real32* result, frost$core$Real32 self);
void frost$core$Real32$tan$R$frost$core$Real32(frost$core$Real32* result, frost$core$Real32 self);
frost$core$Int64 frost$core$Real32$get_hash$R$frost$core$Int64(frost$core$Real32 self);
frost$core$Int8 frost$core$Real32$get_asInt8$R$frost$core$Int8(frost$core$Real32 self);
frost$core$Int16 frost$core$Real32$get_asInt16$R$frost$core$Int16(frost$core$Real32 self);
frost$core$Int32 frost$core$Real32$get_asInt32$R$frost$core$Int32(frost$core$Real32 self);
frost$core$Int64 frost$core$Real32$get_asInt64$R$frost$core$Int64(frost$core$Real32 self);
frost$core$UInt8 frost$core$Real32$get_asUInt8$R$frost$core$UInt8(frost$core$Real32 self);
frost$core$UInt16 frost$core$Real32$get_asUInt16$R$frost$core$UInt16(frost$core$Real32 self);
frost$core$UInt32 frost$core$Real32$get_asUInt32$R$frost$core$UInt32(frost$core$Real32 self);
frost$core$UInt64 frost$core$Real32$get_asUInt64$R$frost$core$UInt64(frost$core$Real32 self);
frost$core$Real32 frost$core$Real32$get_asReal32$R$frost$core$Real32(frost$core$Real32 self);
frost$core$Real64 frost$core$Real32$get_asReal64$R$frost$core$Real64(frost$core$Real32 self);
frost$core$String* frost$core$Real32$get_asString$R$frost$core$String(frost$core$Real32 self);
frost$core$String* frost$core$Real32$format$frost$core$String$R$frost$core$String(frost$core$Real32 self, frost$core$String* p_fmt);
void frost$core$Real32$cleanup(frost$core$Real32 self);

