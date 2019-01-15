#pragma once
#include "frost_c.h"
#include "UInt32List_types.h"
typedef struct org$frostlanguage$frost$UInt32List org$frostlanguage$frost$UInt32List;
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt32_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT(org$frostlanguage$frost$UInt32List* self, frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT p_range);
frost$core$Int64 org$frostlanguage$frost$UInt32List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT p_range);
frost$core$Int64 org$frostlanguage$frost$UInt32List$get_count$R$frost$core$Int64(org$frostlanguage$frost$UInt32List* self);
frost$core$UInt32 org$frostlanguage$frost$UInt32List$$IDX$frost$core$Int64$R$frost$core$UInt32(org$frostlanguage$frost$UInt32List* self, frost$core$Int64 p_index);
frost$core$String* org$frostlanguage$frost$UInt32List$convert$R$frost$core$String(org$frostlanguage$frost$UInt32List* self);
void org$frostlanguage$frost$UInt32List$cleanup(org$frostlanguage$frost$UInt32List* self);

