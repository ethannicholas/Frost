#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$threads$Lock frost$threads$Lock;
typedef struct frost$threads$Notifier frost$threads$Notifier;
#include "frost/core/Int64_types.h"
typedef struct frost$unsafe$UnsafeMessageQueue$Message frost$unsafe$UnsafeMessageQueue$Message;
typedef struct frost$core$String frost$core$String;

typedef struct frost$unsafe$UnsafeMessageQueue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$threads$Lock* lock;
    frost$threads$Notifier* notifier;
    frost$core$Int64 count;
    frost$unsafe$UnsafeMessageQueue$Message* head;
    frost$unsafe$UnsafeMessageQueue$Message* tail;
} frost$unsafe$UnsafeMessageQueue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } frost$unsafe$UnsafeMessageQueue$class_type;
extern frost$unsafe$UnsafeMessageQueue$class_type frost$unsafe$UnsafeMessageQueue$class;

