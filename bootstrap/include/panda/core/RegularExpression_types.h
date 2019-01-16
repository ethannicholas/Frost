#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int8_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$RegularExpression {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int8* nativeHandle;
} panda$core$RegularExpression;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$core$RegularExpression$class_type;
extern panda$core$RegularExpression$class_type panda$core$RegularExpression$class;

