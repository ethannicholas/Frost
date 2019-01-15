#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Main$Arguments {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$ListView* args;
    frost$core$Int64 index;
} org$frostlanguage$frostc$Main$Arguments;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$Main$Arguments$class_type;
extern org$frostlanguage$frostc$Main$Arguments$class_type org$frostlanguage$frostc$Main$Arguments$class;

