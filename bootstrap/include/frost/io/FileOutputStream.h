#pragma once
#include "frost_c.h"
#include "FileOutputStream_types.h"
typedef struct frost$io$FileOutputStream frost$io$FileOutputStream;
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/UInt8_types.h"
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"

void frost$io$FileOutputStream$init(void* rawSelf);
void frost$io$FileOutputStream$cleanup(void* rawSelf);
frost$core$Error* frost$io$FileOutputStream$close$R$frost$core$Error$Q(void* rawSelf);
frost$core$Error* frost$io$FileOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt8 p_value);
frost$core$Error* frost$io$FileOutputStream$write$frost$unsafe$NewPointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$unsafe$NewPointer p_ptr, frost$core$Int p_size);
frost$core$Error* frost$io$FileOutputStream$flush$R$frost$core$Error$Q(void* rawSelf);

