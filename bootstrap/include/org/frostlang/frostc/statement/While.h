#pragma once
#include "frost_c.h"
#include "While_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$statement$While org$frostlang$frostc$statement$While;

void org$frostlang$frostc$statement$While$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, frost$core$String* p_label, org$frostlang$frostc$ASTNode* p_test, org$frostlang$frostc$FixedArray* p_statements);
void org$frostlang$frostc$statement$While$init(org$frostlang$frostc$statement$While* self);
void org$frostlang$frostc$statement$While$cleanup(org$frostlang$frostc$statement$While* self);

