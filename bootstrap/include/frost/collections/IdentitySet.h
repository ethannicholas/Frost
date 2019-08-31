#pragma once
#include "frost_c.h"
#include "IdentitySet_types.h"
typedef struct frost$collections$IdentitySet frost$collections$IdentitySet;
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Bit_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;

void frost$collections$IdentitySet$init(frost$collections$IdentitySet* self);
void frost$collections$IdentitySet$init$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT(frost$collections$IdentitySet* self, frost$collections$CollectionView* p_c);
void frost$collections$IdentitySet$add$frost$collections$IdentitySet$T(frost$collections$IdentitySet* self, frost$core$Object* p_value);
void frost$collections$IdentitySet$addAll$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT(frost$collections$IdentitySet* self, frost$collections$CollectionView* p_c);
void frost$collections$IdentitySet$remove$frost$collections$IdentitySet$T(frost$collections$IdentitySet* self, frost$core$Object* p_value);
frost$core$Int frost$collections$IdentitySet$get_count$R$frost$core$Int(frost$collections$IdentitySet* self);
void frost$collections$IdentitySet$clear(frost$collections$IdentitySet* self);
frost$collections$Iterator* frost$collections$IdentitySet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$IdentitySet$T$GT(frost$collections$IdentitySet* self);
frost$core$Bit frost$collections$IdentitySet$contains$frost$collections$IdentitySet$T$R$frost$core$Bit(frost$collections$IdentitySet* self, frost$core$Object* p_value);
void frost$collections$IdentitySet$filterInPlace$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$IdentitySet* self, frost$core$MutableMethod* p_test);
frost$core$String* frost$collections$IdentitySet$get_asString$R$frost$core$String(frost$collections$IdentitySet* self);
void frost$collections$IdentitySet$cleanup(frost$collections$IdentitySet* self);

