#pragma once
#include "frost_c.h"
#include "RegexToken.GT_types.h"
typedef struct frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "org/frostlanguage/regex/RegexToken_types.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$init(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$init$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Int64 p_capacity);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$init$frost$collections$ListView$LTorg$frostlanguage$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$collections$ListView* p_list);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$init$frost$unsafe$Pointer$LTorg$frostlanguage$regex$RegexToken$GT$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, org$frostlanguage$regex$RegexToken* p_data, frost$core$Int64 p_count);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self);
org$frostlanguage$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlanguage$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$$IDXEQ$frost$core$Int64$org$frostlanguage$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Int64 p_index, org$frostlanguage$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$insert$frost$core$Int64$org$frostlanguage$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Int64 p_index, org$frostlanguage$regex$RegexToken p_value);
frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Range$LTfrost$core$Int64$GT p_r);
frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Range$LTfrost$core$Int64$Q$GT p_r);
frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT p_r);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$add$org$frostlanguage$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, org$frostlanguage$regex$RegexToken p_value);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlanguage$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$collections$CollectionView* p_c);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Int64 p_newCapacity);
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self);
frost$collections$Iterator* frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$get_iterator$R$frost$collections$Iterator$LTorg$frostlanguage$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self);
org$frostlanguage$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlanguage$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$clear(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self);
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT$convert$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* self);

