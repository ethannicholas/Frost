#pragma once
#include "frost_c.h"
#include "Class_types.h"
typedef struct frost$core$Class frost$core$Class;

void frost$core$Class$init(void* rawSelf);
void frost$core$Class$cleanup(void* rawSelf);

