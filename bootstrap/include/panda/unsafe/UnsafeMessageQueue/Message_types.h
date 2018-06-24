#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$unsafe$UnsafeMessageQueue$Message panda$unsafe$UnsafeMessageQueue$Message;
typedef struct panda$core$String panda$core$String;

typedef struct panda$unsafe$UnsafeMessageQueue$Message {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Object* payload;
    panda$unsafe$UnsafeMessageQueue$Message* next;
} panda$unsafe$UnsafeMessageQueue$Message;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$unsafe$UnsafeMessageQueue$Message$class_type;
extern panda$unsafe$UnsafeMessageQueue$Message$class_type panda$unsafe$UnsafeMessageQueue$Message$class;

