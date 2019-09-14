#pragma once
#include "frost_c.h"
#include "Error_types.h"
typedef struct frost$core$Error frost$core$Error;
typedef struct frost$core$String frost$core$String;

void frost$core$Error$init$frost$core$String(void* rawSelf, frost$core$String* p_message);
frost$core$String* frost$core$Error$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$Error$cleanup(void* rawSelf);

