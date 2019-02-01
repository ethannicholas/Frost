#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$io$InputStream frost$io$InputStream;
typedef struct frost$core$String frost$core$String;

typedef struct frost$io$InputStream$LineIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$InputStream* input;
    frost$core$String* _next;
} frost$io$InputStream$LineIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } frost$io$InputStream$LineIterator$class_type;
extern frost$io$InputStream$LineIterator$class_type frost$io$InputStream$LineIterator$class;

