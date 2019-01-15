#pragma once
#include "frost_c.h"
#include "RegexToken_types.h"
#include "org/frostlanguage/regex/RegexToken_types.h"
#include "org/frostlanguage/regex/RegexToken/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlanguage/frostc/Position_types.h"

org$frostlanguage$regex$RegexToken org$frostlanguage$regex$RegexToken$init$org$frostlanguage$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlanguage$frostc$Position(org$frostlanguage$regex$RegexToken$Kind p_kind, frost$core$String$Index p_start, frost$core$String$Index p_end, org$frostlanguage$frostc$Position p_position);
void org$frostlanguage$regex$RegexToken$cleanup(org$frostlanguage$regex$RegexToken self);

