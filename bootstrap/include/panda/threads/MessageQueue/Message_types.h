#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$threads$MessageQueue$Message panda$threads$MessageQueue$Message;
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$MessageQueue$Message {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Immutable* payload;
    panda$threads$MessageQueue$Message* next;
} panda$threads$MessageQueue$Message;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$threads$MessageQueue$Message$class_type;
extern panda$threads$MessageQueue$Message$class_type panda$threads$MessageQueue$Message$class;

