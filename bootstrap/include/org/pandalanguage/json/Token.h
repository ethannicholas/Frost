#pragma once
#include "panda_c.h"
#include "Token_types.h"
#include "org/pandalanguage/json/Token_types.h"
#include "org/pandalanguage/json/Token/Kind_types.h"
#include "panda/core/String/Index_types.h"
#include "org/pandalanguage/json/Position_types.h"

void org$pandalanguage$json$Token$init$org$pandalanguage$json$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$json$Position(org$pandalanguage$json$Token* self, org$pandalanguage$json$Token$Kind p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$json$Position p_position);
void org$pandalanguage$json$Token$cleanup(org$pandalanguage$json$Token self);

