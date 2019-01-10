#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Char8_types.h"

typedef struct panda$core$Char8 {
    uint8_t value;
} panda$core$Char8;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[22]; } panda$core$Char8$class_type;
extern panda$core$Char8$class_type panda$core$Char8$class;
typedef struct panda$core$Char8$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Char8 value;
} panda$core$Char8$wrapper;
typedef struct panda$core$Char8$nullable {
    panda$core$Char8 value;
    bool nonnull;
} panda$core$Char8$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Char8$wrapperclass_type;
extern panda$core$Char8$wrapperclass_type panda$core$Char8$wrapperclass;

