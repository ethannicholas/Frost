#pragma once
#include "frost_c.h"
#include "Array_types.h"
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Int_types.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$Object frost$core$Object;
#include "frost/unsafe/Pointer_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$core$String frost$core$String;

void frost$collections$Array$init(void* rawSelf);
void frost$collections$Array$init$frost$core$Int(void* rawSelf, frost$core$Int p_capacity);
void frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(void* rawSelf, frost$collections$CollectionView* p_other);
void frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(void* rawSelf, frost$core$Int p_count, frost$core$Object* p_value);
void frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int(void* rawSelf, frost$unsafe$Pointer p_data, frost$core$Int p_count);
void frost$collections$Array$cleanup(void* rawSelf);
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(void* rawSelf, frost$core$Int p_index);
void frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T(void* rawSelf, frost$core$Int p_index, frost$core$Object* p_value);
void frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(void* rawSelf, frost$core$Int p_index, frost$core$Object* p_value);
void frost$collections$Array$add$frost$collections$Array$T(void* rawSelf, frost$core$Object* p_value);
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(void* rawSelf, frost$collections$CollectionView* p_c);
void frost$collections$Array$ensureCapacity$frost$core$Int(void* rawSelf, frost$core$Int p_newCapacity);
frost$core$Int frost$collections$Array$get_count$R$frost$core$Int(void* rawSelf);
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(void* rawSelf, frost$core$Int p_index);
void frost$collections$Array$clear(void* rawSelf);
frost$collections$Array* frost$collections$Array$filter$$LPfrost$collections$Array$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$Array$LTfrost$collections$Array$T$GT(void* rawSelf, frost$core$MutableMethod* p_predicate);
frost$collections$Array* frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$R$frost$collections$Array$LT$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$GT(void* rawSelf, frost$collections$ListView* p_other);
frost$collections$Array* frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$EQ$GT$LPfrost$collections$Array$combine$V$RP$R$frost$collections$Array$LTfrost$collections$Array$combine$V$GT(void* rawSelf, frost$collections$ListView* p_other, frost$core$MutableMethod* p_f);
frost$collections$Array* frost$collections$Array$combine$frost$collections$ListView$LTfrost$collections$Array$combine$U$GT$$LPfrost$collections$Array$T$Cfrost$collections$Array$combine$U$RP$EQ$AM$GT$LPfrost$collections$Array$combine$V$RP$R$frost$collections$Array$LTfrost$collections$Array$combine$V$GT(void* rawSelf, frost$collections$ListView* p_other, frost$core$MutableMethod* p_f);
frost$collections$Array* frost$collections$Array$sort$$LPfrost$collections$Array$T$Cfrost$collections$Array$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Array$LTfrost$collections$Array$T$GT(void* rawSelf, frost$core$MutableMethod* p_greater);
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(void* rawSelf);

