#pragma once
#include "panda_c.h"
#include "Int64List_types.h"
typedef struct org$pandalanguage$panda$Int64List org$pandalanguage$panda$Int64List;
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT(org$pandalanguage$panda$Int64List* self, panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT p_range);
panda$core$Int64 org$pandalanguage$panda$Int64List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int64List* self);
panda$core$Int64 org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int64List* self);
panda$core$Int64 org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$panda$Int64List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$Int64List$convert$R$panda$core$String(org$pandalanguage$panda$Int64List* self);
void org$pandalanguage$panda$Int64List$cleanup(org$pandalanguage$panda$Int64List* self);

