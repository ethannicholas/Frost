#pragma once
#include "frost_c.h"
#include "FileInputStream_types.h"
typedef struct frost$io$FileInputStream frost$io$FileInputStream;
#include "frost/core/UInt8_types.h"
#include "frost/core/Int64_types.h"

void frost$io$FileInputStream$init(frost$io$FileInputStream* self);
void frost$io$FileInputStream$cleanup(frost$io$FileInputStream* self);
void frost$io$FileInputStream$close(frost$io$FileInputStream* self);
frost$core$UInt8$nullable frost$io$FileInputStream$read$R$frost$core$UInt8$Q(frost$io$FileInputStream* self);
void frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q(frost$core$UInt8$nullable* result, frost$io$FileInputStream* self);
frost$core$Int64 frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$FileInputStream* self, frost$core$UInt8* p_buffer, frost$core$Int64 p_max);
void frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$core$Int64* result, frost$io$FileInputStream* self, frost$core$UInt8* p_buffer, frost$core$Int64 p_max);

