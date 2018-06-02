#pragma once
#include "panda_c.h"
#include "RegexToken_types.h"
#include "org/pandalanguage/regex/RegexToken_types.h"
#include "org/pandalanguage/regex/RegexToken/Kind_types.h"
#include "panda/core/String/Index_types.h"
#include "org/pandalanguage/pandac/Position_types.h"

void org$pandalanguage$regex$RegexToken$init$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(org$pandalanguage$regex$RegexToken* self, org$pandalanguage$regex$RegexToken$Kind p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$pandac$Position p_position);
void org$pandalanguage$regex$RegexToken$cleanup(org$pandalanguage$regex$RegexToken self);

