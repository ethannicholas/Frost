#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Immutable frost$core$Immutable;
typedef struct frost$threads$MessageQueue$Message frost$threads$MessageQueue$Message;
typedef struct frost$core$String frost$core$String;

typedef struct frost$threads$MessageQueue$Message {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Immutable* payload;
    frost$threads$MessageQueue$Message* next;
} frost$threads$MessageQueue$Message;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$threads$MessageQueue$Message$class_type;
extern frost$threads$MessageQueue$Message$class_type frost$threads$MessageQueue$Message$class;

