#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Bit_types.h"

typedef struct frost$core$Bit {
    bool value;
} frost$core$Bit;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } frost$core$Bit$class_type;
extern frost$core$Bit$class_type frost$core$Bit$class;
typedef struct frost$core$Bit$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Bit value;
} frost$core$Bit$wrapper;
typedef struct frost$core$Bit$nullable {
    frost$core$Bit value;
    bool nonnull;
} frost$core$Bit$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Bit$wrapperclass_type;
extern frost$core$Bit$wrapperclass_type frost$core$Bit$wrapperclass;

