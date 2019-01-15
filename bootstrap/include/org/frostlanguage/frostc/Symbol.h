#pragma once
#include "frost_c.h"
#include "Symbol_types.h"
typedef struct org$frostlanguage$frostc$Symbol org$frostlanguage$frostc$Symbol;
#include "org/frostlanguage/frostc/Symbol/Kind_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlanguage$frostc$Symbol$init$org$frostlanguage$frostc$Symbol$Kind$org$frostlanguage$frostc$Position$frost$core$String(org$frostlanguage$frostc$Symbol* self, org$frostlanguage$frostc$Symbol$Kind p_kind, org$frostlanguage$frostc$Position p_position, frost$core$String* p_name);
frost$core$Bit org$frostlanguage$frostc$Symbol$get_heritable$R$frost$core$Bit(org$frostlanguage$frostc$Symbol* self);
void org$frostlanguage$frostc$Symbol$cleanup(org$frostlanguage$frostc$Symbol* self);

