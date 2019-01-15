#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Compiler$_Closure2 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Type* type;
    org$frostlanguage$frostc$Compiler* $self;
} org$frostlanguage$frostc$Compiler$_Closure2;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlanguage$frostc$Compiler$_Closure2$class_type;
extern org$frostlanguage$frostc$Compiler$_Closure2$class_type org$frostlanguage$frostc$Compiler$_Closure2$class;

