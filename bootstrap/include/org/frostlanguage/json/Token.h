#pragma once
#include "frost_c.h"
#include "Token_types.h"
#include "org/frostlanguage/json/Token_types.h"
#include "org/frostlanguage/json/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlanguage/json/Position_types.h"

org$frostlanguage$json$Token org$frostlanguage$json$Token$init$org$frostlanguage$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlanguage$json$Position(org$frostlanguage$json$Token$Kind p_kind, frost$core$String$Index p_start, frost$core$String$Index p_end, org$frostlanguage$json$Position p_position);
void org$frostlanguage$json$Token$cleanup(org$frostlanguage$json$Token self);

