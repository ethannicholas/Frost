#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/io/ByteOrder_types.h"
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$io$LineNumberInputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$ByteOrder byteOrder;
    frost$io$InputStream* source;
    frost$core$Int line;
    frost$core$Int column;
    frost$core$Int tabSize;
} frost$io$LineNumberInputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[20]; } frost$io$LineNumberInputStream$class_type;
extern frost$io$LineNumberInputStream$class_type frost$io$LineNumberInputStream$class;

