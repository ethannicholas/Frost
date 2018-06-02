#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$String$UTF16Iterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 index;
    panda$core$String* str;
} panda$core$String$UTF16Iterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$UTF16Iterator$class_type;
extern panda$core$String$UTF16Iterator$class_type panda$core$String$UTF16Iterator$class;

