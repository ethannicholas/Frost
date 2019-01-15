#pragma once
#include "frost_c.h"
#include "UInt32.GT_types.h"
#include "frost/core/Range.LTfrost/core/UInt32.GT.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

frost$core$Range$LTfrost$core$UInt32$GT frost$core$Range$LTfrost$core$UInt32$GT$init$frost$core$UInt32$frost$core$UInt32$frost$core$Bit(frost$core$UInt32 p_min, frost$core$UInt32 p_max, frost$core$Bit p_inclusive);
frost$core$String* frost$core$Range$LTfrost$core$UInt32$GT$convert$R$frost$core$String(frost$core$Range$LTfrost$core$UInt32$GT self);
void frost$core$Range$LTfrost$core$UInt32$GT$cleanup(frost$core$Range$LTfrost$core$UInt32$GT self);

