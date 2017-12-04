#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64.h"

typedef struct panda$io$MemoryInputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ListView* data;
    panda$core$Int64 index;
} panda$io$MemoryInputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[13]; } panda$io$MemoryInputStream$class_type;
extern panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$MemoryInputStream panda$io$MemoryInputStream;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
typedef struct panda$core$String panda$core$String;
#include "panda/core/UInt8.h"

void panda$io$MemoryInputStream$init$panda$collections$ImmutableArray$LTpanda$core$UInt8$GT(panda$io$MemoryInputStream* self, panda$collections$ImmutableArray* p_source);
void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source);
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self);

#endif
