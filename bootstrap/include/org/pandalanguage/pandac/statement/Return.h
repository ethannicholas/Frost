#pragma once
#include "panda_c.h"
#include "Return_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$statement$Return org$pandalanguage$pandac$statement$Return;

void org$pandalanguage$pandac$statement$Return$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_value);
void org$pandalanguage$pandac$statement$Return$init(org$pandalanguage$pandac$statement$Return* self);
void org$pandalanguage$pandac$statement$Return$cleanup(org$pandalanguage$pandac$statement$Return* self);

