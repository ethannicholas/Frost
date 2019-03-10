#pragma once
#include "frost_c.h"
#include "UInt8List_types.h"
typedef struct org$frostlang$frost$UInt8List org$frostlang$frost$UInt8List;
#include "frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.h"
#include "frost/core/Int_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT(org$frostlang$frost$UInt8List* self, frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT p_range);
frost$core$Int org$frostlang$frost$UInt8List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT p_range);
frost$core$Int org$frostlang$frost$UInt8List$get_count$R$frost$core$Int(org$frostlang$frost$UInt8List* self);
frost$core$UInt8 org$frostlang$frost$UInt8List$$IDX$frost$core$Int$R$frost$core$UInt8(org$frostlang$frost$UInt8List* self, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$UInt8List$get_asString$R$frost$core$String(org$frostlang$frost$UInt8List* self);
void org$frostlang$frost$UInt8List$cleanup(org$frostlang$frost$UInt8List* self);

