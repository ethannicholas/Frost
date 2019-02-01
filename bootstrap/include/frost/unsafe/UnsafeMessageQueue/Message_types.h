#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$unsafe$UnsafeMessageQueue$Message frost$unsafe$UnsafeMessageQueue$Message;
typedef struct frost$core$String frost$core$String;

typedef struct frost$unsafe$UnsafeMessageQueue$Message {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Object* payload;
    frost$unsafe$UnsafeMessageQueue$Message* next;
} frost$unsafe$UnsafeMessageQueue$Message;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$unsafe$UnsafeMessageQueue$Message$class_type;
extern frost$unsafe$UnsafeMessageQueue$Message$class_type frost$unsafe$UnsafeMessageQueue$Message$class;

