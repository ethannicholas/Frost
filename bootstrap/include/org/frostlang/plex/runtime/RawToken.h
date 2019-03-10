#pragma once
#include "frost_c.h"
#include "RawToken_types.h"
#include "org/frostlang/plex/runtime/RawToken_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/String/Index_types.h"

org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$RawToken$init$frost$core$Int$frost$core$String$Index$frost$core$String$Index$frost$core$Int$frost$core$Int(frost$core$Int p_kind, frost$core$String$Index p_start, frost$core$String$Index p_end, frost$core$Int p_line, frost$core$Int p_column);
void org$frostlang$plex$runtime$RawToken$cleanup(org$frostlang$plex$runtime$RawToken self);

