#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/json/Token/Kind_types.h"

typedef struct org$pandalanguage$json$Token$Kind {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$json$Token$Kind;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$json$Token$Kind$class_type;
extern org$pandalanguage$json$Token$Kind$class_type org$pandalanguage$json$Token$Kind$class;
typedef struct org$pandalanguage$json$Token$Kind$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$json$Token$Kind value;
} org$pandalanguage$json$Token$Kind$wrapper;
typedef struct org$pandalanguage$json$Token$Kind$nullable {
    org$pandalanguage$json$Token$Kind value;
    bool nonnull;
} org$pandalanguage$json$Token$Kind$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$json$Token$Kind$wrapperclass_type;
extern org$pandalanguage$json$Token$Kind$wrapperclass_type org$pandalanguage$json$Token$Kind$wrapperclass;

