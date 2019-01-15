#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$frostdoc$Markdown org$frostlanguage$frostc$frostdoc$Markdown;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$frostdoc$Markdown* markdown;
} org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$class_type;
extern org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$class_type org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$class;

