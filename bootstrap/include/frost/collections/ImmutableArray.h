#pragma once
#include "frost_c.h"
#include "ImmutableArray_types.h"
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$Immutable frost$core$Immutable;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void frost$collections$ImmutableArray$init(void* rawSelf);
void frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT(void* rawSelf, frost$collections$ListView* p_data);
void frost$collections$ImmutableArray$init$frost$unsafe$NewPointer$LTfrost$collections$ImmutableArray$T$GT$frost$core$Int(void* rawSelf, frost$unsafe$NewPointer p_data, frost$core$Int p_count);
frost$collections$ImmutableArray* frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(frost$collections$Array* p_a);
void frost$collections$ImmutableArray$cleanup(void* rawSelf);
frost$core$Immutable* frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T(void* rawSelf, frost$core$Int p_index);
frost$core$Int frost$collections$ImmutableArray$get_count$R$frost$core$Int(void* rawSelf);
frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(void* rawSelf);
frost$core$String* frost$collections$ImmutableArray$get_asString$R$frost$core$String(void* rawSelf);

