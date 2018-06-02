#pragma once
#include "panda_c.h"
#include "Token_types.h"
#include "org/pandalanguage/pandac/parser/Token_types.h"
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
#include "panda/core/String/Index_types.h"
#include "org/pandalanguage/pandac/Position_types.h"

void org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Token* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$pandac$Position p_position);
void org$pandalanguage$pandac$parser$Token$cleanup(org$pandalanguage$pandac$parser$Token self);

