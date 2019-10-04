#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$CBackend org$frostlang$frostc$CBackend;
typedef struct org$frostlang$frostc$CBackend$EnclosingContext org$frostlang$frostc$CBackend$EnclosingContext;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$CBackend$AutoContext {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$CBackend* backend;
    org$frostlang$frostc$CBackend$EnclosingContext* context;
} org$frostlang$frostc$CBackend$AutoContext;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$CBackend$AutoContext$class_type;
extern org$frostlang$frostc$CBackend$AutoContext$class_type org$frostlang$frostc$CBackend$AutoContext$class;

