#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/io/ByteOrder_types.h"
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$io$LineNumberInputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$io$ByteOrder byteOrder;
    frost$io$InputStream* source;
    frost$core$Int64 line;
    frost$core$Int64 column;
    frost$core$Int64 tabSize;
} frost$io$LineNumberInputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[20]; } frost$io$LineNumberInputStream$class_type;
extern frost$io$LineNumberInputStream$class_type frost$io$LineNumberInputStream$class;

