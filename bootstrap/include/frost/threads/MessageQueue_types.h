#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$threads$Lock frost$threads$Lock;
typedef struct frost$threads$Notifier frost$threads$Notifier;
#include "frost/core/Int_types.h"
typedef struct frost$threads$MessageQueue$Message frost$threads$MessageQueue$Message;
typedef struct frost$core$String frost$core$String;

typedef struct frost$threads$MessageQueue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$threads$Lock* lock;
    frost$threads$Notifier* notifier;
    frost$core$Int count;
    frost$threads$MessageQueue$Message* head;
    frost$threads$MessageQueue$Message* tail;
} frost$threads$MessageQueue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } frost$threads$MessageQueue$class_type;
extern frost$threads$MessageQueue$class_type frost$threads$MessageQueue$class;

