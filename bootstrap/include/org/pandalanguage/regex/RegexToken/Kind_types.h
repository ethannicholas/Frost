#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/regex/RegexToken/Kind_types.h"

typedef struct org$pandalanguage$regex$RegexToken$Kind {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$regex$RegexToken$Kind;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$regex$RegexToken$Kind$class_type;
extern org$pandalanguage$regex$RegexToken$Kind$class_type org$pandalanguage$regex$RegexToken$Kind$class;
typedef struct org$pandalanguage$regex$RegexToken$Kind$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$regex$RegexToken$Kind value;
} org$pandalanguage$regex$RegexToken$Kind$wrapper;
typedef struct org$pandalanguage$regex$RegexToken$Kind$nullable {
    org$pandalanguage$regex$RegexToken$Kind value;
    bool nonnull;
} org$pandalanguage$regex$RegexToken$Kind$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$regex$RegexToken$Kind$wrapperclass_type;
extern org$pandalanguage$regex$RegexToken$Kind$wrapperclass_type org$pandalanguage$regex$RegexToken$Kind$wrapperclass;

