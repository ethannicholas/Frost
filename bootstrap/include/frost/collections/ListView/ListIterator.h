#pragma once
#include "frost_c.h"
#include "ListIterator_types.h"
typedef struct frost$collections$ListView$ListIterator frost$collections$ListView$ListIterator;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT(void* rawSelf, frost$collections$ListView* p_list);
frost$core$Bit frost$collections$ListView$ListIterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$core$Object* frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T(void* rawSelf);
void frost$collections$ListView$ListIterator$cleanup(void* rawSelf);

