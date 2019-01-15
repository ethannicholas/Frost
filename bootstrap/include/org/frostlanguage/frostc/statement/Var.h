#pragma once
#include "frost_c.h"
#include "Var_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
#include "org/frostlanguage/frostc/Variable/Kind_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$statement$Var org$frostlanguage$frostc$statement$Var;

void org$frostlanguage$frostc$statement$Var$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$Variable$Kind p_kind, org$frostlanguage$frostc$FixedArray* p_decls);
void org$frostlanguage$frostc$statement$Var$init(org$frostlanguage$frostc$statement$Var* self);
void org$frostlanguage$frostc$statement$Var$cleanup(org$frostlanguage$frostc$statement$Var* self);

