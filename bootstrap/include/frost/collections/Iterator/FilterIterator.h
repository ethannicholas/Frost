#pragma once
#include "frost_c.h"
#include "FilterIterator_types.h"
typedef struct frost$collections$Iterator$FilterIterator frost$collections$Iterator$FilterIterator;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$Iterator$FilterIterator* self, frost$collections$Iterator* p_base, frost$core$MutableMethod* p_filter);
void frost$collections$Iterator$FilterIterator$getNext(frost$collections$Iterator$FilterIterator* self);
frost$core$Bit frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$FilterIterator* self);
frost$core$Object* frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T(frost$collections$Iterator$FilterIterator* self);
void frost$collections$Iterator$FilterIterator$cleanup(frost$collections$Iterator$FilterIterator* self);

