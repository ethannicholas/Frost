#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/Code/Block/ID_types.h"

typedef struct org$frostlang$frostc$Code$Block$ID {
    frost$core$Int value;
} org$frostlang$frostc$Code$Block$ID;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$Code$Block$ID$class_type;
extern org$frostlang$frostc$Code$Block$ID$class_type org$frostlang$frostc$Code$Block$ID$class;
typedef struct org$frostlang$frostc$Code$Block$ID$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$Code$Block$ID value;
} org$frostlang$frostc$Code$Block$ID$wrapper;
typedef struct org$frostlang$frostc$Code$Block$ID$nullable {
    org$frostlang$frostc$Code$Block$ID value;
    bool nonnull;
} org$frostlang$frostc$Code$Block$ID$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Code$Block$ID$wrapperclass_type;
extern org$frostlang$frostc$Code$Block$ID$wrapperclass_type org$frostlang$frostc$Code$Block$ID$wrapperclass;
