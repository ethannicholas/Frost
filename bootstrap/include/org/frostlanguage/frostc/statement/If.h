#pragma once
#include "frost_c.h"
#include "If_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$statement$If org$frostlanguage$frostc$statement$If;

void org$frostlanguage$frostc$statement$If$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_test, org$frostlanguage$frostc$FixedArray* p_ifTrue, org$frostlanguage$frostc$ASTNode* p_ifFalse);
void org$frostlanguage$frostc$statement$If$init(org$frostlanguage$frostc$statement$If* self);
void org$frostlanguage$frostc$statement$If$cleanup(org$frostlanguage$frostc$statement$If* self);

