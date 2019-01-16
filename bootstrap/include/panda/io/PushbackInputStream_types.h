#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/io/ByteOrder_types.h"
typedef struct panda$io$InputStream panda$io$InputStream;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$PushbackInputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$ByteOrder byteOrder;
    panda$io$InputStream* source;
    panda$collections$Array* pushbackBuffer;
} panda$io$PushbackInputStream;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[26]; } panda$io$PushbackInputStream$class_type;
extern panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class;

