#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Char16_types.h"

typedef struct panda$core$Char16 {
    uint16_t value;
} panda$core$Char16;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[21]; } panda$core$Char16$class_type;
extern panda$core$Char16$class_type panda$core$Char16$class;
typedef struct panda$core$Char16$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Char16 value;
} panda$core$Char16$wrapper;
typedef struct panda$core$Char16$nullable {
    panda$core$Char16 value;
    bool nonnull;
} panda$core$Char16$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Char16$wrapperclass_type;
extern panda$core$Char16$wrapperclass_type panda$core$Char16$wrapperclass;

