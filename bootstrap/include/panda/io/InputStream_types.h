#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$InputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$io$InputStream;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[14]; } panda$io$InputStream$class_type;
extern panda$io$InputStream$class_type panda$io$InputStream$class;

