#pragma once
#include "frost_c.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Real64_types.h"

typedef struct frost$core$Real64 {
    double value;
} frost$core$Real64;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[68]; } frost$core$Real64$class_type;
extern frost$core$Real64$class_type frost$core$Real64$class;
typedef struct frost$core$Real64$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    frost$core$Real64 value;
} frost$core$Real64$wrapper;
typedef struct frost$core$Real64$nullable {
    frost$core$Real64 value;
    bool nonnull;
} frost$core$Real64$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Real64$wrapperclass_type;
extern frost$core$Real64$wrapperclass_type frost$core$Real64$wrapperclass;

