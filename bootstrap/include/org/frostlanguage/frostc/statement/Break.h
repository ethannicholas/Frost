#pragma once
#include "frost_c.h"
#include "Break_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$statement$Break org$frostlanguage$frostc$statement$Break;

void org$frostlanguage$frostc$statement$Break$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label);
void org$frostlanguage$frostc$statement$Break$init(org$frostlanguage$frostc$statement$Break* self);
void org$frostlanguage$frostc$statement$Break$cleanup(org$frostlanguage$frostc$statement$Break* self);

