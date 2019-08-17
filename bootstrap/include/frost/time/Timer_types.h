#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Real64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$time$Timer {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int64 native;
    frost$core$Real64 basis;
} frost$time$Timer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } frost$time$Timer$class_type;
extern frost$time$Timer$class_type frost$time$Timer$class;
