#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$Compiler$EnclosingContext org$frostlanguage$frostc$Compiler$EnclosingContext;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Compiler$AutoContext {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Compiler* compiler;
    org$frostlanguage$frostc$Compiler$EnclosingContext* context;
} org$frostlanguage$frostc$Compiler$AutoContext;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Compiler$AutoContext$class_type;
extern org$frostlanguage$frostc$Compiler$AutoContext$class_type org$frostlanguage$frostc$Compiler$AutoContext$class;

