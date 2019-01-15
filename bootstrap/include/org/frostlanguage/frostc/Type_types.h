#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlanguage/frostc/Symbol/Kind_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
#include "org/frostlanguage/frostc/Type/Kind_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
#include "frost/core/Int64_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlanguage$frostc$MethodRef org$frostlanguage$frostc$MethodRef;

typedef struct org$frostlanguage$frostc$Type {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Symbol$Kind kind;
    org$frostlanguage$frostc$Position position;
    frost$core$String* name;
    frost$core$Bit resolved;
    org$frostlanguage$frostc$Type$Kind typeKind;
    org$frostlanguage$frostc$FixedArray* subtypes;
    frost$core$Int64 priority;
    frost$core$Weak* genericClassParameter;
    frost$core$Weak* genericMethodParameter;
    org$frostlanguage$frostc$MethodRef* methodRef;
} org$frostlanguage$frostc$Type;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[27]; } org$frostlanguage$frostc$Type$class_type;
extern org$frostlanguage$frostc$Type$class_type org$frostlanguage$frostc$Type$class;

