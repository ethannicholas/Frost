#pragma once
#include "frost_c.h"
#include "Int64List_types.h"
typedef struct org$frostlanguage$frost$Int64List org$frostlanguage$frost$Int64List;
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(org$frostlanguage$frost$Int64List* self, frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT p_range);
frost$core$Int64 org$frostlanguage$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT p_range);
frost$core$Int64 org$frostlanguage$frost$Int64List$get_count$R$frost$core$Int64(org$frostlanguage$frost$Int64List* self);
frost$core$Int64 org$frostlanguage$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64(org$frostlanguage$frost$Int64List* self, frost$core$Int64 p_index);
frost$core$String* org$frostlanguage$frost$Int64List$convert$R$frost$core$String(org$frostlanguage$frost$Int64List* self);
void org$frostlanguage$frost$Int64List$cleanup(org$frostlanguage$frost$Int64List* self);

