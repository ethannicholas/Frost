#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$Weak {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Object* value;
    frost$core$Bit _valid;
} frost$core$Weak;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$core$Weak$class_type;
extern frost$core$Weak$class_type frost$core$Weak$class;

