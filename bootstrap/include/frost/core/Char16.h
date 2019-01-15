#pragma once
#include "frost_c.h"
#include "Char16_types.h"
#include "frost/core/Char16_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "frost/core/Char8_types.h"
#include "frost/core/Char32_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"

frost$core$Char16 frost$core$Char16$init$frost$core$UInt16(frost$core$UInt16 p_value);
frost$core$Bit frost$core$Char16$$EQ$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 self, frost$core$Char16 p_other);
frost$core$Bit frost$core$Char16$$NEQ$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 self, frost$core$Char16 p_other);
frost$core$Bit frost$core$Char16$$LT$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 self, frost$core$Char16 p_other);
frost$core$Bit frost$core$Char16$$GT$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 self, frost$core$Char16 p_other);
frost$core$Bit frost$core$Char16$$LE$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 self, frost$core$Char16 p_other);
frost$core$Bit frost$core$Char16$$GE$frost$core$Char16$R$frost$core$Bit(frost$core$Char16 self, frost$core$Char16 p_other);
frost$core$String* frost$core$Char16$$MUL$frost$core$Int64$R$frost$core$String(frost$core$Char16 self, frost$core$Int64 p_count);
frost$core$String* frost$core$Char16$$MUL$frost$core$Int64$frost$core$Char16$R$frost$core$String(frost$core$Int64 p_count, frost$core$Char16 p_char);
frost$core$Int64 frost$core$Char16$get_hash$R$frost$core$Int64(frost$core$Char16 self);
frost$core$Char8 frost$core$Char16$convert$R$frost$core$Char8(frost$core$Char16 self);
frost$core$Char32 frost$core$Char16$convert$R$frost$core$Char32(frost$core$Char16 self);
frost$core$Int8 frost$core$Char16$convert$R$frost$core$Int8(frost$core$Char16 self);
frost$core$Int16 frost$core$Char16$convert$R$frost$core$Int16(frost$core$Char16 self);
frost$core$Int32 frost$core$Char16$convert$R$frost$core$Int32(frost$core$Char16 self);
frost$core$Int64 frost$core$Char16$convert$R$frost$core$Int64(frost$core$Char16 self);
frost$core$UInt8 frost$core$Char16$convert$R$frost$core$UInt8(frost$core$Char16 self);
frost$core$UInt16 frost$core$Char16$convert$R$frost$core$UInt16(frost$core$Char16 self);
frost$core$UInt32 frost$core$Char16$convert$R$frost$core$UInt32(frost$core$Char16 self);
frost$core$UInt64 frost$core$Char16$convert$R$frost$core$UInt64(frost$core$Char16 self);
frost$core$String* frost$core$Char16$convert$R$frost$core$String(frost$core$Char16 self);
void frost$core$Char16$cleanup(frost$core$Char16 self);

