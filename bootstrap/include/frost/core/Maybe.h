#pragma once
#include "frost_c.h"
#include "Maybe_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$Maybe frost$core$Maybe;
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"

frost$core$Object* frost$core$Maybe$get$R$frost$core$Maybe$T(frost$core$Maybe* self);
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(frost$core$Maybe* self);
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(frost$core$Maybe* self);
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(frost$core$Maybe* self);
void frost$core$Maybe$cleanup(frost$core$Maybe* self);
void frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(frost$core$Maybe* self, frost$core$Int p_rv, frost$core$Object* p_f0);
void frost$core$Maybe$init$frost$core$Int$frost$core$Error(frost$core$Maybe* self, frost$core$Int p_rv, frost$core$Error* p_f0);

