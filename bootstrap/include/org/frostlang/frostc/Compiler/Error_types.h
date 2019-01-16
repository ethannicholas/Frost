#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$io$File frost$io$File;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$Error {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$io$File* file;
    org$frostlang$frostc$Position position;
    frost$core$String* message;
} org$frostlang$frostc$Compiler$Error;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Compiler$Error$class_type;
extern org$frostlang$frostc$Compiler$Error$class_type org$frostlang$frostc$Compiler$Error$class;

