#pragma once
#include "frost_c.h"
#include "Int16List_types.h"
typedef struct org$frostlang$frost$Int16List org$frostlang$frost$Int16List;
#include "frost/core/SteppedRange.LTfrost/core/Int16.Cfrost/core/Int16.GT.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int16_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT(org$frostlang$frost$Int16List* self, frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT p_range);
frost$core$Int64 org$frostlang$frost$Int16List$computeCount$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT p_range);
frost$core$Int64 org$frostlang$frost$Int16List$get_count$R$frost$core$Int64(org$frostlang$frost$Int16List* self);
frost$core$Int16 org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16(org$frostlang$frost$Int16List* self, frost$core$Int64 p_index);
frost$core$String* org$frostlang$frost$Int16List$convert$R$frost$core$String(org$frostlang$frost$Int16List* self);
void org$frostlang$frost$Int16List$cleanup(org$frostlang$frost$Int16List* self);

