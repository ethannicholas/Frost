#pragma once
#include "panda_c.h"
#include "ID_types.h"
#include "org/pandalanguage/pandac/IR/Statement/ID_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

org$pandalanguage$pandac$IR$Statement$ID org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64(panda$core$Int64 p_value);
panda$core$Int64 org$pandalanguage$pandac$IR$Statement$ID$hash$R$panda$core$Int64(org$pandalanguage$pandac$IR$Statement$ID self);
panda$core$Bit org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit(org$pandalanguage$pandac$IR$Statement$ID self, org$pandalanguage$pandac$IR$Statement$ID p_other);
panda$core$String* org$pandalanguage$pandac$IR$Statement$ID$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Statement$ID self);
void org$pandalanguage$pandac$IR$Statement$ID$cleanup(org$pandalanguage$pandac$IR$Statement$ID self);

