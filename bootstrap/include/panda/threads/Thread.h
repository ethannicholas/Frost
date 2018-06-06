#pragma once
#include "panda_c.h"
#include "Thread_types.h"
typedef struct panda$threads$Thread panda$threads$Thread;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
typedef struct panda$core$Method panda$core$Method;
#include "panda/core/Bit_types.h"
#include "panda/core/Int64_types.h"

void panda$threads$Thread$init(panda$threads$Thread* self);
void panda$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(panda$threads$Thread* self, panda$core$MutableMethod* p_m, bool p_preventsExit);
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$R$panda$threads$Thread(panda$core$Method* p_run);
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$Method* p_run, panda$core$Bit p_preventsExit);
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$R$panda$threads$Thread(panda$core$MutableMethod* p_run);
panda$threads$Thread* panda$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$MutableMethod* p_run, panda$core$Bit p_preventsExit);
panda$core$Int64 panda$threads$Thread$preferredThreadCount$R$panda$core$Int64();
void panda$threads$Thread$sleep$panda$core$Int64(panda$core$Int64 p_millis);
void panda$threads$Thread$cleanup(panda$threads$Thread* self);

