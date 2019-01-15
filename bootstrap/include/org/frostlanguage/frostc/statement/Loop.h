#pragma once
#include "frost_c.h"
#include "Loop_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$statement$Loop org$frostlanguage$frostc$statement$Loop;

void org$frostlanguage$frostc$statement$Loop$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$FixedArray* p_statements);
void org$frostlanguage$frostc$statement$Loop$init(org$frostlanguage$frostc$statement$Loop* self);
void org$frostlanguage$frostc$statement$Loop$cleanup(org$frostlanguage$frostc$statement$Loop* self);

