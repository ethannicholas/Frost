#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/frostc/Symbol/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Symbol$Kind$cleanup(org$frostlang$frostc$Symbol$Kind self);
org$frostlang$frostc$Symbol$Kind org$frostlang$frostc$Symbol$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$Symbol$Kind$$EQ$org$frostlang$frostc$Symbol$Kind$R$frost$core$Bit(org$frostlang$frostc$Symbol$Kind self, org$frostlang$frostc$Symbol$Kind p_other);
frost$core$Int org$frostlang$frostc$Symbol$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$Symbol$Kind self);
frost$core$String* org$frostlang$frostc$Symbol$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$Symbol$Kind self);

