#pragma once
#include "frost_c.h"
#include "Index.GT_types.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"
#include "frost/core/MutableString/Index_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

frost$core$Range$LTfrost$core$MutableString$Index$GT frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(frost$core$MutableString$Index p_min, frost$core$MutableString$Index p_max, frost$core$Bit p_inclusive);
frost$core$String* frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String(frost$core$Range$LTfrost$core$MutableString$Index$GT self);
void frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup(frost$core$Range$LTfrost$core$MutableString$Index$GT self);

