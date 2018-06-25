#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/io/OutputStream/ByteOrder_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$MutableString panda$core$MutableString;

typedef struct panda$io$MemoryOutputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$OutputStream$ByteOrder byteOrder;
    panda$core$String* lineEnding;
    panda$core$MutableString* data;
} panda$io$MemoryOutputStream;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[25]; } panda$io$MemoryOutputStream$class_type;
extern panda$io$MemoryOutputStream$class_type panda$io$MemoryOutputStream$class;

