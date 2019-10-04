#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
#include "frost/core/Int_types.h"

typedef struct org$frostlang$frostc$Code$Global {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$String* name;
    org$frostlang$frostc$Code$PrimitiveType* type;
    frost$core$String* comment;
    frost$core$Int flags;
} org$frostlang$frostc$Code$Global;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } org$frostlang$frostc$Code$Global$class_type;
extern org$frostlang$frostc$Code$Global$class_type org$frostlang$frostc$Code$Global$class;

