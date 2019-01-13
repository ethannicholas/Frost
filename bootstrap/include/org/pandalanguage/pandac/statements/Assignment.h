#pragma once
#include "panda_c.h"
#include "Assignment_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
typedef struct org$pandalanguage$pandac$statements$Assignment org$pandalanguage$pandac$statements$Assignment;

void org$pandalanguage$pandac$statements$Assignment$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawLeft, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_rawRight);
void org$pandalanguage$pandac$statements$Assignment$init(org$pandalanguage$pandac$statements$Assignment* self);
void org$pandalanguage$pandac$statements$Assignment$cleanup(org$pandalanguage$pandac$statements$Assignment* self);

