#pragma once
#include "panda_c.h"
#include "Int32List_types.h"
typedef struct org$pandalanguage$panda$Int32List org$pandalanguage$panda$Int32List;
#include "panda/core/SteppedRange.LTpanda/core/Int32.Cpanda/core/Int32.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT(org$pandalanguage$panda$Int32List* self, panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT p_range);
panda$core$Int64 org$pandalanguage$panda$Int32List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int32List* self);
panda$core$Int64 org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int32List* self);
panda$core$Int32 org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32(org$pandalanguage$panda$Int32List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$Int32List$convert$R$panda$core$String(org$pandalanguage$panda$Int32List* self);
void org$pandalanguage$panda$Int32List$cleanup(org$pandalanguage$panda$Int32List* self);

