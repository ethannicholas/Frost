#pragma once
#include "frost_c.h"
#include "IdentityMap_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
#include "frost/core/Int_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;

void frost$collections$IdentityMap$init(void* rawSelf);
void frost$collections$IdentityMap$cleanup(void* rawSelf);
frost$core$Int frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int(void* rawSelf, frost$core$Object* p_key);
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(void* rawSelf, frost$core$Object* p_key);
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(void* rawSelf, frost$core$Object* p_key);
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(void* rawSelf, frost$core$Object* p_key, frost$core$Object* p_value);
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(void* rawSelf, frost$core$Object* p_key);
void frost$collections$IdentityMap$clear(void* rawSelf);
void frost$collections$IdentityMap$incrementCount(void* rawSelf);
frost$core$Int frost$collections$IdentityMap$get_count$R$frost$core$Int(void* rawSelf);
frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(void* rawSelf);
void frost$collections$IdentityMap$filterInPlace$$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_test);
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(void* rawSelf);

