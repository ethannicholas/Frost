#pragma once
#include "panda_c.h"
#include "Loop_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$statement$Loop org$pandalanguage$pandac$statement$Loop;

void org$pandalanguage$pandac$statement$Loop$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$FixedArray* p_statements);
void org$pandalanguage$pandac$statement$Loop$init(org$pandalanguage$pandac$statement$Loop* self);
void org$pandalanguage$pandac$statement$Loop$cleanup(org$pandalanguage$pandac$statement$Loop* self);

