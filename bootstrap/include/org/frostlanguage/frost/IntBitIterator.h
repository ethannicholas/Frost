#pragma once
#include "frost_c.h"
#include "IntBitIterator_types.h"
typedef struct org$frostlanguage$frost$IntBitIterator org$frostlanguage$frost$IntBitIterator;
#include "frost/core/UInt64_types.h"
#include "frost/core/Bit_types.h"

void org$frostlanguage$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(org$frostlanguage$frost$IntBitIterator* self, frost$core$UInt64 p_value, frost$core$UInt64 p_mask);
frost$core$Bit org$frostlanguage$frost$IntBitIterator$get_done$R$frost$core$Bit(org$frostlanguage$frost$IntBitIterator* self);
frost$core$Bit org$frostlanguage$frost$IntBitIterator$next$R$frost$core$Bit(org$frostlanguage$frost$IntBitIterator* self);
void org$frostlanguage$frost$IntBitIterator$cleanup(org$frostlanguage$frost$IntBitIterator* self);

