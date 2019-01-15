#pragma once
#include "frost_c.h"
#include "Lock_types.h"
typedef struct frost$threads$Lock frost$threads$Lock;

void frost$threads$Lock$init(frost$threads$Lock* self);
void frost$threads$Lock$lock(frost$threads$Lock* self);
void frost$threads$Lock$unlock(frost$threads$Lock* self);
void frost$threads$Lock$cleanup(frost$threads$Lock* self);
void frost$threads$Lock$create(frost$threads$Lock* self);
void frost$threads$Lock$destroy(frost$threads$Lock* self);

