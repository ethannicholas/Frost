#pragma once
#include "frost_c.h"
#include "UInt64List_types.h"
typedef struct org$frostlang$frost$UInt64List org$frostlang$frost$UInt64List;
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "frost/core/Int_types.h"
#include "frost/core/UInt64_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT(org$frostlang$frost$UInt64List* self, frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT p_range);
frost$core$Int org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT p_range);
frost$core$Int org$frostlang$frost$UInt64List$get_count$R$frost$core$Int(org$frostlang$frost$UInt64List* self);
frost$core$UInt64 org$frostlang$frost$UInt64List$$IDX$frost$core$Int$R$frost$core$UInt64(org$frostlang$frost$UInt64List* self, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$UInt64List$get_asString$R$frost$core$String(org$frostlang$frost$UInt64List* self);
void org$frostlang$frost$UInt64List$cleanup(org$frostlang$frost$UInt64List* self);

