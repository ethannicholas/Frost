#pragma once
#include "frost_c.h"
#include "Method_types.h"
typedef struct frost$core$Method frost$core$Method;
#include "frost/core/Int8_types.h"
typedef struct frost$core$Immutable frost$core$Immutable;
typedef struct frost$core$String frost$core$String;

void frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q(frost$core$Method* self, frost$core$Int8* p_pointer, frost$core$Immutable* p_target);
frost$core$String* frost$core$Method$convert$R$frost$core$String(frost$core$Method* self);
void frost$core$Method$cleanup(frost$core$Method* self);

