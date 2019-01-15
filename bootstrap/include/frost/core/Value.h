#pragma once
#include "frost_c.h"
#include "Value_types.h"
typedef struct frost$core$Value frost$core$Value;

void frost$core$Value$cleanup(frost$core$Value* self);
void frost$core$Value$init(frost$core$Value* self);

