#pragma once
#include "frost_c.h"
#include "RangeIterator_types.h"
typedef struct frost$collections$Iterator$RangeIterator frost$collections$Iterator$RangeIterator;
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(frost$collections$Iterator$RangeIterator* self, frost$collections$Iterator* p_base, frost$core$Int$nullable p_start, frost$core$Int$nullable p_end, frost$core$Bit p_inclusive, frost$core$Int p_step);
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$RangeIterator* self);
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(frost$collections$Iterator$RangeIterator* self);
void frost$collections$Iterator$RangeIterator$cleanup(frost$collections$Iterator$RangeIterator* self);

