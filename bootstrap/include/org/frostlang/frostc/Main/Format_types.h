#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/Main/Format_types.h"

typedef struct org$frostlang$frostc$Main$Format {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$Main$Format;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$Main$Format$class_type;
extern org$frostlang$frostc$Main$Format$class_type org$frostlang$frostc$Main$Format$class;
typedef struct org$frostlang$frostc$Main$Format$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$Main$Format value;
} org$frostlang$frostc$Main$Format$wrapper;
typedef struct org$frostlang$frostc$Main$Format$nullable {
    org$frostlang$frostc$Main$Format value;
    bool nonnull;
} org$frostlang$frostc$Main$Format$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Main$Format$wrapperclass_type;
extern org$frostlang$frostc$Main$Format$wrapperclass_type org$frostlang$frostc$Main$Format$wrapperclass;

