#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/io/ByteOrder_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$io$OutputStream frost$io$OutputStream;

typedef struct frost$io$IndentedOutputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$ByteOrder byteOrder;
    frost$core$String* lineEnding;
    frost$core$Int64 level;
    frost$core$Int64 indentSize;
    frost$core$String* indent;
    frost$core$Bit atLineStart;
    frost$io$OutputStream* out;
} frost$io$IndentedOutputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[25]; } frost$io$IndentedOutputStream$class_type;
extern frost$io$IndentedOutputStream$class_type frost$io$IndentedOutputStream$class;

