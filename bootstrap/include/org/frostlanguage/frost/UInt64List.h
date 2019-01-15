#pragma once
#include "frost_c.h"
#include "UInt64List_types.h"
typedef struct org$frostlanguage$frost$UInt64List org$frostlanguage$frost$UInt64List;
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt64_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT(org$frostlanguage$frost$UInt64List* self, frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT p_range);
frost$core$Int64 org$frostlanguage$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT p_range);
frost$core$Int64 org$frostlanguage$frost$UInt64List$get_count$R$frost$core$Int64(org$frostlanguage$frost$UInt64List* self);
frost$core$UInt64 org$frostlanguage$frost$UInt64List$$IDX$frost$core$Int64$R$frost$core$UInt64(org$frostlanguage$frost$UInt64List* self, frost$core$Int64 p_index);
frost$core$String* org$frostlanguage$frost$UInt64List$convert$R$frost$core$String(org$frostlanguage$frost$UInt64List* self);
void org$frostlanguage$frost$UInt64List$cleanup(org$frostlanguage$frost$UInt64List* self);

