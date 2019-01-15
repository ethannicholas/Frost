#pragma once
#include "frost_c.h"
#include "UInt8List_types.h"
typedef struct org$frostlanguage$frost$UInt8List org$frostlanguage$frost$UInt8List;
#include "frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT(org$frostlanguage$frost$UInt8List* self, frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT p_range);
frost$core$Int64 org$frostlanguage$frost$UInt8List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT p_range);
frost$core$Int64 org$frostlanguage$frost$UInt8List$get_count$R$frost$core$Int64(org$frostlanguage$frost$UInt8List* self);
frost$core$UInt8 org$frostlanguage$frost$UInt8List$$IDX$frost$core$Int64$R$frost$core$UInt8(org$frostlanguage$frost$UInt8List* self, frost$core$Int64 p_index);
frost$core$String* org$frostlanguage$frost$UInt8List$convert$R$frost$core$String(org$frostlanguage$frost$UInt8List* self);
void org$frostlanguage$frost$UInt8List$cleanup(org$frostlanguage$frost$UInt8List* self);

