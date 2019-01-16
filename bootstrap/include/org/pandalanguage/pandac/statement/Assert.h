#pragma once
#include "panda_c.h"
#include "Assert_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$statement$Assert org$pandalanguage$pandac$statement$Assert;

void org$pandalanguage$pandac$statement$Assert$compileFail$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_msg);
void org$pandalanguage$pandac$statement$Assert$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_test, org$pandalanguage$pandac$ASTNode* p_msg);
void org$pandalanguage$pandac$statement$Assert$init(org$pandalanguage$pandac$statement$Assert* self);
void org$pandalanguage$pandac$statement$Assert$cleanup(org$pandalanguage$pandac$statement$Assert* self);

