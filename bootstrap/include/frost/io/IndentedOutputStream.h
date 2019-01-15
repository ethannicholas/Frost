#pragma once
#include "frost_c.h"
#include "IndentedOutputStream_types.h"
typedef struct frost$io$IndentedOutputStream frost$io$IndentedOutputStream;
typedef struct frost$io$OutputStream frost$io$OutputStream;
#include "frost/core/UInt8_types.h"
#include "frost/core/Int64_types.h"

void frost$io$IndentedOutputStream$init$frost$io$OutputStream(frost$io$IndentedOutputStream* self, frost$io$OutputStream* p_out);
void frost$io$IndentedOutputStream$write$frost$core$UInt8(frost$io$IndentedOutputStream* self, frost$core$UInt8 p_b);
void frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64(frost$io$IndentedOutputStream* self, frost$core$UInt8* p_ptr, frost$core$Int64 p_count);
void frost$io$IndentedOutputStream$indentIfNeeded(frost$io$IndentedOutputStream* self);
void frost$io$IndentedOutputStream$cleanup(frost$io$IndentedOutputStream* self);

