#pragma once
#include "frost_c.h"
#include "HashMap_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$MapView frost$collections$MapView;
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
#include "frost/core/Int_types.h"
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;

void frost$collections$HashMap$init(void* rawSelf);
void frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(void* rawSelf, frost$collections$MapView* p_map);
void frost$collections$HashMap$init$frost$collections$CollectionView$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(void* rawSelf, frost$collections$CollectionView* p_entries);
void frost$collections$HashMap$cleanup(void* rawSelf);
frost$core$Int frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(void* rawSelf, frost$collections$HashKey* p_key);
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(void* rawSelf, frost$collections$HashKey* p_key);
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(void* rawSelf, frost$collections$HashKey* p_key);
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(void* rawSelf, frost$collections$HashKey* p_key, frost$core$Object* p_value);
void frost$collections$HashMap$remove$frost$collections$HashMap$K(void* rawSelf, frost$collections$HashKey* p_key);
void frost$collections$HashMap$clear(void* rawSelf);
void frost$collections$HashMap$incrementCount(void* rawSelf);
frost$collections$Iterator* frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(void* rawSelf);
frost$core$Int frost$collections$HashMap$get_count$R$frost$core$Int(void* rawSelf);
void frost$collections$HashMap$filterInPlace$$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_test);
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(void* rawSelf);

