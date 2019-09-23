#pragma once
#include "frost_c.h"
#include "Do_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$statement$Do org$frostlang$frostc$statement$Do;

void org$frostlang$frostc$statement$Do$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, frost$core$String* p_label, org$frostlang$frostc$FixedArray* p_statements, org$frostlang$frostc$ASTNode* p_test);
void org$frostlang$frostc$statement$Do$init(void* rawSelf);
void org$frostlang$frostc$statement$Do$cleanup(void* rawSelf);

