#pragma once
#include "frost_c.h"
#include "Assignment_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
typedef struct org$frostlanguage$frostc$statement$Assignment org$frostlanguage$frostc$statement$Assignment;

void org$frostlanguage$frostc$statement$Assignment$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_rawLeft, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_rawRight);
void org$frostlanguage$frostc$statement$Assignment$init(org$frostlanguage$frostc$statement$Assignment* self);
void org$frostlanguage$frostc$statement$Assignment$cleanup(org$frostlanguage$frostc$statement$Assignment* self);

