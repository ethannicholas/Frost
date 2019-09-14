#pragma once
#include "frost_c.h"
#include "RegexToken.GT_types.h"
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT;
#include "frost/core/Int_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "org/frostlang/regex/RegexToken_types.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$String frost$core$String;

void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init(void* rawSelf);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int(void* rawSelf, frost$core$Int p_capacity);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$collections$ListView$LTorg$frostlang$regex$RegexToken$GT(void* rawSelf, frost$collections$ListView* p_list);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$unsafe$Pointer$LTorg$frostlang$regex$RegexToken$GT$frost$core$Int(void* rawSelf, org$frostlang$regex$RegexToken* p_data, frost$core$Int p_count);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup(void* rawSelf);
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int p_index, org$frostlang$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int p_index, org$frostlang$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(void* rawSelf, org$frostlang$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(void* rawSelf, frost$collections$CollectionView* p_c);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(void* rawSelf, frost$core$Int p_newCapacity);
frost$core$Int frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int(void* rawSelf);
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear(void* rawSelf);
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_asString$R$frost$core$String(void* rawSelf);

