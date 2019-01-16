#pragma once
#include "panda_c.h"
#include "RegexMatchIterator_types.h"
typedef struct panda$core$String$RegexMatchIterator panda$core$String$RegexMatchIterator;
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$RegularExpression panda$core$RegularExpression;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String$Match panda$core$String$Match;

void panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit(panda$core$String$RegexMatchIterator* self, panda$core$String* p_haystack, panda$core$RegularExpression* p_needle, panda$core$Bit p_allowOveraps);
panda$core$Bit panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit(panda$core$String$RegexMatchIterator* self);
panda$core$String$Match* panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match(panda$core$String$RegexMatchIterator* self);
void panda$core$String$RegexMatchIterator$cleanup(panda$core$String$RegexMatchIterator* self);

