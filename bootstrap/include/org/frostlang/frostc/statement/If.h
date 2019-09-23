#pragma once
#include "frost_c.h"
#include "If_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$statement$If org$frostlang$frostc$statement$If;

void org$frostlang$frostc$statement$If$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$ASTNode* p_test, org$frostlang$frostc$FixedArray* p_ifTrue, org$frostlang$frostc$ASTNode* p_ifFalse);
void org$frostlang$frostc$statement$If$init(void* rawSelf);
void org$frostlang$frostc$statement$If$cleanup(void* rawSelf);

