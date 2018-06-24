#pragma once
#include "panda_c.h"
#include "Message_types.h"
typedef struct panda$unsafe$UnsafeMessageQueue$Message panda$unsafe$UnsafeMessageQueue$Message;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

void panda$unsafe$UnsafeMessageQueue$Message$init$panda$unsafe$UnsafeMessageQueue$Message$T(panda$unsafe$UnsafeMessageQueue$Message* self, panda$core$Object* p_payload);
panda$core$String* panda$unsafe$UnsafeMessageQueue$Message$convert$R$panda$core$String(panda$unsafe$UnsafeMessageQueue$Message* self);
void panda$unsafe$UnsafeMessageQueue$Message$cleanup(panda$unsafe$UnsafeMessageQueue$Message* self);

