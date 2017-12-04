#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"

typedef struct org$pandalanguage$pandac$Position {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* file;
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$pandac$Position;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Position$class_type;
extern org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Position org$pandalanguage$pandac$Position;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Position* self, panda$core$String* p_file, panda$core$Int64 p_line, panda$core$Int64 p_column);
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position* self);

#endif
