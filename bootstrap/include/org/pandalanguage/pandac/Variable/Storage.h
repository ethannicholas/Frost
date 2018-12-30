#pragma once
#include "panda_c.h"
#include "Storage_types.h"
typedef struct org$pandalanguage$pandac$Variable$Storage org$pandalanguage$pandac$Variable$Storage;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

void org$pandalanguage$pandac$Variable$Storage$cleanup(org$pandalanguage$pandac$Variable$Storage* self);
void org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Variable$Storage* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0);
void org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Storage* self, panda$core$Int64 p_rv);
panda$core$Bit org$pandalanguage$pandac$Variable$Storage$$EQ$org$pandalanguage$pandac$Variable$Storage$R$panda$core$Bit(org$pandalanguage$pandac$Variable$Storage* self, org$pandalanguage$pandac$Variable$Storage* p_other);

