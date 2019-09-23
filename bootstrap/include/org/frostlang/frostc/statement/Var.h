#pragma once
#include "frost_c.h"
#include "Var_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
#include "org/frostlang/frostc/Variable/Kind_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$statement$Var org$frostlang$frostc$statement$Var;

void org$frostlang$frostc$statement$Var$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Variable$Kind p_kind, org$frostlang$frostc$FixedArray* p_decls);
void org$frostlang$frostc$statement$Var$init(void* rawSelf);
void org$frostlang$frostc$statement$Var$cleanup(void* rawSelf);

