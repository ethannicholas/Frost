#pragma once
#include "panda_c.h"
#include "Error_types.h"
typedef struct panda$core$Error panda$core$Error;
typedef struct panda$core$String panda$core$String;

void panda$core$Error$init$panda$core$String(panda$core$Error* self, panda$core$String* p_message);
void panda$core$Error$cleanup(panda$core$Error* self);

