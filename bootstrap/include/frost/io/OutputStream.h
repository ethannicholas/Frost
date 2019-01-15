#pragma once
#include "frost_c.h"
#include "OutputStream_types.h"
typedef struct frost$io$OutputStream frost$io$OutputStream;
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Char8_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Object frost$core$Object;

void frost$io$OutputStream$write$frost$core$UInt8(frost$io$OutputStream* self, frost$core$UInt8 p_value);
void frost$io$OutputStream$write$frost$core$UInt16(frost$io$OutputStream* self, frost$core$UInt16 p_value);
void frost$io$OutputStream$write$frost$core$UInt32(frost$io$OutputStream* self, frost$core$UInt32 p_value);
void frost$io$OutputStream$write$frost$core$UInt64(frost$io$OutputStream* self, frost$core$UInt64 p_value);
void frost$io$OutputStream$write$frost$core$Int8(frost$io$OutputStream* self, frost$core$Int8 p_value);
void frost$io$OutputStream$write$frost$core$Int16(frost$io$OutputStream* self, frost$core$Int16 p_value);
void frost$io$OutputStream$write$frost$core$Int32(frost$io$OutputStream* self, frost$core$Int32 p_value);
void frost$io$OutputStream$write$frost$core$Int64(frost$io$OutputStream* self, frost$core$Int64 p_value);
void frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64(frost$io$OutputStream* self, frost$core$UInt8* p_ptr, frost$core$Int64 p_count);
void frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64(frost$io$OutputStream* self, frost$core$Int8* p_ptr, frost$core$Int64 p_count);
void frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$io$OutputStream* self, frost$core$Char8* p_ptr, frost$core$Int64 p_count);
void frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64(frost$io$OutputStream* self, frost$collections$Array* p_a, frost$core$Int64 p_count);
void frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64(frost$io$OutputStream* self, frost$collections$Array* p_a, frost$core$Int64 p_count);
void frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64(frost$io$OutputStream* self, frost$collections$Array* p_a, frost$core$Int64 p_count);
void frost$io$OutputStream$write$frost$core$Char8(frost$io$OutputStream* self, frost$core$Char8 p_value);
void frost$io$OutputStream$print$frost$core$String(frost$io$OutputStream* self, frost$core$String* p_s);
void frost$io$OutputStream$print$frost$core$Object(frost$io$OutputStream* self, frost$core$Object* p_o);
void frost$io$OutputStream$printLine$frost$core$String(frost$io$OutputStream* self, frost$core$String* p_s);
void frost$io$OutputStream$printLine$frost$core$Object(frost$io$OutputStream* self, frost$core$Object* p_o);
void frost$io$OutputStream$printLine(frost$io$OutputStream* self);
void frost$io$OutputStream$flush(frost$io$OutputStream* self);
void frost$io$OutputStream$close(frost$io$OutputStream* self);
void frost$io$OutputStream$init(frost$io$OutputStream* self);
void frost$io$OutputStream$cleanup(frost$io$OutputStream* self);

