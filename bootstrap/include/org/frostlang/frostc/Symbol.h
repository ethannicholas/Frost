#pragma once
#include "frost_c.h"
#include "Symbol_types.h"
typedef struct org$frostlang$frostc$Symbol org$frostlang$frostc$Symbol;
#include "org/frostlang/frostc/Symbol/Kind_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Symbol* self, org$frostlang$frostc$Symbol$Kind p_kind, org$frostlang$frostc$Position p_position, frost$core$String* p_name);
frost$core$Bit org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit(org$frostlang$frostc$Symbol* self);
void org$frostlang$frostc$Symbol$cleanup(org$frostlang$frostc$Symbol* self);

