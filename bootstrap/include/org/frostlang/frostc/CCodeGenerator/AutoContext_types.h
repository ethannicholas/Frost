#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$CCodeGenerator org$frostlang$frostc$CCodeGenerator;
typedef struct org$frostlang$frostc$CCodeGenerator$EnclosingContext org$frostlang$frostc$CCodeGenerator$EnclosingContext;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$CCodeGenerator$AutoContext {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$CCodeGenerator* cg;
    org$frostlang$frostc$CCodeGenerator$EnclosingContext* context;
} org$frostlang$frostc$CCodeGenerator$AutoContext;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$CCodeGenerator$AutoContext$class_type;
extern org$frostlang$frostc$CCodeGenerator$AutoContext$class_type org$frostlang$frostc$CCodeGenerator$AutoContext$class;

