#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/json/Token/Kind_types.h"

typedef struct org$frostlanguage$json$Token$Kind {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlanguage$json$Token$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$json$Token$Kind$class_type;
extern org$frostlanguage$json$Token$Kind$class_type org$frostlanguage$json$Token$Kind$class;
typedef struct org$frostlanguage$json$Token$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$json$Token$Kind value;
} org$frostlanguage$json$Token$Kind$wrapper;
typedef struct org$frostlanguage$json$Token$Kind$nullable {
    org$frostlanguage$json$Token$Kind value;
    bool nonnull;
} org$frostlanguage$json$Token$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$json$Token$Kind$wrapperclass_type;
extern org$frostlanguage$json$Token$Kind$wrapperclass_type org$frostlanguage$json$Token$Kind$wrapperclass;

