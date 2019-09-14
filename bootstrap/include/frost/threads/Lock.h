#pragma once
#include "frost_c.h"
#include "Lock_types.h"
typedef struct frost$threads$Lock frost$threads$Lock;

void frost$threads$Lock$init(void* rawSelf);
void frost$threads$Lock$lock(void* rawSelf);
void frost$threads$Lock$unlock(void* rawSelf);
void frost$threads$Lock$cleanup(void* rawSelf);
void frost$threads$Lock$create(void* rawSelf);
void frost$threads$Lock$destroy(void* rawSelf);

