#pragma once
#include "panda_c.h"
#include "LineNumberInputStream_types.h"
typedef struct panda$io$LineNumberInputStream panda$io$LineNumberInputStream;
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/UInt8_types.h"

void panda$io$LineNumberInputStream$init$panda$io$InputStream(panda$io$LineNumberInputStream* self, panda$io$InputStream* p_source);
panda$core$UInt8$nullable panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q(panda$io$LineNumberInputStream* self);
void panda$io$LineNumberInputStream$cleanup(panda$io$LineNumberInputStream* self);

