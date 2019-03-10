#pragma once
#include "frost_c.h"
#include "UInt16List_types.h"
typedef struct org$frostlang$frost$UInt16List org$frostlang$frost$UInt16List;
#include "frost/core/SteppedRange.LTfrost/core/UInt16.Cfrost/core/UInt16.GT.h"
#include "frost/core/Int_types.h"
#include "frost/core/UInt16_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT(org$frostlang$frost$UInt16List* self, frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT p_range);
frost$core$Int org$frostlang$frost$UInt16List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT p_range);
frost$core$Int org$frostlang$frost$UInt16List$get_count$R$frost$core$Int(org$frostlang$frost$UInt16List* self);
frost$core$UInt16 org$frostlang$frost$UInt16List$$IDX$frost$core$Int$R$frost$core$UInt16(org$frostlang$frost$UInt16List* self, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$UInt16List$get_asString$R$frost$core$String(org$frostlang$frost$UInt16List* self);
void org$frostlang$frost$UInt16List$cleanup(org$frostlang$frost$UInt16List* self);

