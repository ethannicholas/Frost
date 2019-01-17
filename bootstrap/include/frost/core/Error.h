#pragma once
#include "frost_c.h"
#include "Error_types.h"
typedef struct frost$core$Error frost$core$Error;
typedef struct frost$core$String frost$core$String;

void frost$core$Error$init$frost$core$String(frost$core$Error* self, frost$core$String* p_message);
frost$core$String* frost$core$Error$convert$R$frost$core$String(frost$core$Error* self);
void frost$core$Error$cleanup(frost$core$Error* self);

