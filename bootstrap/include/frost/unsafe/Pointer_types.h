#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/unsafe/Pointer_types.h"

typedef struct frost$unsafe$Pointer {
    int64_t value;
} frost$unsafe$Pointer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[14]; } frost$unsafe$Pointer$class_type;
extern frost$unsafe$Pointer$class_type frost$unsafe$Pointer$class;
typedef struct frost$unsafe$Pointer$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$unsafe$Pointer value;
} frost$unsafe$Pointer$wrapper;
typedef struct frost$unsafe$Pointer$nullable {
    frost$unsafe$Pointer value;
    bool nonnull;
} frost$unsafe$Pointer$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$unsafe$Pointer$wrapperclass_type;
extern frost$unsafe$Pointer$wrapperclass_type frost$unsafe$Pointer$wrapperclass;

