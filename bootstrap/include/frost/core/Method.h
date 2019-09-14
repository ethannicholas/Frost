#pragma once
#include "frost_c.h"
#include "Method_types.h"
typedef struct frost$core$Method frost$core$Method;
#include "frost/core/Int8_types.h"
typedef struct frost$core$Immutable frost$core$Immutable;
typedef struct frost$core$String frost$core$String;

void frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q(void* rawSelf, frost$core$Int8* p_pointer, frost$core$Immutable* p_target);
frost$core$String* frost$core$Method$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$Method$cleanup(void* rawSelf);

