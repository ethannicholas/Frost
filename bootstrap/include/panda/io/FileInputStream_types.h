#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/io/InputStream/ByteOrder_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$FileInputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$InputStream$ByteOrder byteOrder;
    panda$core$Int64 handle;
    panda$core$Bit closeOnCleanup;
} panda$io$FileInputStream;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[21]; } panda$io$FileInputStream$class_type;
extern panda$io$FileInputStream$class_type panda$io$FileInputStream$class;

