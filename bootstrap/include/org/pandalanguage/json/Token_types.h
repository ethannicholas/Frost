#pragma once
#include "panda_c.h"
#include "org/pandalanguage/json/Token/Kind_types.h"
#include "panda/core/String/Index_types.h"
#include "org/pandalanguage/json/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/json/Token_types.h"

typedef struct org$pandalanguage$json$Token {
    org$pandalanguage$json$Token$Kind kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    org$pandalanguage$json$Position position;
} org$pandalanguage$json$Token;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$json$Token$class_type;
extern org$pandalanguage$json$Token$class_type org$pandalanguage$json$Token$class;
typedef struct org$pandalanguage$json$Token$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$json$Token value;
} org$pandalanguage$json$Token$wrapper;
typedef struct org$pandalanguage$json$Token$nullable {
    org$pandalanguage$json$Token value;
    bool nonnull;
} org$pandalanguage$json$Token$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$json$Token$wrapperclass_type;
extern org$pandalanguage$json$Token$wrapperclass_type org$pandalanguage$json$Token$wrapperclass;

