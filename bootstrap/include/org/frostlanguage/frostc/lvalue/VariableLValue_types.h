#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$lvalue$VariableLValue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Compiler* compiler;
    org$frostlanguage$frostc$Position position;
    frost$core$Int64 slot;
} org$frostlanguage$frostc$lvalue$VariableLValue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$lvalue$VariableLValue$class_type;
extern org$frostlanguage$frostc$lvalue$VariableLValue$class_type org$frostlanguage$frostc$lvalue$VariableLValue$class;

