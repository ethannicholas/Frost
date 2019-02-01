#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Analyzer$DataFlowValue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Type* type;
    frost$collections$ListView* nonNullImplications;
} org$frostlang$frostc$Analyzer$DataFlowValue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$Analyzer$DataFlowValue$class_type;
extern org$frostlang$frostc$Analyzer$DataFlowValue$class_type org$frostlang$frostc$Analyzer$DataFlowValue$class;

