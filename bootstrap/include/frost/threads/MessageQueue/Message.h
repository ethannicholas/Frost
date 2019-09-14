#pragma once
#include "frost_c.h"
#include "Message_types.h"
typedef struct frost$threads$MessageQueue$Message frost$threads$MessageQueue$Message;
typedef struct frost$core$Immutable frost$core$Immutable;
typedef struct frost$core$String frost$core$String;

void frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T(void* rawSelf, frost$core$Immutable* p_payload);
frost$core$String* frost$threads$MessageQueue$Message$get_asString$R$frost$core$String(void* rawSelf);
void frost$threads$MessageQueue$Message$cleanup(void* rawSelf);

