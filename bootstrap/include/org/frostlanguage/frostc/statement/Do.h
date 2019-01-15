#pragma once
#include "frost_c.h"
#include "Do_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$statement$Do org$frostlanguage$frostc$statement$Do;

void org$frostlanguage$frostc$statement$Do$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$FixedArray* p_statements, org$frostlanguage$frostc$ASTNode* p_test);
void org$frostlanguage$frostc$statement$Do$init(org$frostlanguage$frostc$statement$Do* self);
void org$frostlanguage$frostc$statement$Do$cleanup(org$frostlanguage$frostc$statement$Do* self);

