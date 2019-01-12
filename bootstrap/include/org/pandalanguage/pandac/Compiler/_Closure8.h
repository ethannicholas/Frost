#pragma once
#include "panda_c.h"
#include "_Closure8_types.h"
typedef struct org$pandalanguage$pandac$Compiler$_Closure8 org$pandalanguage$pandac$Compiler$_Closure8;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;

void org$pandalanguage$pandac$Compiler$_Closure8$init$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$_Closure8* self, org$pandalanguage$pandac$Type* p_left);
void org$pandalanguage$pandac$Compiler$_Closure8$cleanup(org$pandalanguage$pandac$Compiler$_Closure8* self);
panda$core$Bit org$pandalanguage$pandac$Compiler$_Closure8$$anonymous7$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$_Closure8* self, org$pandalanguage$pandac$MethodDecl* p_m);

