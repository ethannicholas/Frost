#pragma once
#include "frost_c.h"
#include "Int32List_types.h"
typedef struct org$frostlang$frost$Int32List org$frostlang$frost$Int32List;
#include "frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT(org$frostlang$frost$Int32List* self, frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT p_range);
frost$core$Int64 org$frostlang$frost$Int32List$computeCount$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT p_range);
frost$core$Int64 org$frostlang$frost$Int32List$get_count$R$frost$core$Int64(org$frostlang$frost$Int32List* self);
frost$core$Int32 org$frostlang$frost$Int32List$$IDX$frost$core$Int64$R$frost$core$Int32(org$frostlang$frost$Int32List* self, frost$core$Int64 p_index);
frost$core$String* org$frostlang$frost$Int32List$convert$R$frost$core$String(org$frostlang$frost$Int32List* self);
void org$frostlang$frost$Int32List$cleanup(org$frostlang$frost$Int32List* self);

