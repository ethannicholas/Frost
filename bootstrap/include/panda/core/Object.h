#pragma once
#include "panda_c.h"
#include "Object_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Object panda$core$Object;

panda$core$String* panda$core$Object$convert$R$panda$core$String(panda$core$Object* self);
void panda$core$Object$cleanup(panda$core$Object* self);
void panda$core$Object$init(panda$core$Object* self);

