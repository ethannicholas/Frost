#pragma once
#include "panda_c.h"
#include "UInt8List_types.h"
typedef struct org$pandalanguage$panda$UInt8List org$pandalanguage$panda$UInt8List;
#include "panda/core/SteppedRange.LTpanda/core/UInt8.Cpanda/core/UInt8.GT.h"
#include "panda/core/Int64_types.h"
#include "panda/core/UInt8_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$panda$UInt8List$init$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT(org$pandalanguage$panda$UInt8List* self, panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt8List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT p_range);
panda$core$Int64 org$pandalanguage$panda$UInt8List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt8List* self);
panda$core$UInt8 org$pandalanguage$panda$UInt8List$$IDX$panda$core$Int64$R$panda$core$UInt8(org$pandalanguage$panda$UInt8List* self, panda$core$Int64 p_index);
panda$core$String* org$pandalanguage$panda$UInt8List$convert$R$panda$core$String(org$pandalanguage$panda$UInt8List* self);
void org$pandalanguage$panda$UInt8List$cleanup(org$pandalanguage$panda$UInt8List* self);

