#pragma once
#include "panda_c.h"
#include "TypeContext_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "panda/core/Bit_types.h"

panda$core$String* org$pandalanguage$pandac$Compiler$TypeContext$description$R$panda$core$String(org$pandalanguage$pandac$Compiler$TypeContext* self);
panda$core$String* org$pandalanguage$pandac$Compiler$TypeContext$convert$R$panda$core$String(org$pandalanguage$pandac$Compiler$TypeContext* self);
void org$pandalanguage$pandac$Compiler$TypeContext$cleanup(org$pandalanguage$pandac$Compiler$TypeContext* self);
void org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$TypeContext* self, panda$core$Int64 p_rv);
void org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$TypeContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Type* p_f0);
panda$core$Bit org$pandalanguage$pandac$Compiler$TypeContext$$EQ$org$pandalanguage$pandac$Compiler$TypeContext$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$TypeContext* self, org$pandalanguage$pandac$Compiler$TypeContext* p_other);

