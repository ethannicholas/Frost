#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/CCodeGenerator/OpClass_types.h"

typedef struct org$frostlanguage$frostc$CCodeGenerator$OpClass {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlanguage$frostc$CCodeGenerator$OpClass;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$CCodeGenerator$OpClass$class_type;
extern org$frostlanguage$frostc$CCodeGenerator$OpClass$class_type org$frostlanguage$frostc$CCodeGenerator$OpClass$class;
typedef struct org$frostlanguage$frostc$CCodeGenerator$OpClass$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$CCodeGenerator$OpClass value;
} org$frostlanguage$frostc$CCodeGenerator$OpClass$wrapper;
typedef struct org$frostlanguage$frostc$CCodeGenerator$OpClass$nullable {
    org$frostlanguage$frostc$CCodeGenerator$OpClass value;
    bool nonnull;
} org$frostlanguage$frostc$CCodeGenerator$OpClass$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$CCodeGenerator$OpClass$wrapperclass_type;
extern org$frostlanguage$frostc$CCodeGenerator$OpClass$wrapperclass_type org$frostlanguage$frostc$CCodeGenerator$OpClass$wrapperclass;

