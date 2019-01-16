#pragma once
#include "frost_c.h"
#include "FixedArrayIterator_types.h"
typedef struct org$frostlang$frostc$FixedArray$FixedArrayIterator org$frostlang$frostc$FixedArray$FixedArrayIterator;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT(org$frostlang$frostc$FixedArray$FixedArrayIterator* self, org$frostlang$frostc$FixedArray* p_array);
frost$core$Bit org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit(org$frostlang$frostc$FixedArray$FixedArrayIterator* self);
frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(org$frostlang$frostc$FixedArray$FixedArrayIterator* self);
void org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup(org$frostlang$frostc$FixedArray$FixedArrayIterator* self);

