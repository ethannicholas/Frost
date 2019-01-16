#pragma once
#include "panda_c.h"
#include "MutableMethod_types.h"
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
#include "panda/core/Int8_types.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

void panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q(panda$core$MutableMethod* self, panda$core$Int8* p_pointer, panda$core$Object* p_target);
panda$core$String* panda$core$MutableMethod$convert$R$panda$core$String(panda$core$MutableMethod* self);
void panda$core$MutableMethod$cleanup(panda$core$MutableMethod* self);

