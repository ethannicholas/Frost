#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$CCodeGenerator$ClassConstant {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$String* name;
    frost$core$String* type;
} org$frostlanguage$frostc$CCodeGenerator$ClassConstant;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$CCodeGenerator$ClassConstant$class_type;
extern org$frostlanguage$frostc$CCodeGenerator$ClassConstant$class_type org$frostlanguage$frostc$CCodeGenerator$ClassConstant$class;

