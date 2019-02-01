#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/UInt64_types.h"

typedef struct frost$core$UInt64 {
    uint64_t value;
} frost$core$UInt64;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[74]; } frost$core$UInt64$class_type;
extern frost$core$UInt64$class_type frost$core$UInt64$class;
typedef struct frost$core$UInt64$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$UInt64 value;
} frost$core$UInt64$wrapper;
typedef struct frost$core$UInt64$nullable {
    frost$core$UInt64 value;
    bool nonnull;
} frost$core$UInt64$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$UInt64$wrapperclass_type;
extern frost$core$UInt64$wrapperclass_type frost$core$UInt64$wrapperclass;

