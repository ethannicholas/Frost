#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/io/ByteOrder_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$MutableString frost$core$MutableString;

typedef struct frost$io$MemoryOutputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$io$ByteOrder byteOrder;
    frost$core$String* lineEnding;
    frost$core$MutableString* data;
} frost$io$MemoryOutputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[26]; } frost$io$MemoryOutputStream$class_type;
extern frost$io$MemoryOutputStream$class_type frost$io$MemoryOutputStream$class;

