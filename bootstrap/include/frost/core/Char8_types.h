#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Char8_types.h"

typedef struct frost$core$Char8 {
    uint8_t value;
} frost$core$Char8;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[23]; } frost$core$Char8$class_type;
extern frost$core$Char8$class_type frost$core$Char8$class;
typedef struct frost$core$Char8$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Char8 value;
} frost$core$Char8$wrapper;
typedef struct frost$core$Char8$nullable {
    frost$core$Char8 value;
    bool nonnull;
} frost$core$Char8$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Char8$wrapperclass_type;
extern frost$core$Char8$wrapperclass_type frost$core$Char8$wrapperclass;

