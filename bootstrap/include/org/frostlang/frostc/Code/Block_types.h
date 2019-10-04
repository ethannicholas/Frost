#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "org/frostlang/frostc/Code/Block/ID_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Code$Block {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Code$Block$ID id;
    frost$collections$Array* statements;
} org$frostlang$frostc$Code$Block;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Code$Block$class_type;
extern org$frostlang$frostc$Code$Block$class_type org$frostlang$frostc$Code$Block$class;
