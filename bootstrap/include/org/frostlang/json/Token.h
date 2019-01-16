#pragma once
#include "frost_c.h"
#include "Token_types.h"
#include "org/frostlang/json/Token_types.h"
#include "org/frostlang/json/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlang/json/Position_types.h"

org$frostlang$json$Token org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position(org$frostlang$json$Token$Kind p_kind, frost$core$String$Index p_start, frost$core$String$Index p_end, org$frostlang$json$Position p_position);
void org$frostlang$json$Token$cleanup(org$frostlang$json$Token self);

