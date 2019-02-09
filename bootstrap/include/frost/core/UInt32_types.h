#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/UInt32_types.h"

typedef struct frost$core$UInt32 {
    uint32_t value;
} frost$core$UInt32;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[115]; } frost$core$UInt32$class_type;
extern frost$core$UInt32$class_type frost$core$UInt32$class;
typedef struct frost$core$UInt32$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$UInt32 value;
} frost$core$UInt32$wrapper;
typedef struct frost$core$UInt32$nullable {
    frost$core$UInt32 value;
    bool nonnull;
} frost$core$UInt32$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$UInt32$wrapperclass_type;
extern frost$core$UInt32$wrapperclass_type frost$core$UInt32$wrapperclass;

