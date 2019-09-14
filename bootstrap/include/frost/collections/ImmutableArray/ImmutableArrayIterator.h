#pragma once
#include "frost_c.h"
#include "ImmutableArrayIterator_types.h"
typedef struct frost$collections$ImmutableArray$ImmutableArrayIterator frost$collections$ImmutableArray$ImmutableArrayIterator;
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Immutable frost$core$Immutable;

void frost$collections$ImmutableArray$ImmutableArrayIterator$init$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$ImmutableArrayIterator$T$GT(void* rawSelf, frost$collections$ImmutableArray* p_array);
frost$core$Bit frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$core$Immutable* frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T(void* rawSelf);
void frost$collections$ImmutableArray$ImmutableArrayIterator$cleanup(void* rawSelf);

