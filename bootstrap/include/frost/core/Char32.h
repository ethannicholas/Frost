#pragma once
#include "frost_c.h"
#include "Char32_types.h"
#include "frost/core/Char32_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"
#include "frost/core/Char8_types.h"
#include "frost/core/Char16_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/UInt_types.h"

frost$core$Char32 frost$core$Char32$init$frost$core$Int32(frost$core$Int32 p_value);
frost$core$Bit frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 self, frost$core$Char32 p_other);
frost$core$Bit frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 self, frost$core$Char32 p_other);
frost$core$Bit frost$core$Char32$$LT$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 self, frost$core$Char32 p_other);
frost$core$Bit frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 self, frost$core$Char32 p_other);
frost$core$Bit frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 self, frost$core$Char32 p_other);
frost$core$Bit frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(frost$core$Char32 self, frost$core$Char32 p_other);
frost$core$Bit frost$core$Char32$isWhitespace$R$frost$core$Bit(frost$core$Char32 self);
frost$core$String* frost$core$Char32$$MUL$frost$core$Int$R$frost$core$String(frost$core$Char32 self, frost$core$Int p_count);
frost$core$String* frost$core$Char32$$MUL$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$Int p_count, frost$core$Char32 p_char);
frost$core$Int frost$core$Char32$get_hash$R$frost$core$Int(frost$core$Char32 self);
frost$core$Char8 frost$core$Char32$get_asChar8$R$frost$core$Char8(frost$core$Char32 self);
frost$core$Char16 frost$core$Char32$get_asChar16$R$frost$core$Char16(frost$core$Char32 self);
frost$core$Int8 frost$core$Char32$get_asInt8$R$frost$core$Int8(frost$core$Char32 self);
frost$core$Int16 frost$core$Char32$get_asInt16$R$frost$core$Int16(frost$core$Char32 self);
frost$core$Int32 frost$core$Char32$get_asInt32$R$frost$core$Int32(frost$core$Char32 self);
frost$core$Int64 frost$core$Char32$get_asInt64$R$frost$core$Int64(frost$core$Char32 self);
frost$core$Int frost$core$Char32$get_asInt$R$frost$core$Int(frost$core$Char32 self);
frost$core$UInt8 frost$core$Char32$get_asUInt8$R$frost$core$UInt8(frost$core$Char32 self);
frost$core$UInt16 frost$core$Char32$get_asUInt16$R$frost$core$UInt16(frost$core$Char32 self);
frost$core$UInt32 frost$core$Char32$get_asUInt32$R$frost$core$UInt32(frost$core$Char32 self);
frost$core$UInt64 frost$core$Char32$get_asUInt64$R$frost$core$UInt64(frost$core$Char32 self);
frost$core$UInt frost$core$Char32$get_asUInt$R$frost$core$UInt(frost$core$Char32 self);
frost$core$String* frost$core$Char32$get_asString$R$frost$core$String(frost$core$Char32 self);
void frost$core$Char32$cleanup(frost$core$Char32 self);

