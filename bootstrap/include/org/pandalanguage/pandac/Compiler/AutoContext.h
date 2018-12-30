#pragma once
#include "panda_c.h"
#include "AutoContext_types.h"
typedef struct org$pandalanguage$pandac$Compiler$AutoContext org$pandalanguage$pandac$Compiler$AutoContext;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$Compiler$EnclosingContext org$pandalanguage$pandac$Compiler$EnclosingContext;

void org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext(org$pandalanguage$pandac$Compiler$AutoContext* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Compiler$EnclosingContext* p_context);
void org$pandalanguage$pandac$Compiler$AutoContext$cleanup(org$pandalanguage$pandac$Compiler$AutoContext* self);

