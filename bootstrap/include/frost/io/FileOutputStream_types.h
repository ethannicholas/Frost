#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/io/ByteOrder_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

typedef struct frost$io$FileOutputStream {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$ByteOrder byteOrder;
    frost$core$String* lineEnding;
    frost$core$Int handle;
    frost$core$Bit closeOnCleanup;
} frost$io$FileOutputStream;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[24]; } frost$io$FileOutputStream$class_type;
extern frost$io$FileOutputStream$class_type frost$io$FileOutputStream$class;

