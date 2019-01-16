#pragma once
#include "frost_c.h"
#include "Token_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"
#include "org/frostlang/frostc/parser/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlang/frostc/Position_types.h"

org$frostlang$frostc$parser$Token org$frostlang$frostc$parser$Token$init$org$frostlang$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position(org$frostlang$frostc$parser$Token$Kind p_kind, frost$core$String$Index p_start, frost$core$String$Index p_end, org$frostlang$frostc$Position p_position);
void org$frostlang$frostc$parser$Token$cleanup(org$frostlang$frostc$parser$Token self);

