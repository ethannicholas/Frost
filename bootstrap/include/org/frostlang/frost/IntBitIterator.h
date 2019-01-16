#pragma once
#include "frost_c.h"
#include "IntBitIterator_types.h"
typedef struct org$frostlang$frost$IntBitIterator org$frostlang$frost$IntBitIterator;
#include "frost/core/UInt64_types.h"
#include "frost/core/Bit_types.h"

void org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(org$frostlang$frost$IntBitIterator* self, frost$core$UInt64 p_value, frost$core$UInt64 p_mask);
frost$core$Bit org$frostlang$frost$IntBitIterator$get_done$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* self);
frost$core$Bit org$frostlang$frost$IntBitIterator$next$R$frost$core$Bit(org$frostlang$frost$IntBitIterator* self);
void org$frostlang$frost$IntBitIterator$cleanup(org$frostlang$frost$IntBitIterator* self);

