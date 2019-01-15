#pragma once
#include "frost_c.h"
#include "UInt64.GT_types.h"
#include "frost/core/Range.LTfrost/core/UInt64.GT.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

frost$core$Range$LTfrost$core$UInt64$GT frost$core$Range$LTfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$Bit(frost$core$UInt64 p_min, frost$core$UInt64 p_max, frost$core$Bit p_inclusive);
frost$core$String* frost$core$Range$LTfrost$core$UInt64$GT$convert$R$frost$core$String(frost$core$Range$LTfrost$core$UInt64$GT self);
void frost$core$Range$LTfrost$core$UInt64$GT$cleanup(frost$core$Range$LTfrost$core$UInt64$GT self);

