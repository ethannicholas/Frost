#pragma once
#include "frost_c.h"
#include "EnumerationIterator_types.h"
typedef struct frost$collections$Iterator$EnumerationIterator frost$collections$Iterator$EnumerationIterator;
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Tuple2 frost$core$Tuple2;

void frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT(frost$collections$Iterator$EnumerationIterator* self, frost$collections$Iterator* p_base);
frost$core$Bit frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$EnumerationIterator* self);
frost$core$Tuple2* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP(frost$collections$Iterator$EnumerationIterator* self);
void frost$collections$Iterator$EnumerationIterator$cleanup(frost$collections$Iterator$EnumerationIterator* self);

