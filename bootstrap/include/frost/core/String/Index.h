#pragma once
#include "frost_c.h"
#include "Index_types.h"
#include "frost/core/String/Index_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

frost$core$String$Index frost$core$String$Index$init$frost$core$Int(frost$core$Int p_value);
frost$core$Bit frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index self, frost$core$String$Index p_other);
frost$core$Bit frost$core$String$Index$$GT$frost$core$String$Index$R$frost$core$Bit(frost$core$String$Index self, frost$core$String$Index p_other);
frost$core$Int frost$core$String$Index$get_hash$R$frost$core$Int(frost$core$String$Index self);
void frost$core$String$Index$cleanup(frost$core$String$Index self);

