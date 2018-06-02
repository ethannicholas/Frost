#pragma once
#include "panda_c.h"
#include "Arguments_types.h"
typedef struct org$pandalanguage$pandac$Main$Arguments org$pandalanguage$pandac$Main$Arguments;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args);
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self);
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self);
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label);
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self);

