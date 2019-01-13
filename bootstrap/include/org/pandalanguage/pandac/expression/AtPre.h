#pragma once
#include "panda_c.h"
#include "AtPre_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
typedef struct org$pandalanguage$pandac$expression$AtPre org$pandalanguage$pandac$expression$AtPre;

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$AtPre$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
void org$pandalanguage$pandac$expression$AtPre$init(org$pandalanguage$pandac$expression$AtPre* self);
void org$pandalanguage$pandac$expression$AtPre$cleanup(org$pandalanguage$pandac$expression$AtPre* self);

