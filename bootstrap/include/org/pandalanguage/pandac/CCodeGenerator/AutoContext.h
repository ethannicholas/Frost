#pragma once
#include "panda_c.h"
#include "AutoContext_types.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator$AutoContext org$pandalanguage$pandac$CCodeGenerator$AutoContext;
typedef struct org$pandalanguage$pandac$CCodeGenerator org$pandalanguage$pandac$CCodeGenerator;
typedef struct org$pandalanguage$pandac$CCodeGenerator$EnclosingContext org$pandalanguage$pandac$CCodeGenerator$EnclosingContext;

void org$pandalanguage$pandac$CCodeGenerator$AutoContext$init$org$pandalanguage$pandac$CCodeGenerator$org$pandalanguage$pandac$CCodeGenerator$EnclosingContext(org$pandalanguage$pandac$CCodeGenerator$AutoContext* self, org$pandalanguage$pandac$CCodeGenerator* p_cg, org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* p_context);
void org$pandalanguage$pandac$CCodeGenerator$AutoContext$cleanup(org$pandalanguage$pandac$CCodeGenerator$AutoContext* self);

