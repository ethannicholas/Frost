#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/parser/Token/Kind_types.h"

typedef struct org$frostlang$frostc$parser$Token$Kind {
    frost$core$Int $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$parser$Token$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$parser$Token$Kind$class_type;
extern org$frostlang$frostc$parser$Token$Kind$class_type org$frostlang$frostc$parser$Token$Kind$class;
typedef struct org$frostlang$frostc$parser$Token$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$parser$Token$Kind value;
} org$frostlang$frostc$parser$Token$Kind$wrapper;
typedef struct org$frostlang$frostc$parser$Token$Kind$nullable {
    org$frostlang$frostc$parser$Token$Kind value;
    bool nonnull;
} org$frostlang$frostc$parser$Token$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$parser$Token$Kind$wrapperclass_type;
extern org$frostlang$frostc$parser$Token$Kind$wrapperclass_type org$frostlang$frostc$parser$Token$Kind$wrapperclass;

