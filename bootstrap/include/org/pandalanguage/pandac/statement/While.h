#pragma once
#include "panda_c.h"
#include "While_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$statement$While org$pandalanguage$pandac$statement$While;

void org$pandalanguage$pandac$statement$While$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_test, org$pandalanguage$pandac$FixedArray* p_statements);
void org$pandalanguage$pandac$statement$While$init(org$pandalanguage$pandac$statement$While* self);
void org$pandalanguage$pandac$statement$While$cleanup(org$pandalanguage$pandac$statement$While* self);

