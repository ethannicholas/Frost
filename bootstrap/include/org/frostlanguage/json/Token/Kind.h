#pragma once
#include "frost_c.h"
#include "Kind_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/json/Token/Kind_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlanguage$json$Token$Kind$convert$R$frost$core$String(org$frostlanguage$json$Token$Kind self);
void org$frostlanguage$json$Token$Kind$cleanup(org$frostlanguage$json$Token$Kind self);
org$frostlanguage$json$Token$Kind org$frostlanguage$json$Token$Kind$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlanguage$json$Token$Kind$$EQ$org$frostlanguage$json$Token$Kind$R$frost$core$Bit(org$frostlanguage$json$Token$Kind self, org$frostlanguage$json$Token$Kind p_other);

