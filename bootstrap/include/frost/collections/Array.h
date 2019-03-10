#pragma once
#include "frost_c.h"
#include "Array_types.h"
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Int_types.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

void frost$collections$Array$init(frost$collections$Array* self);
void frost$collections$Array$init$frost$core$Int(frost$collections$Array* self, frost$core$Int p_capacity);
void frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* self, frost$collections$CollectionView* p_other);
void frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(frost$collections$Array* self, frost$core$Int p_count, frost$core$Object* p_value);
void frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int(frost$collections$Array* self, frost$core$Object** p_data, frost$core$Int p_count);
void frost$collections$Array$cleanup(frost$collections$Array* self);
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(frost$collections$Array* self, frost$core$Int p_index);
void frost$collections$Array$$IDXEQ$frost$core$Int$frost$collections$Array$T(frost$collections$Array* self, frost$core$Int p_index, frost$core$Object* p_value);
void frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(frost$collections$Array* self, frost$core$Int p_index, frost$core$Object* p_value);
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* self, frost$core$Object* p_value);
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* self, frost$collections$CollectionView* p_c);
void frost$collections$Array$ensureCapacity$frost$core$Int(frost$collections$Array* self, frost$core$Int p_newCapacity);
frost$core$Int frost$collections$Array$get_count$R$frost$core$Int(frost$collections$Array* self);
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(frost$collections$Array* self, frost$core$Int p_index);
void frost$collections$Array$clear(frost$collections$Array* self);
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(frost$collections$Array* self);

