#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int_types.h"

typedef struct frost$core$Int {
    int64_t value;
} frost$core$Int;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[150]; } frost$core$Int$class_type;
extern frost$core$Int$class_type frost$core$Int$class;
typedef struct frost$core$Int$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Int value;
} frost$core$Int$wrapper;
typedef struct frost$core$Int$nullable {
    frost$core$Int value;
    bool nonnull;
} frost$core$Int$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Int$wrapperclass_type;
extern frost$core$Int$wrapperclass_type frost$core$Int$wrapperclass;

