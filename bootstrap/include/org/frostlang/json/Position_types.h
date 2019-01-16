#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/json/Position_types.h"

typedef struct org$frostlang$json$Position {
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlang$json$Position;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$json$Position$class_type;
extern org$frostlang$json$Position$class_type org$frostlang$json$Position$class;
typedef struct org$frostlang$json$Position$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlang$json$Position value;
} org$frostlang$json$Position$wrapper;
typedef struct org$frostlang$json$Position$nullable {
    org$frostlang$json$Position value;
    bool nonnull;
} org$frostlang$json$Position$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$json$Position$wrapperclass_type;
extern org$frostlang$json$Position$wrapperclass_type org$frostlang$json$Position$wrapperclass;

