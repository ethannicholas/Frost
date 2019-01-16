#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$frostdoc$Markdown org$frostlang$frostc$frostdoc$Markdown;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$frostdoc$Markdown$CodeReplacer {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$frostdoc$Markdown* markdown;
} org$frostlang$frostc$frostdoc$Markdown$CodeReplacer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class_type;
extern org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class_type org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class;

