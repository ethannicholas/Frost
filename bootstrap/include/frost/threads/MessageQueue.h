#pragma once
#include "frost_c.h"
#include "MessageQueue_types.h"
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$core$Immutable frost$core$Immutable;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

void frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(frost$threads$MessageQueue* self, frost$core$Immutable* p_data);
frost$core$Int64 frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64(frost$threads$MessageQueue* self);
frost$core$Bit frost$threads$MessageQueue$hasMessage$R$frost$core$Bit(frost$threads$MessageQueue* self);
frost$core$Immutable* frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(frost$threads$MessageQueue* self);
void frost$threads$MessageQueue$clear(frost$threads$MessageQueue* self);
void frost$threads$MessageQueue$init(frost$threads$MessageQueue* self);
void frost$threads$MessageQueue$cleanup(frost$threads$MessageQueue* self);

