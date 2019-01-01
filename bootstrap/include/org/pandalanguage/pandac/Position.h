#pragma once
#include "panda_c.h"
#include "Position_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

org$pandalanguage$pandac$Position org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Position org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(panda$core$Int64 p_line, panda$core$Int64 p_column);
panda$core$Bit org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(org$pandalanguage$pandac$Position self, org$pandalanguage$pandac$Position p_other);
panda$core$Int64 org$pandalanguage$pandac$Position$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Position self);
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position self);
void org$pandalanguage$pandac$Position$cleanup(org$pandalanguage$pandac$Position self);

