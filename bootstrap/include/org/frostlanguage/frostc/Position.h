#pragma once
#include "frost_c.h"
#include "Position_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlanguage$frostc$Position org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$Position org$frostlanguage$frostc$Position$init$frost$core$Int64$frost$core$Int64(frost$core$Int64 p_line, frost$core$Int64 p_column);
frost$core$Bit org$frostlanguage$frostc$Position$$EQ$org$frostlanguage$frostc$Position$R$frost$core$Bit(org$frostlanguage$frostc$Position self, org$frostlanguage$frostc$Position p_other);
frost$core$Int64 org$frostlanguage$frostc$Position$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$Position self);
frost$core$String* org$frostlanguage$frostc$Position$convert$R$frost$core$String(org$frostlanguage$frostc$Position self);
void org$frostlanguage$frostc$Position$cleanup(org$frostlanguage$frostc$Position self);

