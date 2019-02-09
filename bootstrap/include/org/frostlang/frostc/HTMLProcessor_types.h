#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$HTMLProcessor {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Compiler* compiler;
} org$frostlang$frostc$HTMLProcessor;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$HTMLProcessor$class_type;
extern org$frostlang$frostc$HTMLProcessor$class_type org$frostlang$frostc$HTMLProcessor$class;

