#pragma once
#include "frost_c.h"
#include "MemoryOutputStream_types.h"
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
#include "frost/core/Int_types.h"
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;

void frost$io$MemoryOutputStream$init(void* rawSelf);
void frost$io$MemoryOutputStream$init$frost$core$Int(void* rawSelf, frost$core$Int p_capacity);
frost$core$Error* frost$io$MemoryOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt8 p_i);
frost$core$Error* frost$io$MemoryOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt8* p_ptr, frost$core$Int p_count);
void frost$io$MemoryOutputStream$clear(void* rawSelf);
frost$core$String* frost$io$MemoryOutputStream$get_asString$R$frost$core$String(void* rawSelf);
frost$core$String* frost$io$MemoryOutputStream$finish$R$frost$core$String(void* rawSelf);
void frost$io$MemoryOutputStream$cleanup(void* rawSelf);

