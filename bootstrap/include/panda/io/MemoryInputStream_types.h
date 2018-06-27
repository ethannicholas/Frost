#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/io/ByteOrder_types.h"
#include "panda/core/UInt8_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$MemoryInputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$ByteOrder byteOrder;
    panda$core$UInt8* data;
    panda$core$Int64 length;
    panda$core$String* string;
    panda$core$Int64 index;
} panda$io$MemoryInputStream;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[18]; } panda$io$MemoryInputStream$class_type;
extern panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class;

