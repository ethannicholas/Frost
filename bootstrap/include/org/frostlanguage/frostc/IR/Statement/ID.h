#pragma once
#include "frost_c.h"
#include "ID_types.h"
#include "org/frostlanguage/frostc/IR/Statement/ID_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlanguage$frostc$IR$Statement$ID org$frostlanguage$frostc$IR$Statement$ID$init$frost$core$Int64(frost$core$Int64 p_value);
frost$core$Int64 org$frostlanguage$frostc$IR$Statement$ID$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$IR$Statement$ID self);
frost$core$Bit org$frostlanguage$frostc$IR$Statement$ID$$EQ$org$frostlanguage$frostc$IR$Statement$ID$R$frost$core$Bit(org$frostlanguage$frostc$IR$Statement$ID self, org$frostlanguage$frostc$IR$Statement$ID p_other);
frost$core$String* org$frostlanguage$frostc$IR$Statement$ID$convert$R$frost$core$String(org$frostlanguage$frostc$IR$Statement$ID self);
void org$frostlanguage$frostc$IR$Statement$ID$cleanup(org$frostlanguage$frostc$IR$Statement$ID self);

