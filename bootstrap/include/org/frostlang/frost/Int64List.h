#pragma once
#include "frost_c.h"
#include "Int64List_types.h"
typedef struct org$frostlang$frost$Int64List org$frostlang$frost$Int64List;
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Int_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(org$frostlang$frost$Int64List* self, frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT p_range);
frost$core$Int org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT p_range);
frost$core$Int org$frostlang$frost$Int64List$get_count$R$frost$core$Int(org$frostlang$frost$Int64List* self);
frost$core$Int64 org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64(org$frostlang$frost$Int64List* self, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$Int64List$get_asString$R$frost$core$String(org$frostlang$frost$Int64List* self);
void org$frostlang$frost$Int64List$cleanup(org$frostlang$frost$Int64List* self);

