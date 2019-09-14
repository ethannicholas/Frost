#pragma once
#include "frost_c.h"
#include "CollectionWriter_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$CollectionWriter frost$collections$CollectionWriter;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;

frost$core$Int frost$collections$CollectionWriter$get_count$R$frost$core$Int(void* rawSelf);
void frost$collections$CollectionWriter$add$frost$collections$CollectionWriter$T(void* rawSelf, frost$core$Object* p_value);
void frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT(void* rawSelf, frost$collections$CollectionView* p_c);
void frost$collections$CollectionWriter$clear(void* rawSelf);
void frost$collections$CollectionWriter$filterInPlace$$LPfrost$collections$CollectionWriter$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_test);

