#pragma once
#include "panda_c.h"
#include "org/pandalanguage/regex/RegexToken/Kind_types.h"
#include "panda/core/String/Index_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/regex/RegexToken_types.h"

typedef struct org$pandalanguage$regex$RegexToken {
    org$pandalanguage$regex$RegexToken$Kind kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    org$pandalanguage$pandac$Position position;
} org$pandalanguage$regex$RegexToken;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$regex$RegexToken$class_type;
extern org$pandalanguage$regex$RegexToken$class_type org$pandalanguage$regex$RegexToken$class;
typedef struct org$pandalanguage$regex$RegexToken$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$regex$RegexToken value;
} org$pandalanguage$regex$RegexToken$wrapper;
typedef struct org$pandalanguage$regex$RegexToken$nullable {
    org$pandalanguage$regex$RegexToken value;
    bool nonnull;
} org$pandalanguage$regex$RegexToken$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$regex$RegexToken$wrapperclass_type;
extern org$pandalanguage$regex$RegexToken$wrapperclass_type org$pandalanguage$regex$RegexToken$wrapperclass;

