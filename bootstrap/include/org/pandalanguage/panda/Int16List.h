#pragma once
#include "panda_c.h"
#include "Int16List_types.h"
typedef struct org$pandalanguage$panda$Int16List org$pandalanguage$panda$Int16List;
#include "panda/core/SteppedRange.LTpanda/core/Int16.Cpanda/core/Int16.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Int16_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$Int16List$init$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT(org$pandalanguage$panda$Int16List* self, panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT p_range);
panda$core$Int64 org$pandalanguage$panda$Int16List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int16List* self);
panda$core$Int64 org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int16List* self);
panda$core$Int16 org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16(org$pandalanguage$panda$Int16List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$Int16List$convert$R$panda$core$String(org$pandalanguage$panda$Int16List* self);
void org$pandalanguage$panda$Int16List$cleanup(org$pandalanguage$panda$Int16List* self);

