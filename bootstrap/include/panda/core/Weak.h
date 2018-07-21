#pragma once
#include "panda_c.h"
#include "Weak_types.h"
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

void panda$core$Weak$init$panda$core$Weak$T$Q(panda$core$Weak* self, panda$core$Object* p_value);
panda$core$Object* panda$core$Weak$get$R$panda$core$Weak$T$Q(panda$core$Weak* self);
panda$core$String* panda$core$Weak$convert$R$panda$core$String(panda$core$Weak* self);
void panda$core$Weak$cleanup(panda$core$Weak* self);

