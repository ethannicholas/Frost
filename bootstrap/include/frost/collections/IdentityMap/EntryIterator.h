#pragma once
#include "frost_c.h"
#include "EntryIterator_types.h"
typedef struct frost$collections$IdentityMap$EntryIterator frost$collections$IdentityMap$EntryIterator;
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Tuple2 frost$core$Tuple2;

void frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT(void* rawSelf, frost$collections$IdentityMap* p_map);
frost$core$Bit frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$core$Tuple2* frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP(void* rawSelf);
void frost$collections$IdentityMap$EntryIterator$cleanup(void* rawSelf);

