#pragma once
#include "panda_c.h"
#include "If_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$statement$If org$pandalanguage$pandac$statement$If;

void org$pandalanguage$pandac$statement$If$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_test, org$pandalanguage$pandac$FixedArray* p_ifTrue, org$pandalanguage$pandac$ASTNode* p_ifFalse);
void org$pandalanguage$pandac$statement$If$init(org$pandalanguage$pandac$statement$If* self);
void org$pandalanguage$pandac$statement$If$cleanup(org$pandalanguage$pandac$statement$If* self);

