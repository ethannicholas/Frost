#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/json/Position_types.h"

typedef struct org$frostlanguage$json$Position {
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlanguage$json$Position;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$json$Position$class_type;
extern org$frostlanguage$json$Position$class_type org$frostlanguage$json$Position$class;
typedef struct org$frostlanguage$json$Position$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$json$Position value;
} org$frostlanguage$json$Position$wrapper;
typedef struct org$frostlanguage$json$Position$nullable {
    org$frostlanguage$json$Position value;
    bool nonnull;
} org$frostlanguage$json$Position$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$json$Position$wrapperclass_type;
extern org$frostlanguage$json$Position$wrapperclass_type org$frostlanguage$json$Position$wrapperclass;

