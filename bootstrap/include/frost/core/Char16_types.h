#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Char16_types.h"

typedef struct frost$core$Char16 {
    uint16_t value;
} frost$core$Char16;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[21]; } frost$core$Char16$class_type;
extern frost$core$Char16$class_type frost$core$Char16$class;
typedef struct frost$core$Char16$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Char16 value;
} frost$core$Char16$wrapper;
typedef struct frost$core$Char16$nullable {
    frost$core$Char16 value;
    bool nonnull;
} frost$core$Char16$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Char16$wrapperclass_type;
extern frost$core$Char16$wrapperclass_type frost$core$Char16$wrapperclass;

