#pragma once
#include "frost_c.h"
#include "Continue_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$statement$Continue org$frostlanguage$frostc$statement$Continue;

void org$frostlanguage$frostc$statement$Continue$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label);
void org$frostlanguage$frostc$statement$Continue$init(org$frostlanguage$frostc$statement$Continue* self);
void org$frostlanguage$frostc$statement$Continue$cleanup(org$frostlanguage$frostc$statement$Continue* self);

