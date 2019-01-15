#pragma once
#include "frost_c.h"
#include "Token_types.h"
#include "org/frostlanguage/frostc/parser/Token_types.h"
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlanguage/frostc/Position_types.h"

org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Token$init$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlanguage$frostc$Position(org$frostlanguage$frostc$parser$Token$Kind p_kind, frost$core$String$Index p_start, frost$core$String$Index p_end, org$frostlanguage$frostc$Position p_position);
void org$frostlanguage$frostc$parser$Token$cleanup(org$frostlanguage$frostc$parser$Token self);

