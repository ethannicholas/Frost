#pragma once
#include "frost_c.h"
#include "Pair_types.h"
typedef struct org$frostlang$frostc$Pair org$frostlang$frostc$Pair;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(void* rawSelf, frost$core$Object* p_first, frost$core$Object* p_second);
frost$core$String* org$frostlang$frostc$Pair$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$Pair$cleanup(void* rawSelf);

