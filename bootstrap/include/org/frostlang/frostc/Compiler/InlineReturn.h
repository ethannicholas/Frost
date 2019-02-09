#pragma once
#include "frost_c.h"
#include "InlineReturn_types.h"
typedef struct org$frostlang$frostc$Compiler$InlineReturn org$frostlang$frostc$Compiler$InlineReturn;
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;

void org$frostlang$frostc$Compiler$InlineReturn$init$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$InlineReturn* self, org$frostlang$frostc$Variable* p_variable);
void org$frostlang$frostc$Compiler$InlineReturn$cleanup(org$frostlang$frostc$Compiler$InlineReturn* self);

