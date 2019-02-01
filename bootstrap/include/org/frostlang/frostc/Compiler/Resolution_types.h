#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlang$frostc$Compiler$Resolution {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$Compiler$Resolution;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$Compiler$Resolution$class_type;
extern org$frostlang$frostc$Compiler$Resolution$class_type org$frostlang$frostc$Compiler$Resolution$class;
typedef struct org$frostlang$frostc$Compiler$Resolution$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$Compiler$Resolution value;
} org$frostlang$frostc$Compiler$Resolution$wrapper;
typedef struct org$frostlang$frostc$Compiler$Resolution$nullable {
    org$frostlang$frostc$Compiler$Resolution value;
    bool nonnull;
} org$frostlang$frostc$Compiler$Resolution$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Compiler$Resolution$wrapperclass_type;
extern org$frostlang$frostc$Compiler$Resolution$wrapperclass_type org$frostlang$frostc$Compiler$Resolution$wrapperclass;

