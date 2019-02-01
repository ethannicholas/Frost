#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/String/Index_types.h"

typedef struct frost$core$String$Index {
    frost$core$Int64 value;
} frost$core$String$Index;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } frost$core$String$Index$class_type;
extern frost$core$String$Index$class_type frost$core$String$Index$class;
typedef struct frost$core$String$Index$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$String$Index value;
} frost$core$String$Index$wrapper;
typedef struct frost$core$String$Index$nullable {
    frost$core$String$Index value;
    bool nonnull;
} frost$core$String$Index$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$String$Index$wrapperclass_type;
extern frost$core$String$Index$wrapperclass_type frost$core$String$Index$wrapperclass;

