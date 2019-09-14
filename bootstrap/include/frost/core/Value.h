#pragma once
#include "frost_c.h"
#include "Value_types.h"
typedef struct frost$core$Value frost$core$Value;

void frost$core$Value$cleanup(void* rawSelf);
void frost$core$Value$init(void* rawSelf);

