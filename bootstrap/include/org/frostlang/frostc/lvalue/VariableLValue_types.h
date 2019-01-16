#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$lvalue$VariableLValue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Compiler* compiler;
    org$frostlang$frostc$Position position;
    frost$core$Int64 slot;
} org$frostlang$frostc$lvalue$VariableLValue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$lvalue$VariableLValue$class_type;
extern org$frostlang$frostc$lvalue$VariableLValue$class_type org$frostlang$frostc$lvalue$VariableLValue$class;

