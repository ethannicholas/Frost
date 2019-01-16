#pragma once
#include "panda_c.h"
#include "UInt16List_types.h"
typedef struct org$pandalanguage$panda$UInt16List org$pandalanguage$panda$UInt16List;
#include "panda/core/SteppedRange.LTpanda/core/UInt16.Cpanda/core/UInt16.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/UInt16_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$UInt16List$init$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT(org$pandalanguage$panda$UInt16List* self, panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt16List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt16List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt16List* self);
panda$core$UInt16 org$pandalanguage$panda$UInt16List$$IDX$panda$core$Int64$R$panda$core$UInt16(org$pandalanguage$panda$UInt16List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$UInt16List$convert$R$panda$core$String(org$pandalanguage$panda$UInt16List* self);
void org$pandalanguage$panda$UInt16List$cleanup(org$pandalanguage$panda$UInt16List* self);

