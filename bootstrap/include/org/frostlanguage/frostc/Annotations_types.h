#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Annotations {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 flags;
    frost$collections$Array* expressions;
} org$frostlanguage$frostc$Annotations;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[17]; } org$frostlanguage$frostc$Annotations$class_type;
extern org$frostlanguage$frostc$Annotations$class_type org$frostlanguage$frostc$Annotations$class;

