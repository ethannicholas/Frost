#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"

typedef struct frost$core$Int32 {
    int32_t value;
} frost$core$Int32;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[115]; } frost$core$Int32$class_type;
extern frost$core$Int32$class_type frost$core$Int32$class;
typedef struct frost$core$Int32$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Int32 value;
} frost$core$Int32$wrapper;
typedef struct frost$core$Int32$nullable {
    frost$core$Int32 value;
    bool nonnull;
} frost$core$Int32$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Int32$wrapperclass_type;
extern frost$core$Int32$wrapperclass_type frost$core$Int32$wrapperclass;

