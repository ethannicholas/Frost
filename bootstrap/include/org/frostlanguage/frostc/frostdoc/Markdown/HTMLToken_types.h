#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 $rawValue;
    int8_t $data[8];
} org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$class_type;
extern org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$class_type org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$class;

