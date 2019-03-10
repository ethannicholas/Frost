#pragma once
#include "frost_c.h"
#include "UInt32List_types.h"
typedef struct org$frostlang$frost$UInt32List org$frostlang$frost$UInt32List;
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Int_types.h"
#include "frost/core/UInt32_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT(org$frostlang$frost$UInt32List* self, frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT p_range);
frost$core$Int org$frostlang$frost$UInt32List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT p_range);
frost$core$Int org$frostlang$frost$UInt32List$get_count$R$frost$core$Int(org$frostlang$frost$UInt32List* self);
frost$core$UInt32 org$frostlang$frost$UInt32List$$IDX$frost$core$Int$R$frost$core$UInt32(org$frostlang$frost$UInt32List* self, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$UInt32List$get_asString$R$frost$core$String(org$frostlang$frost$UInt32List* self);
void org$frostlang$frost$UInt32List$cleanup(org$frostlang$frost$UInt32List* self);

