#pragma once
#include "panda_c.h"
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
#include "panda/core/String/Index_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/parser/Token_types.h"

typedef struct org$pandalanguage$pandac$parser$Token {
    org$pandalanguage$pandac$parser$Token$Kind kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    org$pandalanguage$pandac$Position position;
} org$pandalanguage$pandac$parser$Token;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$parser$Token$class_type;
extern org$pandalanguage$pandac$parser$Token$class_type org$pandalanguage$pandac$parser$Token$class;
typedef struct org$pandalanguage$pandac$parser$Token$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$parser$Token value;
} org$pandalanguage$pandac$parser$Token$wrapper;
typedef struct org$pandalanguage$pandac$parser$Token$nullable {
    org$pandalanguage$pandac$parser$Token value;
    bool nonnull;
} org$pandalanguage$pandac$parser$Token$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$parser$Token$wrapperclass_type;
extern org$pandalanguage$pandac$parser$Token$wrapperclass_type org$pandalanguage$pandac$parser$Token$wrapperclass;

