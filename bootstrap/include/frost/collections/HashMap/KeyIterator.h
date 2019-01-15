#pragma once
#include "frost_c.h"
#include "KeyIterator_types.h"
typedef struct frost$collections$HashMap$KeyIterator frost$collections$HashMap$KeyIterator;
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Key frost$collections$Key;

void frost$collections$HashMap$KeyIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$KeyIterator$K$Cfrost$collections$HashMap$KeyIterator$V$GT(frost$collections$HashMap$KeyIterator* self, frost$collections$HashMap* p_map);
frost$core$Bit frost$collections$HashMap$KeyIterator$get_done$R$frost$core$Bit(frost$collections$HashMap$KeyIterator* self);
frost$collections$Key* frost$collections$HashMap$KeyIterator$next$R$frost$collections$HashMap$KeyIterator$K(frost$collections$HashMap$KeyIterator* self);
void frost$collections$HashMap$KeyIterator$cleanup(frost$collections$HashMap$KeyIterator* self);

