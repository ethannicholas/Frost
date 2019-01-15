#pragma once
#include "frost_c.h"
#include "FixedArrayIterator_types.h"
typedef struct org$frostlanguage$frostc$FixedArray$FixedArrayIterator org$frostlanguage$frostc$FixedArray$FixedArrayIterator;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void org$frostlanguage$frostc$FixedArray$FixedArrayIterator$init$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$FixedArrayIterator$T$GT(org$frostlanguage$frostc$FixedArray$FixedArrayIterator* self, org$frostlanguage$frostc$FixedArray* p_array);
frost$core$Bit org$frostlanguage$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit(org$frostlanguage$frostc$FixedArray$FixedArrayIterator* self);
frost$core$Object* org$frostlanguage$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlanguage$frostc$FixedArray$FixedArrayIterator$T(org$frostlanguage$frostc$FixedArray$FixedArrayIterator* self);
void org$frostlanguage$frostc$FixedArray$FixedArrayIterator$cleanup(org$frostlanguage$frostc$FixedArray$FixedArrayIterator* self);

