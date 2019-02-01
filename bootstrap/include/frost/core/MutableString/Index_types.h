#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/MutableString/Index_types.h"

typedef struct frost$core$MutableString$Index {
    frost$core$Int64 value;
} frost$core$MutableString$Index;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } frost$core$MutableString$Index$class_type;
extern frost$core$MutableString$Index$class_type frost$core$MutableString$Index$class;
typedef struct frost$core$MutableString$Index$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$MutableString$Index value;
} frost$core$MutableString$Index$wrapper;
typedef struct frost$core$MutableString$Index$nullable {
    frost$core$MutableString$Index value;
    bool nonnull;
} frost$core$MutableString$Index$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$MutableString$Index$wrapperclass_type;
extern frost$core$MutableString$Index$wrapperclass_type frost$core$MutableString$Index$wrapperclass;

