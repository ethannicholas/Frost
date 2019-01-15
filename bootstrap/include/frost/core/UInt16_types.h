#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/UInt16_types.h"

typedef struct frost$core$UInt16 {
    uint16_t value;
} frost$core$UInt16;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[150]; } frost$core$UInt16$class_type;
extern frost$core$UInt16$class_type frost$core$UInt16$class;
typedef struct frost$core$UInt16$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    frost$core$UInt16 value;
} frost$core$UInt16$wrapper;
typedef struct frost$core$UInt16$nullable {
    frost$core$UInt16 value;
    bool nonnull;
} frost$core$UInt16$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$UInt16$wrapperclass_type;
extern frost$core$UInt16$wrapperclass_type frost$core$UInt16$wrapperclass;

