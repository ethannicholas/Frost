#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Real32_types.h"

typedef struct frost$core$Real32 {
    float value;
} frost$core$Real32;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[73]; } frost$core$Real32$class_type;
extern frost$core$Real32$class_type frost$core$Real32$class;
typedef struct frost$core$Real32$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Real32 value;
} frost$core$Real32$wrapper;
typedef struct frost$core$Real32$nullable {
    frost$core$Real32 value;
    bool nonnull;
} frost$core$Real32$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Real32$wrapperclass_type;
extern frost$core$Real32$wrapperclass_type frost$core$Real32$wrapperclass;

