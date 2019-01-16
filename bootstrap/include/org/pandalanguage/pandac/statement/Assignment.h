#pragma once
#include "panda_c.h"
#include "Assignment_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
typedef struct org$pandalanguage$pandac$statement$Assignment org$pandalanguage$pandac$statement$Assignment;

void org$pandalanguage$pandac$statement$Assignment$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawLeft, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_rawRight);
void org$pandalanguage$pandac$statement$Assignment$init(org$pandalanguage$pandac$statement$Assignment* self);
void org$pandalanguage$pandac$statement$Assignment$cleanup(org$pandalanguage$pandac$statement$Assignment* self);

