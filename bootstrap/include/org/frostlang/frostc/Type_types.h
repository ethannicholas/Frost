#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "org/frostlang/frostc/Symbol/Kind_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
#include "org/frostlang/frostc/Type/Kind_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "frost/core/Int64_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$MethodRef org$frostlang$frostc$MethodRef;

typedef struct org$frostlang$frostc$Type {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Symbol$Kind kind;
    org$frostlang$frostc$Position position;
    frost$core$String* name;
    frost$core$Bit resolved;
    org$frostlang$frostc$Type$Kind typeKind;
    org$frostlang$frostc$FixedArray* _subtypes;
    frost$core$Int64 priority;
    frost$core$Weak* genericClassParameter;
    frost$core$Weak* genericMethodParameter;
    org$frostlang$frostc$MethodRef* methodRef;
} org$frostlang$frostc$Type;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[30]; } org$frostlang$frostc$Type$class_type;
extern org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class;

