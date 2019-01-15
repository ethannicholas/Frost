#pragma once
#include "frost_c.h"
#include "Process_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$System$Process frost$core$System$Process;

void frost$core$System$Process$waitFor$R$frost$core$Int64(frost$core$Int64* result, frost$core$System$Process* self);
void frost$core$System$Process$init(frost$core$System$Process* self);
void frost$core$System$Process$cleanup(frost$core$System$Process* self);

