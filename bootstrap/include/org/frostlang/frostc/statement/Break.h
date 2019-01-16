#pragma once
#include "frost_c.h"
#include "Break_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$statement$Break org$frostlang$frostc$statement$Break;

void org$frostlang$frostc$statement$Break$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, frost$core$String* p_label);
void org$frostlang$frostc$statement$Break$init(org$frostlang$frostc$statement$Break* self);
void org$frostlang$frostc$statement$Break$cleanup(org$frostlang$frostc$statement$Break* self);

