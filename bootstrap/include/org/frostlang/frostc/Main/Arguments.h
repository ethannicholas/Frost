#pragma once
#include "frost_c.h"
#include "Arguments_types.h"
typedef struct org$frostlang$frostc$Main$Arguments org$frostlang$frostc$Main$Arguments;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main$Arguments* self, frost$collections$ListView* p_args);
frost$core$Bit org$frostlang$frostc$Main$Arguments$get_done$R$frost$core$Bit(org$frostlang$frostc$Main$Arguments* self);
frost$core$String* org$frostlang$frostc$Main$Arguments$next$R$frost$core$String(org$frostlang$frostc$Main$Arguments* self);
frost$core$String* org$frostlang$frostc$Main$Arguments$next$frost$core$String$R$frost$core$String(org$frostlang$frostc$Main$Arguments* self, frost$core$String* p_label);
void org$frostlang$frostc$Main$Arguments$cleanup(org$frostlang$frostc$Main$Arguments* self);

