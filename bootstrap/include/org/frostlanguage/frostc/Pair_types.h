#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Pair {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Object* first;
    frost$core$Object* second;
} org$frostlanguage$frostc$Pair;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Pair$class_type;
extern org$frostlanguage$frostc$Pair$class_type org$frostlanguage$frostc$Pair$class;

