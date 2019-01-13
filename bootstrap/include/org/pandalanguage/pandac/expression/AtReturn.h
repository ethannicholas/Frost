#pragma once
#include "panda_c.h"
#include "AtReturn_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
typedef struct org$pandalanguage$pandac$expression$AtReturn org$pandalanguage$pandac$expression$AtReturn;

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$AtReturn$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
void org$pandalanguage$pandac$expression$AtReturn$init(org$pandalanguage$pandac$expression$AtReturn* self);
void org$pandalanguage$pandac$expression$AtReturn$cleanup(org$pandalanguage$pandac$expression$AtReturn* self);

