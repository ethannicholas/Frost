#pragma once
#include "frost_c.h"
#include "HashSet_types.h"
typedef struct frost$collections$HashSet frost$collections$HashSet;
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$collections$HashKey frost$collections$HashKey;
#include "frost/core/Int_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Bit_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;

void frost$collections$HashSet$init(frost$collections$HashSet* self);
void frost$collections$HashSet$init$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* self, frost$collections$CollectionView* p_c);
void frost$collections$HashSet$add$frost$collections$HashSet$T(frost$collections$HashSet* self, frost$collections$HashKey* p_value);
void frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* self, frost$collections$CollectionView* p_c);
void frost$collections$HashSet$remove$frost$collections$HashSet$T(frost$collections$HashSet* self, frost$collections$HashKey* p_value);
frost$core$Int frost$collections$HashSet$get_count$R$frost$core$Int(frost$collections$HashSet* self);
void frost$collections$HashSet$clear(frost$collections$HashSet* self);
frost$collections$Iterator* frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* self);
frost$core$Bit frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit(frost$collections$HashSet* self, frost$collections$HashKey* p_value);
void frost$collections$HashSet$filterInPlace$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$HashSet* self, frost$core$MutableMethod* p_test);
frost$core$String* frost$collections$HashSet$get_asString$R$frost$core$String(frost$collections$HashSet* self);
void frost$collections$HashSet$cleanup(frost$collections$HashSet* self);

