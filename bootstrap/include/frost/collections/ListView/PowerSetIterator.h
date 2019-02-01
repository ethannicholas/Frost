#pragma once
#include "frost_c.h"
#include "PowerSetIterator_types.h"
typedef struct frost$collections$ListView$PowerSetIterator frost$collections$ListView$PowerSetIterator;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"

void frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* self, frost$collections$ListView* p_list);
frost$core$Bit frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PowerSetIterator* self);
frost$collections$ListView* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* self);
void frost$collections$ListView$PowerSetIterator$cleanup(frost$collections$ListView$PowerSetIterator* self);

