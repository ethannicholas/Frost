#pragma once
#include "frost_c.h"
#include "Timer_types.h"
typedef struct frost$time$Timer frost$time$Timer;
#include "frost/core/Real64_types.h"

void frost$time$Timer$init(frost$time$Timer* self);
void frost$time$Timer$cleanup(frost$time$Timer* self);
void frost$time$Timer$setup(frost$time$Timer* self);
void frost$time$Timer$destroy(frost$time$Timer* self);
frost$core$Real64 frost$time$Timer$elapsed$R$frost$core$Real64(frost$time$Timer* self);
double frost$time$Timer$now$R$builtin_float64(frost$time$Timer* self);
void frost$time$Timer$reset(frost$time$Timer* self);

