#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$Thread {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$threads$Thread;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$threads$Thread$class_type;
extern panda$threads$Thread$class_type panda$threads$Thread$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$threads$Thread panda$threads$Thread;
typedef struct panda$core$Method panda$core$Method;
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

void panda$threads$Thread$init(panda$threads$Thread* self);
void panda$threads$Thread$run$$LP$RP$EQ$AM$GT$ST$LP$RP$builtin_bit(panda$threads$Thread* self, panda$core$Method* p_m, bool p_preventsExit);
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$R$panda$threads$Thread(panda$core$Method* p_run);
panda$threads$Thread* panda$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$panda$core$Bit$R$panda$threads$Thread(panda$core$Method* p_run, panda$core$Bit p_preventsExit);
panda$core$Int64 panda$threads$Thread$preferredThreadCount$R$panda$core$Int64();
void panda$threads$Thread$sleep$panda$core$Int64(panda$core$Int64 p_millis);
void panda$threads$Thread$cleanup(panda$threads$Thread* self);

#endif
