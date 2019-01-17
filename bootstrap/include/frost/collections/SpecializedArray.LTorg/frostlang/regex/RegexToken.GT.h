#pragma once
#include "frost_c.h"
#include "RegexToken.GT_types.h"
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "org/frostlang/regex/RegexToken_types.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$String frost$core$String;

void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$core$Int64 p_capacity);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$collections$ListView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$collections$ListView* p_list);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$unsafe$Pointer$LTorg$frostlang$regex$RegexToken$GT$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, org$frostlang$regex$RegexToken* p_data, frost$core$Int64 p_count);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self);
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$core$Int64 p_index, org$frostlang$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$core$Int64 p_index, org$frostlang$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, org$frostlang$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$collections$CollectionView* p_c);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$core$Int64 p_newCapacity);
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self);
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self);
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$convert$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* self);

