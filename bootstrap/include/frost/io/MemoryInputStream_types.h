#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/io/ByteOrder_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$io$MemoryInputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$ByteOrder byteOrder;
    frost$core$UInt8* data;
    frost$core$Int64 length;
    frost$core$String* string;
    frost$core$Int64 index;
} frost$io$MemoryInputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[20]; } frost$io$MemoryInputStream$class_type;
extern frost$io$MemoryInputStream$class_type frost$io$MemoryInputStream$class;

