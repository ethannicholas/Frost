#pragma once
#include "panda_c.h"
#include "ClassConstant_types.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator$ClassConstant org$pandalanguage$pandac$CCodeGenerator$ClassConstant;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$ClassConstant* self, panda$core$String* p_name, panda$core$String* p_type);
void org$pandalanguage$pandac$CCodeGenerator$ClassConstant$cleanup(org$pandalanguage$pandac$CCodeGenerator$ClassConstant* self);

