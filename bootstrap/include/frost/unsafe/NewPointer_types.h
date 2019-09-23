#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/unsafe/NewPointer_types.h"

typedef struct frost$unsafe$NewPointer {
    int64_t value;
} frost$unsafe$NewPointer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } frost$unsafe$NewPointer$class_type;
extern frost$unsafe$NewPointer$class_type frost$unsafe$NewPointer$class;
typedef struct frost$unsafe$NewPointer$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$unsafe$NewPointer value;
} frost$unsafe$NewPointer$wrapper;
typedef struct frost$unsafe$NewPointer$nullable {
    frost$unsafe$NewPointer value;
    bool nonnull;
} frost$unsafe$NewPointer$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$unsafe$NewPointer$wrapperclass_type;
extern frost$unsafe$NewPointer$wrapperclass_type frost$unsafe$NewPointer$wrapperclass;

