#pragma once
#include "frost_c.h"
#include "MapIterator_types.h"
typedef struct frost$collections$Iterator$MapIterator frost$collections$Iterator$MapIterator;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP(void* rawSelf, frost$collections$Iterator* p_base, frost$core$MutableMethod* p_map);
frost$core$Bit frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$core$Object* frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U(void* rawSelf);
void frost$collections$Iterator$MapIterator$cleanup(void* rawSelf);

