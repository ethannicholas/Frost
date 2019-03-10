#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/UInt_types.h"

typedef struct frost$core$UInt {
    uint64_t value;
} frost$core$UInt;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[149]; } frost$core$UInt$class_type;
extern frost$core$UInt$class_type frost$core$UInt$class;
typedef struct frost$core$UInt$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$UInt value;
} frost$core$UInt$wrapper;
typedef struct frost$core$UInt$nullable {
    frost$core$UInt value;
    bool nonnull;
} frost$core$UInt$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$UInt$wrapperclass_type;
extern frost$core$UInt$wrapperclass_type frost$core$UInt$wrapperclass;

