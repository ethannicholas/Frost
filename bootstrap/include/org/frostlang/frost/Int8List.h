#pragma once
#include "frost_c.h"
#include "Int8List_types.h"
typedef struct org$frostlang$frost$Int8List org$frostlang$frost$Int8List;
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
#include "frost/core/Int_types.h"
#include "frost/core/Int8_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT(org$frostlang$frost$Int8List* self, frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT p_range);
frost$core$Int org$frostlang$frost$Int8List$computeCount$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT p_range);
frost$core$Int org$frostlang$frost$Int8List$get_count$R$frost$core$Int(org$frostlang$frost$Int8List* self);
frost$core$Int8 org$frostlang$frost$Int8List$$IDX$frost$core$Int$R$frost$core$Int8(org$frostlang$frost$Int8List* self, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$Int8List$get_asString$R$frost$core$String(org$frostlang$frost$Int8List* self);
void org$frostlang$frost$Int8List$cleanup(org$frostlang$frost$Int8List* self);

