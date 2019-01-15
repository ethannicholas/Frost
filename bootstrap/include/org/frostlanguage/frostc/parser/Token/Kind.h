#pragma once
#include "frost_c.h"
#include "Kind_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlanguage$frostc$parser$Token$Kind$convert$R$frost$core$String(org$frostlanguage$frostc$parser$Token$Kind self);
void org$frostlanguage$frostc$parser$Token$Kind$cleanup(org$frostlanguage$frostc$parser$Token$Kind self);
org$frostlanguage$frostc$parser$Token$Kind org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlanguage$frostc$parser$Token$Kind$$EQ$org$frostlanguage$frostc$parser$Token$Kind$R$frost$core$Bit(org$frostlanguage$frostc$parser$Token$Kind self, org$frostlanguage$frostc$parser$Token$Kind p_other);

