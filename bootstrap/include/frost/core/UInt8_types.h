#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/UInt8_types.h"

typedef struct frost$core$UInt8 {
    uint8_t value;
} frost$core$UInt8;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[179]; } frost$core$UInt8$class_type;
extern frost$core$UInt8$class_type frost$core$UInt8$class;
typedef struct frost$core$UInt8$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    frost$core$UInt8 value;
} frost$core$UInt8$wrapper;
typedef struct frost$core$UInt8$nullable {
    frost$core$UInt8 value;
    bool nonnull;
} frost$core$UInt8$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$UInt8$wrapperclass_type;
extern frost$core$UInt8$wrapperclass_type frost$core$UInt8$wrapperclass;

