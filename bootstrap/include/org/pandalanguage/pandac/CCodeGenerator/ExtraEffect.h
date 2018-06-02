#pragma once
#include "panda_c.h"
#include "ExtraEffect_types.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator$ExtraEffect org$pandalanguage$pandac$CCodeGenerator$ExtraEffect;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$cleanup(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self);
void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0);
void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, panda$core$String* p_f0);

