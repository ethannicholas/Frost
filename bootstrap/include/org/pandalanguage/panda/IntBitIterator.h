#pragma once
#include "panda_c.h"
#include "IntBitIterator_types.h"
typedef struct org$pandalanguage$panda$IntBitIterator org$pandalanguage$panda$IntBitIterator;
#include "panda/core/UInt64_types.h"
#include "panda/core/Bit_types.h"

void org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64(org$pandalanguage$panda$IntBitIterator* self, panda$core$UInt64 p_value, panda$core$UInt64 p_mask);
panda$core$Bit org$pandalanguage$panda$IntBitIterator$get_done$R$panda$core$Bit(org$pandalanguage$panda$IntBitIterator* self);
panda$core$Bit org$pandalanguage$panda$IntBitIterator$next$R$panda$core$Bit(org$pandalanguage$panda$IntBitIterator* self);
void org$pandalanguage$panda$IntBitIterator$cleanup(org$pandalanguage$panda$IntBitIterator* self);

