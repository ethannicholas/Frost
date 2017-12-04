#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Symbol {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$String* name;
} org$pandalanguage$pandac$Symbol;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Symbol$class_type;
extern org$pandalanguage$pandac$Symbol$class_type org$pandalanguage$pandac$Symbol$class;
typedef struct org$pandalanguage$pandac$Symbol$Kind {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Symbol$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Symbol$Kind$class_type;
extern org$pandalanguage$pandac$Symbol$Kind$class_type org$pandalanguage$pandac$Symbol$Kind$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Symbol org$pandalanguage$pandac$Symbol;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
typedef struct org$pandalanguage$pandac$Symbol$Kind org$pandalanguage$pandac$Symbol$Kind;

void org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Symbol* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_name);
panda$core$Bit org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$Symbol* self);
void org$pandalanguage$pandac$Symbol$Kind$init(org$pandalanguage$pandac$Symbol$Kind* self);

#endif
