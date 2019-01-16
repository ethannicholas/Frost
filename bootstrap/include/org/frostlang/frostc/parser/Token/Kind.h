#pragma once
#include "frost_c.h"
#include "Kind_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/frostc/parser/Token/Kind_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlang$frostc$parser$Token$Kind$convert$R$frost$core$String(org$frostlang$frostc$parser$Token$Kind self);
void org$frostlang$frostc$parser$Token$Kind$cleanup(org$frostlang$frostc$parser$Token$Kind self);
org$frostlang$frostc$parser$Token$Kind org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$Token$Kind self, org$frostlang$frostc$parser$Token$Kind p_other);

