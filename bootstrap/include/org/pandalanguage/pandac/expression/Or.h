#pragma once
#include "panda_c.h"
#include "Or_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
typedef struct org$pandalanguage$pandac$expression$Or org$pandalanguage$pandac$expression$Or;

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Or$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_left, org$pandalanguage$pandac$ASTNode* p_right, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
void org$pandalanguage$pandac$expression$Or$init(org$pandalanguage$pandac$expression$Or* self);
void org$pandalanguage$pandac$expression$Or$cleanup(org$pandalanguage$pandac$expression$Or* self);

