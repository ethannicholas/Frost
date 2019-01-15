#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/io/ByteOrder_types.h"

typedef struct frost$io$ByteOrder {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} frost$io$ByteOrder;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$io$ByteOrder$class_type;
extern frost$io$ByteOrder$class_type frost$io$ByteOrder$class;
typedef struct frost$io$ByteOrder$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    frost$io$ByteOrder value;
} frost$io$ByteOrder$wrapper;
typedef struct frost$io$ByteOrder$nullable {
    frost$io$ByteOrder value;
    bool nonnull;
} frost$io$ByteOrder$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$io$ByteOrder$wrapperclass_type;
extern frost$io$ByteOrder$wrapperclass_type frost$io$ByteOrder$wrapperclass;

