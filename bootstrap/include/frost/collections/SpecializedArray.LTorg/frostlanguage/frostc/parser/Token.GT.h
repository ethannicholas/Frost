#pragma once
#include "frost_c.h"
#include "Token.GT_types.h"
typedef struct frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "org/frostlanguage/frostc/parser/Token_types.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$init(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$init$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Int64 p_capacity);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$init$frost$collections$ListView$LTorg$frostlanguage$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$collections$ListView* p_list);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$init$frost$unsafe$Pointer$LTorg$frostlanguage$frostc$parser$Token$GT$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, org$frostlanguage$frostc$parser$Token* p_data, frost$core$Int64 p_count);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self);
org$frostlanguage$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlanguage$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Int64 p_index, org$frostlanguage$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlanguage$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Int64 p_index, org$frostlanguage$frostc$parser$Token p_value);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Range$LTfrost$core$Int64$GT p_r);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Range$LTfrost$core$Int64$Q$GT p_r);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT p_r);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$add$org$frostlanguage$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, org$frostlanguage$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlanguage$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$collections$CollectionView* p_c);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Int64 p_newCapacity);
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self);
frost$collections$Iterator* frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$get_iterator$R$frost$collections$Iterator$LTorg$frostlanguage$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self);
org$frostlanguage$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlanguage$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$clear(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self);
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$convert$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* self);

