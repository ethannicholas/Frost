#pragma once
#include "frost_c.h"
#include "Return_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$statement$Return org$frostlanguage$frostc$statement$Return;

void org$frostlanguage$frostc$statement$Return$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_value);
void org$frostlanguage$frostc$statement$Return$init(org$frostlanguage$frostc$statement$Return* self);
void org$frostlanguage$frostc$statement$Return$cleanup(org$frostlanguage$frostc$statement$Return* self);

