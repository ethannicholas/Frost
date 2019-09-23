#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/MethodPosition_types.h"

typedef struct org$frostlang$frostc$MethodPosition {
    frost$core$Int file;
    frost$core$Int methodIndex;
    frost$core$Int line;
    frost$core$Int column;
} org$frostlang$frostc$MethodPosition;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } org$frostlang$frostc$MethodPosition$class_type;
extern org$frostlang$frostc$MethodPosition$class_type org$frostlang$frostc$MethodPosition$class;
typedef struct org$frostlang$frostc$MethodPosition$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$MethodPosition value;
} org$frostlang$frostc$MethodPosition$wrapper;
typedef struct org$frostlang$frostc$MethodPosition$nullable {
    org$frostlang$frostc$MethodPosition value;
    bool nonnull;
} org$frostlang$frostc$MethodPosition$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$MethodPosition$wrapperclass_type;
extern org$frostlang$frostc$MethodPosition$wrapperclass_type org$frostlang$frostc$MethodPosition$wrapperclass;

