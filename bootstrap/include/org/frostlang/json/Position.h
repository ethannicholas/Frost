#pragma once
#include "frost_c.h"
#include "Position_types.h"
#include "org/frostlang/json/Position_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

org$frostlang$json$Position org$frostlang$json$Position$init();
org$frostlang$json$Position org$frostlang$json$Position$init$frost$core$Int$frost$core$Int(frost$core$Int p_line, frost$core$Int p_column);
frost$core$String* org$frostlang$json$Position$get_asString$R$frost$core$String(org$frostlang$json$Position self);
void org$frostlang$json$Position$cleanup(org$frostlang$json$Position self);

