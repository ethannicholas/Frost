#pragma once
#include "panda_c.h"
#include "Message_types.h"
typedef struct panda$threads$MessageQueue$Message panda$threads$MessageQueue$Message;
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$core$String panda$core$String;

void panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T(panda$threads$MessageQueue$Message* self, panda$core$Immutable* p_payload);
panda$core$String* panda$threads$MessageQueue$Message$convert$R$panda$core$String(panda$threads$MessageQueue$Message* self);
void panda$threads$MessageQueue$Message$cleanup(panda$threads$MessageQueue$Message* self);

