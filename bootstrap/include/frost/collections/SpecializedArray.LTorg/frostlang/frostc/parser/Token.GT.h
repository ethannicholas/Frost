#pragma once
#include "frost_c.h"
#include "Token.GT_types.h"
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "org/frostlang/frostc/parser/Token_types.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$String frost$core$String;

void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$core$Int64 p_capacity);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$collections$ListView$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$collections$ListView* p_list);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$parser$Token$GT$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, org$frostlang$frostc$parser$Token* p_data, frost$core$Int64 p_count);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self);
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int64$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$core$Int64 p_index, org$frostlang$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int64$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$core$Int64 p_index, org$frostlang$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, org$frostlang$frostc$parser$Token p_value);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$collections$CollectionView* p_c);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$core$Int64 p_newCapacity);
frost$core$Int64 frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int64(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self);
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self, frost$core$Int64 p_index);
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self);
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* self);

