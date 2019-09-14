#pragma once
#include "frost_c.h"
#include "Weak_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$core$String frost$core$String;

frost$core$Bit frost$core$Weak$checkValid$frost$core$Object$Q$R$frost$core$Bit(frost$core$Object* p_o);
void frost$core$Weak$init$frost$core$Weak$T$Q(void* rawSelf, frost$core$Object* p_value);
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(void* rawSelf);
frost$core$Bit frost$core$Weak$get_valid$R$frost$core$Bit(void* rawSelf);
frost$core$String* frost$core$Weak$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$Weak$cleanup(void* rawSelf);

