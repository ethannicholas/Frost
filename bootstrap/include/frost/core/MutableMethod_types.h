#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$MutableMethod {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    int64_t pointer;
    frost$core$Object* target;
} frost$core$MutableMethod;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$MutableMethod$class_type;
extern frost$core$MutableMethod$class_type frost$core$MutableMethod$class;

