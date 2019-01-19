#pragma once
#include "frost_c.h"
#include "ID_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64(frost$core$Int64 p_value);
frost$core$Int64 org$frostlang$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64(org$frostlang$frostc$IR$Statement$ID self);
frost$core$Bit org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit(org$frostlang$frostc$IR$Statement$ID self, org$frostlang$frostc$IR$Statement$ID p_other);
frost$core$String* org$frostlang$frostc$IR$Statement$ID$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Statement$ID self);
void org$frostlang$frostc$IR$Statement$ID$cleanup(org$frostlang$frostc$IR$Statement$ID self);

