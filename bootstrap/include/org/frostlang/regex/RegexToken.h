#pragma once
#include "frost_c.h"
#include "RegexToken_types.h"
#include "org/frostlang/regex/RegexToken_types.h"
#include "org/frostlang/regex/RegexToken/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlang/frostc/Position_types.h"

org$frostlang$regex$RegexToken org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position(org$frostlang$regex$RegexToken$Kind p_kind, frost$core$String$Index p_start, frost$core$String$Index p_end, org$frostlang$frostc$Position p_position);
void org$frostlang$regex$RegexToken$cleanup(org$frostlang$regex$RegexToken self);

