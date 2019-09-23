#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$MemoryLayout {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Weak* compiler;
    frost$collections$IdentityMap* sizes;
    frost$collections$IdentityMap* alignments;
    frost$collections$IdentityMap* choiceDataSizes;
} org$frostlang$frostc$MemoryLayout;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } org$frostlang$frostc$MemoryLayout$class_type;
extern org$frostlang$frostc$MemoryLayout$class_type org$frostlang$frostc$MemoryLayout$class;

