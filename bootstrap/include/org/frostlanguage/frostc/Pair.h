#pragma once
#include "frost_c.h"
#include "Pair_types.h"
typedef struct org$frostlanguage$frostc$Pair org$frostlanguage$frostc$Pair;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$Pair$init$org$frostlanguage$frostc$Pair$A$org$frostlanguage$frostc$Pair$B(org$frostlanguage$frostc$Pair* self, frost$core$Object* p_first, frost$core$Object* p_second);
frost$core$String* org$frostlanguage$frostc$Pair$convert$R$frost$core$String(org$frostlanguage$frostc$Pair* self);
void org$frostlanguage$frostc$Pair$cleanup(org$frostlanguage$frostc$Pair* self);

