#pragma once
#include "frost_c.h"
#include "Position_types.h"
#include "org/frostlang/json/Position_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlang$json$Position org$frostlang$json$Position$init();
org$frostlang$json$Position org$frostlang$json$Position$init$frost$core$Int64$frost$core$Int64(frost$core$Int64 p_line, frost$core$Int64 p_column);
frost$core$String* org$frostlang$json$Position$convert$R$frost$core$String(org$frostlang$json$Position self);
void org$frostlang$json$Position$cleanup(org$frostlang$json$Position self);

