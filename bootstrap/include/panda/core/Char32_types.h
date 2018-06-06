#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Char32_types.h"

typedef struct panda$core$Char32 {
    int32_t value;
} panda$core$Char32;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[20]; } panda$core$Char32$class_type;
extern panda$core$Char32$class_type panda$core$Char32$class;
typedef struct panda$core$Char32$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Char32 value;
} panda$core$Char32$wrapper;
typedef struct panda$core$Char32$nullable {
    panda$core$Char32 value;
    bool nonnull;
} panda$core$Char32$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Char32$wrapperclass_type;
extern panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass;

