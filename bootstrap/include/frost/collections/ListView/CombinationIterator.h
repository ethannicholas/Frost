#pragma once
#include "frost_c.h"
#include "CombinationIterator_types.h"
typedef struct frost$collections$ListView$CombinationIterator frost$collections$ListView$CombinationIterator;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

void frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int(void* rawSelf, frost$collections$ListView* p_list, frost$core$Int p_count);
frost$core$Bit frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$collections$ListView* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(void* rawSelf);
void frost$collections$ListView$CombinationIterator$cleanup(void* rawSelf);

