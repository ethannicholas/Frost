#pragma once
#include "frost_c.h"
#include "Kind_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/json/Token/Kind_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlang$json$Token$Kind$convert$R$frost$core$String(org$frostlang$json$Token$Kind self);
void org$frostlang$json$Token$Kind$cleanup(org$frostlang$json$Token$Kind self);
org$frostlang$json$Token$Kind org$frostlang$json$Token$Kind$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit(org$frostlang$json$Token$Kind self, org$frostlang$json$Token$Kind p_other);
