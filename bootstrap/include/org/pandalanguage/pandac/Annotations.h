#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"

typedef struct org$pandalanguage$pandac$Annotations {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 flags;
} org$pandalanguage$pandac$Annotations;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[12]; } org$pandalanguage$pandac$Annotations$class_type;
extern org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class;
typedef struct org$pandalanguage$pandac$Annotations$Flag {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Annotations$Flag;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Annotations$Flag$class_type;
extern org$pandalanguage$pandac$Annotations$Flag$class_type org$pandalanguage$pandac$Annotations$Flag$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct org$pandalanguage$pandac$Annotations$Flag org$pandalanguage$pandac$Annotations$Flag;

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self);
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags);
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
void org$pandalanguage$pandac$Annotations$Flag$init(org$pandalanguage$pandac$Annotations$Flag* self);

#endif
