#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/unsafe/Pointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$MutableString {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$unsafe$Pointer data;
    frost$core$Int _length;
    frost$core$Int maxLength;
    frost$core$String* dummy;
} frost$core$MutableString;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[40]; } frost$core$MutableString$class_type;
extern frost$core$MutableString$class_type frost$core$MutableString$class;

