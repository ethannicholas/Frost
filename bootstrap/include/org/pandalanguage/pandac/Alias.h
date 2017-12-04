#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Alias {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$String* name;
    panda$core$String* fullName;
} org$pandalanguage$pandac$Alias;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Alias$class_type;
extern org$pandalanguage$pandac$Alias$class_type org$pandalanguage$pandac$Alias$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Alias org$pandalanguage$pandac$Alias;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64(org$pandalanguage$pandac$Alias* self, panda$core$String* p_alias, panda$core$String* p_fullName, panda$core$Int64 p_offset);
panda$core$String* org$pandalanguage$pandac$Alias$convert$R$panda$core$String(org$pandalanguage$pandac$Alias* self);

#endif
