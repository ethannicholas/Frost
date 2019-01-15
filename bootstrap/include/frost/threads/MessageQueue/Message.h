#pragma once
#include "frost_c.h"
#include "Message_types.h"
typedef struct frost$threads$MessageQueue$Message frost$threads$MessageQueue$Message;
typedef struct frost$core$Immutable frost$core$Immutable;
typedef struct frost$core$String frost$core$String;

void frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T(frost$threads$MessageQueue$Message* self, frost$core$Immutable* p_payload);
frost$core$String* frost$threads$MessageQueue$Message$convert$R$frost$core$String(frost$threads$MessageQueue$Message* self);
void frost$threads$MessageQueue$Message$cleanup(frost$threads$MessageQueue$Message* self);

