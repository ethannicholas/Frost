#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$MethodRef org$frostlang$frostc$MethodRef;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$expression$Call$_Closure2 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$MethodRef* m;
    frost$collections$HashMap* remaps;
} org$frostlang$frostc$expression$Call$_Closure2;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$expression$Call$_Closure2$class_type;
extern org$frostlang$frostc$expression$Call$_Closure2$class_type org$frostlang$frostc$expression$Call$_Closure2$class;

