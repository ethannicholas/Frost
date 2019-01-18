#pragma once
#include "frost_c.h"
#include "FileOutputStream_types.h"
typedef struct frost$io$FileOutputStream frost$io$FileOutputStream;
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/UInt8_types.h"
#include "frost/core/Int64_types.h"

void frost$io$FileOutputStream$init(frost$io$FileOutputStream* self);
void frost$io$FileOutputStream$cleanup(frost$io$FileOutputStream* self);
frost$core$Error* frost$io$FileOutputStream$close$R$frost$core$Error$Q(frost$io$FileOutputStream* self);
frost$core$Error* frost$io$FileOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(frost$io$FileOutputStream* self, frost$core$UInt8 p_value);
frost$core$Error* frost$io$FileOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$FileOutputStream* self, frost$core$UInt8* p_ptr, frost$core$Int64 p_size);
frost$core$Error* frost$io$FileOutputStream$flush$R$frost$core$Error$Q(frost$io$FileOutputStream* self);

