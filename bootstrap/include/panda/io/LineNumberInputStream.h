#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/Int64.h"

typedef struct panda$io$LineNumberInputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$InputStream* source;
    panda$core$Int64 line;
    panda$core$Int64 column;
} panda$io$LineNumberInputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[13]; } panda$io$LineNumberInputStream$class_type;
extern panda$io$LineNumberInputStream$class_type panda$io$LineNumberInputStream$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$LineNumberInputStream panda$io$LineNumberInputStream;
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/UInt8.h"

void panda$io$LineNumberInputStream$init$panda$io$InputStream(panda$io$LineNumberInputStream* self, panda$io$InputStream* p_source);
panda$core$UInt8$nullable panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q(panda$io$LineNumberInputStream* self);

#endif
