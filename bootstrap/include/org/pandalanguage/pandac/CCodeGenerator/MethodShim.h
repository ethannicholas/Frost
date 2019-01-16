#pragma once
#include "panda_c.h"
#include "MethodShim_types.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator$MethodShim org$pandalanguage$pandac$CCodeGenerator$MethodShim;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$MethodShim* self, panda$core$String* p_name, panda$core$String* p_type);
void org$pandalanguage$pandac$CCodeGenerator$MethodShim$cleanup(org$pandalanguage$pandac$CCodeGenerator$MethodShim* self);

