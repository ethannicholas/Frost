#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Position.h"

typedef struct org$pandalanguage$pandac$Position {
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$pandac$Position;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Position$class_type;
extern org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class;
typedef struct org$pandalanguage$pandac$Position$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$Position value;
} org$pandalanguage$pandac$Position$wrapper;
typedef struct org$pandalanguage$pandac$Position$nullable {
    org$pandalanguage$pandac$Position value;
    bool nonnull;
} org$pandalanguage$pandac$Position$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Position$wrapperclass_type;
extern org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass;

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Position$init(org$pandalanguage$pandac$Position* self);
void org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column);
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position self);
void org$pandalanguage$pandac$Position$cleanup(org$pandalanguage$pandac$Position self);

#endif
