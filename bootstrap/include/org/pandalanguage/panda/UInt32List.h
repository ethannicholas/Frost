#pragma once
#include "panda_c.h"
#include "UInt32List_types.h"
typedef struct org$pandalanguage$panda$UInt32List org$pandalanguage$panda$UInt32List;
#include "panda/core/SteppedRange.LTpanda/core/UInt32.Cpanda/core/UInt32.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/UInt32_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$UInt32List$init$panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT(org$pandalanguage$panda$UInt32List* self, panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt32List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt32List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt32List* self);
panda$core$UInt32 org$pandalanguage$panda$UInt32List$$IDX$panda$core$Int64$R$panda$core$UInt32(org$pandalanguage$panda$UInt32List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$UInt32List$convert$R$panda$core$String(org$pandalanguage$panda$UInt32List* self);
void org$pandalanguage$panda$UInt32List$cleanup(org$pandalanguage$panda$UInt32List* self);

