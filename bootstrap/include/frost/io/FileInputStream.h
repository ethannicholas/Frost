#pragma once
#include "frost_c.h"
#include "FileInputStream_types.h"
typedef struct frost$io$FileInputStream frost$io$FileInputStream;
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
#include "frost/unsafe/Pointer_types.h"

void frost$io$FileInputStream$init(void* rawSelf);
void frost$io$FileInputStream$cleanup(void* rawSelf);
frost$core$Error* frost$io$FileInputStream$close$R$frost$core$Error$Q(void* rawSelf);
frost$core$UInt8$nullable frost$io$FileInputStream$read$R$frost$core$UInt8$Q(void* rawSelf);
void frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q(frost$core$UInt8$nullable* result, void* rawSelf);
frost$core$Int frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$unsafe$Pointer p_buffer, frost$core$Int p_max);
void frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(frost$core$Int* result, void* rawSelf, frost$unsafe$Pointer p_buffer, frost$core$Int p_max);

