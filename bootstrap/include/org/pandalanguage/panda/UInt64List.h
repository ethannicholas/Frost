#pragma once
#include "panda_c.h"
#include "UInt64List_types.h"
typedef struct org$pandalanguage$panda$UInt64List org$pandalanguage$panda$UInt64List;
#include "panda/core/SteppedRange.LTpanda/core/UInt64.Cpanda/core/UInt64.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/UInt64_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT(org$pandalanguage$panda$UInt64List* self, panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt64List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt64List* self);
panda$core$UInt64 org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64(org$pandalanguage$panda$UInt64List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$UInt64List$convert$R$panda$core$String(org$pandalanguage$panda$UInt64List* self);
void org$pandalanguage$panda$UInt64List$cleanup(org$pandalanguage$panda$UInt64List* self);

