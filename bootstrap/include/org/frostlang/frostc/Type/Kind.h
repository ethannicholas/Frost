#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/frostc/Type/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Type$Kind$cleanup(org$frostlang$frostc$Type$Kind self);
org$frostlang$frostc$Type$Kind org$frostlang$frostc$Type$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(org$frostlang$frostc$Type$Kind self, org$frostlang$frostc$Type$Kind p_other);
frost$core$Int org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$Type$Kind self);
frost$core$String* org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$Type$Kind self);

