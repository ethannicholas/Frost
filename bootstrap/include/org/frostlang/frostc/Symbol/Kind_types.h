#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/Symbol/Kind_types.h"

typedef struct org$frostlang$frostc$Symbol$Kind {
    frost$core$Int $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$Symbol$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$Symbol$Kind$class_type;
extern org$frostlang$frostc$Symbol$Kind$class_type org$frostlang$frostc$Symbol$Kind$class;
typedef struct org$frostlang$frostc$Symbol$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$Symbol$Kind value;
} org$frostlang$frostc$Symbol$Kind$wrapper;
typedef struct org$frostlang$frostc$Symbol$Kind$nullable {
    org$frostlang$frostc$Symbol$Kind value;
    bool nonnull;
} org$frostlang$frostc$Symbol$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Symbol$Kind$wrapperclass_type;
extern org$frostlang$frostc$Symbol$Kind$wrapperclass_type org$frostlang$frostc$Symbol$Kind$wrapperclass;

