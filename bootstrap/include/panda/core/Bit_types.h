#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Bit_types.h"

typedef struct panda$core$Bit {
    bool value;
} panda$core$Bit;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[11]; } panda$core$Bit$class_type;
extern panda$core$Bit$class_type panda$core$Bit$class;
typedef struct panda$core$Bit$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Bit value;
} panda$core$Bit$wrapper;
typedef struct panda$core$Bit$nullable {
    panda$core$Bit value;
    bool nonnull;
} panda$core$Bit$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Bit$wrapperclass_type;
extern panda$core$Bit$wrapperclass_type panda$core$Bit$wrapperclass;

