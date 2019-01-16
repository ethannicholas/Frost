#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$io$InputStream panda$io$InputStream;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$System$Process {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 pid;
    panda$io$OutputStream* input;
    panda$io$InputStream* output;
    panda$io$InputStream* error;
} panda$core$System$Process;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$core$System$Process$class_type;
extern panda$core$System$Process$class_type panda$core$System$Process$class;

