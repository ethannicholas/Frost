#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/io/ByteOrder_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$io$FileInputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$ByteOrder byteOrder;
    frost$core$Int64 handle;
    frost$core$Bit closeOnCleanup;
} frost$io$FileInputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[22]; } frost$io$FileInputStream$class_type;
extern frost$io$FileInputStream$class_type frost$io$FileInputStream$class;

