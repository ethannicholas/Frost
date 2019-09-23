#pragma once
#include "frost_c.h"
#include "Loop_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$statement$Loop org$frostlang$frostc$statement$Loop;

void org$frostlang$frostc$statement$Loop$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, frost$core$String* p_label, org$frostlang$frostc$FixedArray* p_statements);
void org$frostlang$frostc$statement$Loop$init(void* rawSelf);
void org$frostlang$frostc$statement$Loop$cleanup(void* rawSelf);

