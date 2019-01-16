#pragma once
#include "panda_c.h"
#include "Match_types.h"
typedef struct panda$core$String$Match panda$core$String$Match;
typedef struct panda$core$Matcher panda$core$Matcher;
typedef struct panda$core$String panda$core$String;

void panda$core$String$Match$init$panda$core$Matcher(panda$core$String$Match* self, panda$core$Matcher* p_m);
panda$core$String* panda$core$String$Match$convert$R$panda$core$String(panda$core$String$Match* self);
void panda$core$String$Match$cleanup(panda$core$String$Match* self);

