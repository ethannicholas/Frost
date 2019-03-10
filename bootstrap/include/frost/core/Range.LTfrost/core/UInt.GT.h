#pragma once
#include "frost_c.h"
#include "UInt.GT_types.h"
#include "frost/core/Range.LTfrost/core/UInt.GT.h"
#include "frost/core/UInt_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

frost$core$Range$LTfrost$core$UInt$GT frost$core$Range$LTfrost$core$UInt$GT$init$frost$core$UInt$frost$core$UInt$frost$core$Bit(frost$core$UInt p_min, frost$core$UInt p_max, frost$core$Bit p_inclusive);
frost$core$String* frost$core$Range$LTfrost$core$UInt$GT$get_asString$R$frost$core$String(frost$core$Range$LTfrost$core$UInt$GT self);
void frost$core$Range$LTfrost$core$UInt$GT$cleanup(frost$core$Range$LTfrost$core$UInt$GT self);

