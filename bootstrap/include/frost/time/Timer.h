#pragma once
#include "frost_c.h"
#include "Timer_types.h"
typedef struct frost$time$Timer frost$time$Timer;
#include "frost/core/Real64_types.h"

void frost$time$Timer$init(void* rawSelf);
void frost$time$Timer$cleanup(void* rawSelf);
void frost$time$Timer$setup(void* rawSelf);
void frost$time$Timer$destroy(void* rawSelf);
frost$core$Real64 frost$time$Timer$elapsed$R$frost$core$Real64(void* rawSelf);
double frost$time$Timer$now$R$builtin_float64(void* rawSelf);
void frost$time$Timer$reset(void* rawSelf);

