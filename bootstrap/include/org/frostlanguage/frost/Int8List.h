#pragma once
#include "frost_c.h"
#include "Int8List_types.h"
typedef struct org$frostlanguage$frost$Int8List org$frostlanguage$frost$Int8List;
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int8_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT(org$frostlanguage$frost$Int8List* self, frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT p_range);
frost$core$Int64 org$frostlanguage$frost$Int8List$computeCount$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT p_range);
frost$core$Int64 org$frostlanguage$frost$Int8List$get_count$R$frost$core$Int64(org$frostlanguage$frost$Int8List* self);
frost$core$Int8 org$frostlanguage$frost$Int8List$$IDX$frost$core$Int64$R$frost$core$Int8(org$frostlanguage$frost$Int8List* self, frost$core$Int64 p_index);
frost$core$String* org$frostlanguage$frost$Int8List$convert$R$frost$core$String(org$frostlanguage$frost$Int8List* self);
void org$frostlanguage$frost$Int8List$cleanup(org$frostlanguage$frost$Int8List* self);

