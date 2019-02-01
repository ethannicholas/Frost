#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$math$Random frost$math$Random;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$frostdoc$Protector {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$HashMap* encodeMap;
    frost$collections$HashMap* decodeMap;
    frost$math$Random* random;
} org$frostlang$frostc$frostdoc$Protector;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$frostdoc$Protector$class_type;
extern org$frostlang$frostc$frostdoc$Protector$class_type org$frostlang$frostc$frostdoc$Protector$class;

