#pragma once
#include "frost_c.h"
#include "ImmutableArray_types.h"
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$core$Immutable frost$core$Immutable;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void frost$collections$ImmutableArray$init(frost$collections$ImmutableArray* self);
void frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT(frost$collections$ImmutableArray* self, frost$collections$ListView* p_data);
void frost$collections$ImmutableArray$init$frost$unsafe$Pointer$LTfrost$collections$ImmutableArray$T$GT$frost$core$Int64(frost$collections$ImmutableArray* self, frost$core$Immutable** p_data, frost$core$Int64 p_count);
frost$collections$ImmutableArray* frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(frost$collections$Array* p_a);
void frost$collections$ImmutableArray$cleanup(frost$collections$ImmutableArray* self);
frost$core$Immutable* frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T(frost$collections$ImmutableArray* self, frost$core$Int64 p_index);
frost$core$Int64 frost$collections$ImmutableArray$get_count$R$frost$core$Int64(frost$collections$ImmutableArray* self);
frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(frost$collections$ImmutableArray* self);
frost$core$String* frost$collections$ImmutableArray$get_asString$R$frost$core$String(frost$collections$ImmutableArray* self);

