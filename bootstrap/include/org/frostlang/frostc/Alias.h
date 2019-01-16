#pragma once
#include "frost_c.h"
#include "Alias_types.h"
typedef struct org$frostlang$frostc$Alias org$frostlang$frostc$Alias;
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/frostc/Position_types.h"

void org$frostlang$frostc$Alias$init$frost$core$String$frost$core$String$org$frostlang$frostc$Position(org$frostlang$frostc$Alias* self, frost$core$String* p_alias, frost$core$String* p_fullName, org$frostlang$frostc$Position p_position);
frost$core$String* org$frostlang$frostc$Alias$convert$R$frost$core$String(org$frostlang$frostc$Alias* self);
void org$frostlang$frostc$Alias$cleanup(org$frostlang$frostc$Alias* self);

