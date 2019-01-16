#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/MutableString/Index_types.h"

typedef struct panda$core$MutableString$Index {
    panda$core$Int64 value;
} panda$core$MutableString$Index;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[6]; } panda$core$MutableString$Index$class_type;
extern panda$core$MutableString$Index$class_type panda$core$MutableString$Index$class;
typedef struct panda$core$MutableString$Index$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$MutableString$Index value;
} panda$core$MutableString$Index$wrapper;
typedef struct panda$core$MutableString$Index$nullable {
    panda$core$MutableString$Index value;
    bool nonnull;
} panda$core$MutableString$Index$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$MutableString$Index$wrapperclass_type;
extern panda$core$MutableString$Index$wrapperclass_type panda$core$MutableString$Index$wrapperclass;

