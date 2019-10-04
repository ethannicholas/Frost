#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Code$PrimitiveType$_Closure3 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$MutableMethod* $method2;
} org$frostlang$frostc$Code$PrimitiveType$_Closure3;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$Code$PrimitiveType$_Closure3$class_type;
extern org$frostlang$frostc$Code$PrimitiveType$_Closure3$class_type org$frostlang$frostc$Code$PrimitiveType$_Closure3$class;

