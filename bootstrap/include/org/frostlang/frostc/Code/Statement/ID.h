#pragma once
#include "frost_c.h"
#include "ID_types.h"
#include "org/frostlang/frostc/Code/Statement/ID_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlang$frostc$Code$Statement$ID org$frostlang$frostc$Code$Statement$ID$init$frost$core$Int(frost$core$Int p_value);
frost$core$Int org$frostlang$frostc$Code$Statement$ID$get_hash$R$frost$core$Int(org$frostlang$frostc$Code$Statement$ID self);
frost$core$Bit org$frostlang$frostc$Code$Statement$ID$$EQ$org$frostlang$frostc$Code$Statement$ID$R$frost$core$Bit(org$frostlang$frostc$Code$Statement$ID self, org$frostlang$frostc$Code$Statement$ID p_other);
frost$core$String* org$frostlang$frostc$Code$Statement$ID$get_asString$R$frost$core$String(org$frostlang$frostc$Code$Statement$ID self);
void org$frostlang$frostc$Code$Statement$ID$cleanup(org$frostlang$frostc$Code$Statement$ID self);

