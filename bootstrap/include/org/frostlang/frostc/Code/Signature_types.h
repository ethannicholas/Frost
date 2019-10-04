#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "frost/core/Bit_types.h"

typedef struct org$frostlang$frostc$Code$Signature {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Code$PrimitiveType* returnType;
    frost$core$String* name;
    org$frostlang$frostc$FixedArray* parameters;
    frost$core$Bit isExternal;
} org$frostlang$frostc$Code$Signature;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Code$Signature$class_type;
extern org$frostlang$frostc$Code$Signature$class_type org$frostlang$frostc$Code$Signature$class;

