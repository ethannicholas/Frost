#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int16_types.h"

typedef struct frost$core$Int16 {
    int16_t value;
} frost$core$Int16;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[142]; } frost$core$Int16$class_type;
extern frost$core$Int16$class_type frost$core$Int16$class;
typedef struct frost$core$Int16$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Int16 value;
} frost$core$Int16$wrapper;
typedef struct frost$core$Int16$nullable {
    frost$core$Int16 value;
    bool nonnull;
} frost$core$Int16$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Int16$wrapperclass_type;
extern frost$core$Int16$wrapperclass_type frost$core$Int16$wrapperclass;

