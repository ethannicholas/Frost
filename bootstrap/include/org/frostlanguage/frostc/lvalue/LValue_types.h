#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$lvalue$LValue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
} org$frostlanguage$frostc$lvalue$LValue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$lvalue$LValue$class_type;
extern org$frostlanguage$frostc$lvalue$LValue$class_type org$frostlanguage$frostc$lvalue$LValue$class;

