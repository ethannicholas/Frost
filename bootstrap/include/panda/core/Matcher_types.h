#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int8_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"
#include "panda/core/String/Index_types.h"

typedef struct panda$core$Matcher {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int8* nativeHandle;
    panda$core$String* searchText;
    panda$core$Bit matched;
    panda$core$String$Index replacementIndex;
} panda$core$Matcher;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[14]; } panda$core$Matcher$class_type;
extern panda$core$Matcher$class_type panda$core$Matcher$class;

