#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/io/OutputStream/ByteOrder_types.h"

typedef struct panda$io$OutputStream$ByteOrder {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} panda$io$OutputStream$ByteOrder;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$io$OutputStream$ByteOrder$class_type;
extern panda$io$OutputStream$ByteOrder$class_type panda$io$OutputStream$ByteOrder$class;
typedef struct panda$io$OutputStream$ByteOrder$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$io$OutputStream$ByteOrder value;
} panda$io$OutputStream$ByteOrder$wrapper;
typedef struct panda$io$OutputStream$ByteOrder$nullable {
    panda$io$OutputStream$ByteOrder value;
    bool nonnull;
} panda$io$OutputStream$ByteOrder$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$io$OutputStream$ByteOrder$wrapperclass_type;
extern panda$io$OutputStream$ByteOrder$wrapperclass_type panda$io$OutputStream$ByteOrder$wrapperclass;

