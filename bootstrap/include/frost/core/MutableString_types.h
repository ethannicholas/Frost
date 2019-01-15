#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Char8_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$MutableString {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Char8* data;
    frost$core$Int64 _length;
    frost$core$Int64 maxLength;
    frost$core$String* dummy;
} frost$core$MutableString;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[40]; } frost$core$MutableString$class_type;
extern frost$core$MutableString$class_type frost$core$MutableString$class;

