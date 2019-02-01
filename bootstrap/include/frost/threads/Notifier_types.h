#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$threads$Lock frost$threads$Lock;
typedef struct frost$core$String frost$core$String;

typedef struct frost$threads$Notifier {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int64 nativeNotifier;
    frost$threads$Lock* lock;
} frost$threads$Notifier;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } frost$threads$Notifier$class_type;
extern frost$threads$Notifier$class_type frost$threads$Notifier$class;

