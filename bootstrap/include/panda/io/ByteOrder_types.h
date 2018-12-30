#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/io/ByteOrder_types.h"

typedef struct panda$io$ByteOrder {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} panda$io$ByteOrder;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$io$ByteOrder$class_type;
extern panda$io$ByteOrder$class_type panda$io$ByteOrder$class;
typedef struct panda$io$ByteOrder$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$io$ByteOrder value;
} panda$io$ByteOrder$wrapper;
typedef struct panda$io$ByteOrder$nullable {
    panda$io$ByteOrder value;
    bool nonnull;
} panda$io$ByteOrder$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$io$ByteOrder$wrapperclass_type;
extern panda$io$ByteOrder$wrapperclass_type panda$io$ByteOrder$wrapperclass;

