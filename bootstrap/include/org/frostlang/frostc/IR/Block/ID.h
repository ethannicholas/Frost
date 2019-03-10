#pragma once
#include "frost_c.h"
#include "ID_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$Block$ID$init$frost$core$Int(frost$core$Int p_value);
frost$core$Bit org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit(org$frostlang$frostc$IR$Block$ID self, org$frostlang$frostc$IR$Block$ID p_other);
frost$core$Int org$frostlang$frostc$IR$Block$ID$get_hash$R$frost$core$Int(org$frostlang$frostc$IR$Block$ID self);
frost$core$String* org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Block$ID self);
void org$frostlang$frostc$IR$Block$ID$cleanup(org$frostlang$frostc$IR$Block$ID self);

