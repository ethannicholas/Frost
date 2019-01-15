#pragma once
#include "frost_c.h"
#include "UnsafeMessageQueue_types.h"
typedef struct frost$unsafe$UnsafeMessageQueue frost$unsafe$UnsafeMessageQueue;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

void frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* self, frost$core$Object* p_data);
frost$core$Int64 frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int64(frost$unsafe$UnsafeMessageQueue* self);
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(frost$unsafe$UnsafeMessageQueue* self);
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* self);
void frost$unsafe$UnsafeMessageQueue$clear(frost$unsafe$UnsafeMessageQueue* self);
void frost$unsafe$UnsafeMessageQueue$init(frost$unsafe$UnsafeMessageQueue* self);
void frost$unsafe$UnsafeMessageQueue$cleanup(frost$unsafe$UnsafeMessageQueue* self);

