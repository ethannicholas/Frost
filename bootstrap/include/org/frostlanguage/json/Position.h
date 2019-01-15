#pragma once
#include "frost_c.h"
#include "Position_types.h"
#include "org/frostlanguage/json/Position_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlanguage$json$Position org$frostlanguage$json$Position$init();
org$frostlanguage$json$Position org$frostlanguage$json$Position$init$frost$core$Int64$frost$core$Int64(frost$core$Int64 p_line, frost$core$Int64 p_column);
frost$core$String* org$frostlanguage$json$Position$convert$R$frost$core$String(org$frostlanguage$json$Position self);
void org$frostlanguage$json$Position$cleanup(org$frostlanguage$json$Position self);

