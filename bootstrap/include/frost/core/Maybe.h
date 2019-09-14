#pragma once
#include "frost_c.h"
#include "Maybe_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$Maybe frost$core$Maybe;
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/Bit_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

frost$core$Object* frost$core$Maybe$get$R$frost$core$Maybe$T(void* rawSelf);
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(void* rawSelf);
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(void* rawSelf);
void frost$core$Maybe$cleanup(void* rawSelf);
void frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(void* rawSelf, frost$core$Int p_rv, frost$core$Object* p_f0);
void frost$core$Maybe$init$frost$core$Int$frost$core$Error(void* rawSelf, frost$core$Int p_rv, frost$core$Error* p_f0);
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(void* rawSelf);

