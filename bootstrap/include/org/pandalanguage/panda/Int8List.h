#pragma once
#include "panda_c.h"
#include "Int8List_types.h"
typedef struct org$pandalanguage$panda$Int8List org$pandalanguage$panda$Int8List;
#include "panda/core/SteppedRange.LTpanda/core/Int8.Cpanda/core/Int8.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Int8_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$Int8List$init$panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT(org$pandalanguage$panda$Int8List* self, panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT p_range);
panda$core$Int64 org$pandalanguage$panda$Int8List$computeCount$panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT p_range);
panda$core$Int64 org$pandalanguage$panda$Int8List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int8List* self);
panda$core$Int8 org$pandalanguage$panda$Int8List$$IDX$panda$core$Int64$R$panda$core$Int8(org$pandalanguage$panda$Int8List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$Int8List$convert$R$panda$core$String(org$pandalanguage$panda$Int8List* self);
void org$pandalanguage$panda$Int8List$cleanup(org$pandalanguage$panda$Int8List* self);

