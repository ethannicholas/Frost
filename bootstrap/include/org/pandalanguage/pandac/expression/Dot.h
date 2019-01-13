#pragma once
#include "panda_c.h"
#include "Dot_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$expression$Dot org$pandalanguage$pandac$expression$Dot;

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IR$Value* p_target, panda$core$String* p_name);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_base, panda$core$String* p_name);
void org$pandalanguage$pandac$expression$Dot$init(org$pandalanguage$pandac$expression$Dot* self);
void org$pandalanguage$pandac$expression$Dot$cleanup(org$pandalanguage$pandac$expression$Dot* self);

