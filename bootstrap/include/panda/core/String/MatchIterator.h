#pragma once
#include "panda_c.h"
#include "MatchIterator_types.h"
typedef struct panda$core$String$MatchIterator panda$core$String$MatchIterator;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"
#include "panda/core/String/Index_types.h"

void panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit(panda$core$String$MatchIterator* self, panda$core$String* p_haystack, panda$core$String* p_needle, panda$core$Bit p_allowOveraps);
panda$core$Bit panda$core$String$MatchIterator$get_done$R$panda$core$Bit(panda$core$String$MatchIterator* self);
panda$core$String$Index panda$core$String$MatchIterator$next$R$panda$core$String$Index(panda$core$String$MatchIterator* self);
void panda$core$String$MatchIterator$cleanup(panda$core$String$MatchIterator* self);

