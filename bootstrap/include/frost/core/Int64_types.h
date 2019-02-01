#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int64_types.h"

typedef struct frost$core$Int64 {
    int64_t value;
} frost$core$Int64;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[75]; } frost$core$Int64$class_type;
extern frost$core$Int64$class_type frost$core$Int64$class;
typedef struct frost$core$Int64$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Int64 value;
} frost$core$Int64$wrapper;
typedef struct frost$core$Int64$nullable {
    frost$core$Int64 value;
    bool nonnull;
} frost$core$Int64$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Int64$wrapperclass_type;
extern frost$core$Int64$wrapperclass_type frost$core$Int64$wrapperclass;

