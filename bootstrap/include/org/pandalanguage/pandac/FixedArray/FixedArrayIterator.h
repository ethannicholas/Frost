#pragma once
#include "panda_c.h"
#include "FixedArrayIterator_types.h"
typedef struct org$pandalanguage$pandac$FixedArray$FixedArrayIterator org$pandalanguage$pandac$FixedArray$FixedArrayIterator;
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void org$pandalanguage$pandac$FixedArray$FixedArrayIterator$init$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$FixedArrayIterator$T$GT(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* self, org$pandalanguage$pandac$FixedArray* p_array);
panda$core$Bit org$pandalanguage$pandac$FixedArray$FixedArrayIterator$get_done$R$panda$core$Bit(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* self);
panda$core$Object* org$pandalanguage$pandac$FixedArray$FixedArrayIterator$next$R$org$pandalanguage$pandac$FixedArray$FixedArrayIterator$T(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* self);
void org$pandalanguage$pandac$FixedArray$FixedArrayIterator$cleanup(org$pandalanguage$pandac$FixedArray$FixedArrayIterator* self);

