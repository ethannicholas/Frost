#pragma once
#include "panda_c.h"
#include "RawToken_types.h"
#include "org/pandalanguage/plex/runtime/RawToken_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/String/Index_types.h"

org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(panda$core$Int64 p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, panda$core$Int64 p_line, panda$core$Int64 p_column);
void org$pandalanguage$plex$runtime$RawToken$cleanup(org$pandalanguage$plex$runtime$RawToken self);

