#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/parser/Token.h"

typedef struct org$pandalanguage$pandac$parser$Token {
    panda$core$Int64 kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    org$pandalanguage$pandac$Position position;
} org$pandalanguage$pandac$parser$Token;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$parser$Token$class_type;
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
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$parser$Token$wrapperclass_type;
extern org$pandalanguage$pandac$parser$Token$wrapperclass_type org$pandalanguage$pandac$parser$Token$wrapperclass;
org$pandalanguage$pandac$parser$Token$wrapper* wrap_org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Token self);

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"

void org$pandalanguage$pandac$parser$Token$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Token* self, panda$core$Int64 p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$pandac$Position p_position);

#endif
