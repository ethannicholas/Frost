#pragma once
#include "panda_c.h"
#include "MemoryInputStream_types.h"
typedef struct panda$io$MemoryInputStream panda$io$MemoryInputStream;
typedef struct panda$core$String panda$core$String;
#include "panda/core/UInt8_types.h"

void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source);
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self);
void panda$io$MemoryInputStream$cleanup(panda$io$MemoryInputStream* self);

