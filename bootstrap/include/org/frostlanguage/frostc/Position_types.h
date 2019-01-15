#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/Position_types.h"

typedef struct org$frostlanguage$frostc$Position {
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlanguage$frostc$Position;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$Position$class_type;
extern org$frostlanguage$frostc$Position$class_type org$frostlanguage$frostc$Position$class;
typedef struct org$frostlanguage$frostc$Position$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$Position value;
} org$frostlanguage$frostc$Position$wrapper;
typedef struct org$frostlanguage$frostc$Position$nullable {
    org$frostlanguage$frostc$Position value;
    bool nonnull;
} org$frostlanguage$frostc$Position$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Position$wrapperclass_type;
extern org$frostlanguage$frostc$Position$wrapperclass_type org$frostlanguage$frostc$Position$wrapperclass;

