#pragma once
#include "frost_c.h"
#include "Token.GT_types.h"
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT;
#include "frost/core/Int_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/unsafe/Pointer_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$String frost$core$String;

void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init(void* rawSelf);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int(void* rawSelf, frost$core$Int p_capacity);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$collections$ListView$LTorg$frostlang$frostc$parser$Token$GT(void* rawSelf, frost$collections$ListView* p_list);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$parser$Token$GT$frost$core$Int(void* rawSelf, frost$unsafe$Pointer p_data, frost$core$Int p_count);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$cleanup(void* rawSelf);
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int$R$org$frostlang$frostc$parser$Token(void* rawSelf, frost$core$Int p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int$org$frostlang$frostc$parser$Token(void* rawSelf, frost$core$Int p_index, org$frostlang$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int$org$frostlang$frostc$parser$Token(void* rawSelf, frost$core$Int p_index, org$frostlang$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(void* rawSelf, org$frostlang$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(void* rawSelf, frost$collections$CollectionView* p_c);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int(void* rawSelf, frost$core$Int p_newCapacity);
frost$core$Int frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int(void* rawSelf);
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int$R$org$frostlang$frostc$parser$Token(void* rawSelf, frost$core$Int p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear(void* rawSelf);
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String(void* rawSelf);

