#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/io/ByteOrder_types.h"
typedef struct frost$io$InputStream frost$io$InputStream;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$String frost$core$String;

typedef struct frost$io$PushbackInputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$ByteOrder byteOrder;
    frost$io$InputStream* source;
    frost$collections$Array* pushbackBuffer;
} frost$io$PushbackInputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[27]; } frost$io$PushbackInputStream$class_type;
extern frost$io$PushbackInputStream$class_type frost$io$PushbackInputStream$class;

