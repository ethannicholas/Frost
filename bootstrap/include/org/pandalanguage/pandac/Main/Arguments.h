#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Main$Arguments {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ListView* args;
    panda$core$Int64 index;
} org$pandalanguage$pandac$Main$Arguments;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$Main$Arguments$class_type;
extern org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Main$Arguments org$pandalanguage$pandac$Main$Arguments;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args);
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self);
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self);
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label);
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self);

#endif
