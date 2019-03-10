#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int8_types.h"

typedef struct frost$core$Int8 {
    int8_t value;
} frost$core$Int8;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[192]; } frost$core$Int8$class_type;
extern frost$core$Int8$class_type frost$core$Int8$class;
typedef struct frost$core$Int8$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Int8 value;
} frost$core$Int8$wrapper;
typedef struct frost$core$Int8$nullable {
    frost$core$Int8 value;
    bool nonnull;
} frost$core$Int8$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Int8$wrapperclass_type;
extern frost$core$Int8$wrapperclass_type frost$core$Int8$wrapperclass;

