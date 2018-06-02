#pragma once
#include "panda_c.h"
#include "Alias_types.h"
typedef struct org$pandalanguage$pandac$Alias org$pandalanguage$pandac$Alias;
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/Position_types.h"

void org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Alias* self, panda$core$String* p_alias, panda$core$String* p_fullName, org$pandalanguage$pandac$Position p_position);
panda$core$String* org$pandalanguage$pandac$Alias$convert$R$panda$core$String(org$pandalanguage$pandac$Alias* self);
void org$pandalanguage$pandac$Alias$cleanup(org$pandalanguage$pandac$Alias* self);

