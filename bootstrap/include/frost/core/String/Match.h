#pragma once
#include "frost_c.h"
#include "Match_types.h"
typedef struct frost$core$String$Match frost$core$String$Match;
typedef struct frost$core$Matcher frost$core$Matcher;
typedef struct frost$core$String frost$core$String;

void frost$core$String$Match$init$frost$core$Matcher(void* rawSelf, frost$core$Matcher* p_m);
frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$String$Match$cleanup(void* rawSelf);

