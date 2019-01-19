#pragma once
#include "frost_c.h"
#include "ID_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$Block$ID$init$frost$core$Int64(frost$core$Int64 p_value);
frost$core$Bit org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit(org$frostlang$frostc$IR$Block$ID self, org$frostlang$frostc$IR$Block$ID p_other);
frost$core$String* org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Block$ID self);
void org$frostlang$frostc$IR$Block$ID$cleanup(org$frostlang$frostc$IR$Block$ID self);

