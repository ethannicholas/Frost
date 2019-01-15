#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/Symbol/Kind_types.h"

typedef struct org$frostlanguage$frostc$Symbol$Kind {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlanguage$frostc$Symbol$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$Symbol$Kind$class_type;
extern org$frostlanguage$frostc$Symbol$Kind$class_type org$frostlanguage$frostc$Symbol$Kind$class;
typedef struct org$frostlanguage$frostc$Symbol$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$Symbol$Kind value;
} org$frostlanguage$frostc$Symbol$Kind$wrapper;
typedef struct org$frostlanguage$frostc$Symbol$Kind$nullable {
    org$frostlanguage$frostc$Symbol$Kind value;
    bool nonnull;
} org$frostlanguage$frostc$Symbol$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Symbol$Kind$wrapperclass_type;
extern org$frostlanguage$frostc$Symbol$Kind$wrapperclass_type org$frostlanguage$frostc$Symbol$Kind$wrapperclass;

