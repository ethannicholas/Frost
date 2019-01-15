#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlanguage$frostc$Compiler$Resolution {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlanguage$frostc$Compiler$Resolution;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$Compiler$Resolution$class_type;
extern org$frostlanguage$frostc$Compiler$Resolution$class_type org$frostlanguage$frostc$Compiler$Resolution$class;
typedef struct org$frostlanguage$frostc$Compiler$Resolution$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$Compiler$Resolution value;
} org$frostlanguage$frostc$Compiler$Resolution$wrapper;
typedef struct org$frostlanguage$frostc$Compiler$Resolution$nullable {
    org$frostlanguage$frostc$Compiler$Resolution value;
    bool nonnull;
} org$frostlanguage$frostc$Compiler$Resolution$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Compiler$Resolution$wrapperclass_type;
extern org$frostlanguage$frostc$Compiler$Resolution$wrapperclass_type org$frostlanguage$frostc$Compiler$Resolution$wrapperclass;

