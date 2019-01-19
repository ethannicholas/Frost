#pragma once
#include "frost_c.h"
#include "IdentityMap_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
#include "frost/core/Int64_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* self);
void frost$collections$IdentityMap$cleanup(frost$collections$IdentityMap* self);
frost$core$Int64 frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(frost$collections$IdentityMap* self, frost$core$Object* p_key);
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(frost$collections$IdentityMap* self, frost$core$Object* p_key);
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* self, frost$core$Object* p_key);
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* self, frost$core$Object* p_key, frost$core$Object* p_value);
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* self, frost$core$Object* p_key);
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* self);
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* self);
frost$core$Int64 frost$collections$IdentityMap$get_count$R$frost$core$Int64(frost$collections$IdentityMap* self);
frost$collections$Iterator* frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT(frost$collections$IdentityMap* self);
frost$collections$Iterator* frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT(frost$collections$IdentityMap* self);
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(frost$collections$IdentityMap* self);

