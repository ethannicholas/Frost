#pragma once
#include "frost_c.h"
#include "Block_types.h"
typedef struct org$frostlanguage$frostc$IR$Block org$frostlanguage$frostc$IR$Block;
#include "org/frostlanguage/frostc/IR/Block/ID_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$IR$Block$init$org$frostlanguage$frostc$IR$Block$ID(org$frostlanguage$frostc$IR$Block* self, org$frostlanguage$frostc$IR$Block$ID p_id);
frost$core$String* org$frostlanguage$frostc$IR$Block$convert$R$frost$core$String(org$frostlanguage$frostc$IR$Block* self);
void org$frostlanguage$frostc$IR$Block$cleanup(org$frostlanguage$frostc$IR$Block* self);

