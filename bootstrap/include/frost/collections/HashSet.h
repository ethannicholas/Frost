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

void frost$collections$HashSet$init(void* rawSelf);
void frost$collections$HashSet$init$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(void* rawSelf, frost$collections$CollectionView* p_c);
void frost$collections$HashSet$add$frost$collections$HashSet$T(void* rawSelf, frost$collections$HashKey* p_value);
void frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(void* rawSelf, frost$collections$CollectionView* p_c);
void frost$collections$HashSet$remove$frost$collections$HashSet$T(void* rawSelf, frost$collections$HashKey* p_value);
frost$core$Int frost$collections$HashSet$get_count$R$frost$core$Int(void* rawSelf);
void frost$collections$HashSet$clear(void* rawSelf);
frost$collections$Iterator* frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT(void* rawSelf);
frost$core$Bit frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit(void* rawSelf, frost$collections$HashKey* p_value);
void frost$collections$HashSet$filterInPlace$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_test);
frost$core$String* frost$collections$HashSet$get_asString$R$frost$core$String(void* rawSelf);
void frost$collections$HashSet$cleanup(void* rawSelf);

