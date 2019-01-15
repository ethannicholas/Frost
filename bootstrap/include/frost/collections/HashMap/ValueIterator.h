#pragma once
#include "frost_c.h"
#include "ValueIterator_types.h"
typedef struct frost$collections$HashMap$ValueIterator frost$collections$HashMap$ValueIterator;
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$HashMap$ValueIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$ValueIterator$K$Cfrost$collections$HashMap$ValueIterator$V$GT(frost$collections$HashMap$ValueIterator* self, frost$collections$HashMap* p_map);
frost$core$Bit frost$collections$HashMap$ValueIterator$get_done$R$frost$core$Bit(frost$collections$HashMap$ValueIterator* self);
frost$core$Object* frost$collections$HashMap$ValueIterator$next$R$frost$collections$HashMap$ValueIterator$V(frost$collections$HashMap$ValueIterator* self);
void frost$collections$HashMap$ValueIterator$cleanup(frost$collections$HashMap$ValueIterator* self);

