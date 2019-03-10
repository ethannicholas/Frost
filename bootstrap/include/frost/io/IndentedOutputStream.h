#pragma once
#include "frost_c.h"
#include "IndentedOutputStream_types.h"
typedef struct frost$io$IndentedOutputStream frost$io$IndentedOutputStream;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"

void frost$io$IndentedOutputStream$init$frost$io$OutputStream(frost$io$IndentedOutputStream* self, frost$io$OutputStream* p_out);
frost$core$Error* frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(frost$io$IndentedOutputStream* self, frost$core$UInt8 p_b);
frost$core$Error* frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$IndentedOutputStream* self, frost$core$UInt8* p_ptr, frost$core$Int p_count);
frost$core$Error* frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(frost$io$IndentedOutputStream* self);
void frost$io$IndentedOutputStream$cleanup(frost$io$IndentedOutputStream* self);

