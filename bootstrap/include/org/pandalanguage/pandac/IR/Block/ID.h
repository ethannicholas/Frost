#pragma once
#include "panda_c.h"
#include "ID_types.h"
#include "org/pandalanguage/pandac/IR/Block/ID_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

org$pandalanguage$pandac$IR$Block$ID org$pandalanguage$pandac$IR$Block$ID$init$panda$core$Int64(panda$core$Int64 p_value);
panda$core$Bit org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit(org$pandalanguage$pandac$IR$Block$ID self, org$pandalanguage$pandac$IR$Block$ID p_other);
panda$core$String* org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Block$ID self);
void org$pandalanguage$pandac$IR$Block$ID$cleanup(org$pandalanguage$pandac$IR$Block$ID self);

