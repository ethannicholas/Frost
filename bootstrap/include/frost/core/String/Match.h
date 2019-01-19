#pragma once
#include "frost_c.h"
#include "Match_types.h"
typedef struct frost$core$String$Match frost$core$String$Match;
typedef struct frost$core$Matcher frost$core$Matcher;
typedef struct frost$core$String frost$core$String;

void frost$core$String$Match$init$frost$core$Matcher(frost$core$String$Match* self, frost$core$Matcher* p_m);
frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String(frost$core$String$Match* self);
void frost$core$String$Match$cleanup(frost$core$String$Match* self);

