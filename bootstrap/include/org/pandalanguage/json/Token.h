#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/json/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/json/Token.h"

typedef struct org$pandalanguage$json$Token {
    org$pandalanguage$json$Token$Kind kind;
    panda$core$String$Index start;
    panda$core$String$Index end;
    org$pandalanguage$json$Position position;
} org$pandalanguage$json$Token;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
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

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/json/Token.h"
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/json/Position.h"

void org$pandalanguage$json$Token$init$org$pandalanguage$json$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$json$Position(org$pandalanguage$json$Token* self, org$pandalanguage$json$Token$Kind p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$json$Position p_position);
void org$pandalanguage$json$Token$cleanup(org$pandalanguage$json$Token self);

#endif
