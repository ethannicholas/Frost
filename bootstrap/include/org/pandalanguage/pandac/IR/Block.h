#pragma once
#include "panda_c.h"
#include "Block_types.h"
typedef struct org$pandalanguage$pandac$IR$Block org$pandalanguage$pandac$IR$Block;
#include "org/pandalanguage/pandac/IR/Block/ID_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$IR$Block$init$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Block* self, org$pandalanguage$pandac$IR$Block$ID p_id);
panda$core$String* org$pandalanguage$pandac$IR$Block$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Block* self);
void org$pandalanguage$pandac$IR$Block$cleanup(org$pandalanguage$pandac$IR$Block* self);

