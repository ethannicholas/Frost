#pragma once
#include "panda_c.h"
#include "LValue_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$Compiler$LValue org$pandalanguage$pandac$Compiler$LValue;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$LValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$LValue* self);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$Compiler$LValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler$LValue* self);
void org$pandalanguage$pandac$Compiler$LValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$LValue* self, org$pandalanguage$pandac$IR$Value* p_value);

