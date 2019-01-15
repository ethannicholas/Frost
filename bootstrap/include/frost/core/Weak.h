#pragma once
#include "frost_c.h"
#include "Weak_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

void frost$core$Weak$init$frost$core$Weak$T(frost$core$Weak* self, frost$core$Object* p_value);
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(frost$core$Weak* self);
frost$core$String* frost$core$Weak$convert$R$frost$core$String(frost$core$Weak* self);
void frost$core$Weak$cleanup(frost$core$Weak* self);

