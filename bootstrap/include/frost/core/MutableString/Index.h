#pragma once
#include "frost_c.h"
#include "Index_types.h"
#include "frost/core/MutableString/Index_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

frost$core$MutableString$Index frost$core$MutableString$Index$init$frost$core$Int(frost$core$Int p_value);
frost$core$Bit frost$core$MutableString$Index$$EQ$frost$core$MutableString$Index$R$frost$core$Bit(frost$core$MutableString$Index self, frost$core$MutableString$Index p_other);
frost$core$Bit frost$core$MutableString$Index$$GT$frost$core$MutableString$Index$R$frost$core$Bit(frost$core$MutableString$Index self, frost$core$MutableString$Index p_other);
frost$core$Int frost$core$MutableString$Index$get_hash$R$frost$core$Int(frost$core$MutableString$Index self);
void frost$core$MutableString$Index$cleanup(frost$core$MutableString$Index self);

