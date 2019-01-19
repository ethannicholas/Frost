#pragma once
#include "frost_c.h"
#include "Message_types.h"
typedef struct frost$unsafe$UnsafeMessageQueue$Message frost$unsafe$UnsafeMessageQueue$Message;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

void frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(frost$unsafe$UnsafeMessageQueue$Message* self, frost$core$Object* p_payload);
frost$core$String* frost$unsafe$UnsafeMessageQueue$Message$get_asString$R$frost$core$String(frost$unsafe$UnsafeMessageQueue$Message* self);
void frost$unsafe$UnsafeMessageQueue$Message$cleanup(frost$unsafe$UnsafeMessageQueue$Message* self);

