#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/Position_types.h"

typedef struct org$frostlang$frostc$Position {
    frost$core$Int64 line;
    frost$core$Int64 column;
} org$frostlang$frostc$Position;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } org$frostlang$frostc$Position$class_type;
extern org$frostlang$frostc$Position$class_type org$frostlang$frostc$Position$class;
typedef struct org$frostlang$frostc$Position$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$Position value;
} org$frostlang$frostc$Position$wrapper;
typedef struct org$frostlang$frostc$Position$nullable {
    org$frostlang$frostc$Position value;
    bool nonnull;
} org$frostlang$frostc$Position$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Position$wrapperclass_type;
extern org$frostlang$frostc$Position$wrapperclass_type org$frostlang$frostc$Position$wrapperclass;

