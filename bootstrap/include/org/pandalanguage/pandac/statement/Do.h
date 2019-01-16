#pragma once
#include "panda_c.h"
#include "Do_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$statement$Do org$pandalanguage$pandac$statement$Do;

void org$pandalanguage$pandac$statement$Do$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$FixedArray* p_statements, org$pandalanguage$pandac$ASTNode* p_test);
void org$pandalanguage$pandac$statement$Do$init(org$pandalanguage$pandac$statement$Do* self);
void org$pandalanguage$pandac$statement$Do$cleanup(org$pandalanguage$pandac$statement$Do* self);

