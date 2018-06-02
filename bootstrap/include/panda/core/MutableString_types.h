#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Char8_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$MutableString {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Char8* data;
    panda$core$Int64 length;
    panda$core$Int64 maxLength;
    panda$core$String* dummy;
} panda$core$MutableString;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[10]; } panda$core$MutableString$class_type;
extern panda$core$MutableString$class_type panda$core$MutableString$class;

