#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$CCodeGenerator org$frostlang$frostc$CCodeGenerator;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$CCodeGenerator$_Closure2 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$CCodeGenerator* $self;
    org$frostlang$frostc$IR$Statement$ID id;
} org$frostlang$frostc$CCodeGenerator$_Closure2;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$CCodeGenerator$_Closure2$class_type;
extern org$frostlang$frostc$CCodeGenerator$_Closure2$class_type org$frostlang$frostc$CCodeGenerator$_Closure2$class;

