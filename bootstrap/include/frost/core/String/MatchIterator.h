#pragma once
#include "frost_c.h"
#include "MatchIterator_types.h"
typedef struct frost$core$String$MatchIterator frost$core$String$MatchIterator;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
#include "frost/core/String/Index_types.h"

void frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(frost$core$String$MatchIterator* self, frost$core$String* p_haystack, frost$core$String* p_needle, frost$core$Bit p_allowOveraps);
frost$core$Bit frost$core$String$MatchIterator$get_done$R$frost$core$Bit(frost$core$String$MatchIterator* self);
frost$core$String$Index frost$core$String$MatchIterator$next$R$frost$core$String$Index(frost$core$String$MatchIterator* self);
void frost$core$String$MatchIterator$cleanup(frost$core$String$MatchIterator* self);

