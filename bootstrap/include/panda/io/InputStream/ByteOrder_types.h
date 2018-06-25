#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/io/InputStream/ByteOrder_types.h"

typedef struct panda$io$InputStream$ByteOrder {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} panda$io$InputStream$ByteOrder;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$io$InputStream$ByteOrder$class_type;
extern panda$io$InputStream$ByteOrder$class_type panda$io$InputStream$ByteOrder$class;
typedef struct panda$io$InputStream$ByteOrder$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$io$InputStream$ByteOrder value;
} panda$io$InputStream$ByteOrder$wrapper;
typedef struct panda$io$InputStream$ByteOrder$nullable {
    panda$io$InputStream$ByteOrder value;
    bool nonnull;
} panda$io$InputStream$ByteOrder$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$io$InputStream$ByteOrder$wrapperclass_type;
extern panda$io$InputStream$ByteOrder$wrapperclass_type panda$io$InputStream$ByteOrder$wrapperclass;

