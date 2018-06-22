#pragma once
#include "panda_c.h"
#include "Methods_types.h"
typedef struct org$pandalanguage$pandac$Methods org$pandalanguage$pandac$Methods;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Bit_types.h"

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods);
panda$core$Bit org$pandalanguage$pandac$Methods$containsDuplicates$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$R$panda$core$Bit(panda$collections$ListView* p_methods);
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* self);

