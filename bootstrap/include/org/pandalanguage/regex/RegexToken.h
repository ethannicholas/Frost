#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "org/pandalanguage/regex/RegexToken/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/regex/RegexToken.h"

typedef struct org$pandalanguage$regex$RegexToken {
    org$pandalanguage$regex$RegexToken$Kind kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    org$pandalanguage$pandac$Position position;
} org$pandalanguage$regex$RegexToken;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
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

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/regex/RegexToken.h"
#include "org/pandalanguage/regex/RegexToken/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"

void org$pandalanguage$regex$RegexToken$init$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(org$pandalanguage$regex$RegexToken* self, org$pandalanguage$regex$RegexToken$Kind p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$pandac$Position p_position);
void org$pandalanguage$regex$RegexToken$cleanup(org$pandalanguage$regex$RegexToken self);

#endif
