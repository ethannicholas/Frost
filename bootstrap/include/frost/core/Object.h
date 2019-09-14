#pragma once
#include "frost_c.h"
#include "Object_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Object frost$core$Object;

frost$core$String* frost$core$Object$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$Object$cleanup(void* rawSelf);
void frost$core$Object$init(void* rawSelf);

