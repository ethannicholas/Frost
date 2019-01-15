#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/IR/Block/ID_types.h"

typedef struct org$frostlanguage$frostc$IR$Block$ID {
    frost$core$Int64 value;
} org$frostlanguage$frostc$IR$Block$ID;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$IR$Block$ID$class_type;
extern org$frostlanguage$frostc$IR$Block$ID$class_type org$frostlanguage$frostc$IR$Block$ID$class;
typedef struct org$frostlanguage$frostc$IR$Block$ID$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$IR$Block$ID value;
} org$frostlanguage$frostc$IR$Block$ID$wrapper;
typedef struct org$frostlanguage$frostc$IR$Block$ID$nullable {
    org$frostlanguage$frostc$IR$Block$ID value;
    bool nonnull;
} org$frostlanguage$frostc$IR$Block$ID$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$IR$Block$ID$wrapperclass_type;
extern org$frostlanguage$frostc$IR$Block$ID$wrapperclass_type org$frostlanguage$frostc$IR$Block$ID$wrapperclass;

