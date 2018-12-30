#pragma once
#include "panda_c.h"
#include "Resolution_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/Compiler/Resolution_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

panda$core$String* org$pandalanguage$pandac$Compiler$Resolution$convert$R$panda$core$String(org$pandalanguage$pandac$Compiler$Resolution self);
void org$pandalanguage$pandac$Compiler$Resolution$cleanup(org$pandalanguage$pandac$Compiler$Resolution self);
org$pandalanguage$pandac$Compiler$Resolution org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(panda$core$Int64 p_rv);
panda$core$Bit org$pandalanguage$pandac$Compiler$Resolution$$EQ$org$pandalanguage$pandac$Compiler$Resolution$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$Resolution self, org$pandalanguage$pandac$Compiler$Resolution p_other);

