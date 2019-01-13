#pragma once
#include "panda_c.h"
#include "Return_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$statements$Return org$pandalanguage$pandac$statements$Return;

void org$pandalanguage$pandac$statements$Return$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_value);
void org$pandalanguage$pandac$statements$Return$init(org$pandalanguage$pandac$statements$Return* self);
void org$pandalanguage$pandac$statements$Return$cleanup(org$pandalanguage$pandac$statements$Return* self);

