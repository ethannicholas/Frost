#pragma once
#include "frost_c.h"
#include "While_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$statement$While org$frostlanguage$frostc$statement$While;

void org$frostlanguage$frostc$statement$While$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$ASTNode* p_test, org$frostlanguage$frostc$FixedArray* p_statements);
void org$frostlanguage$frostc$statement$While$init(org$frostlanguage$frostc$statement$While* self);
void org$frostlanguage$frostc$statement$While$cleanup(org$frostlanguage$frostc$statement$While* self);

