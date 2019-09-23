#pragma once
#include "frost_c.h"
#include "NewPointer_types.h"
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$Object frost$core$Object;

frost$unsafe$NewPointer frost$unsafe$NewPointer$init$builtin_int(int64_t p_value);
frost$unsafe$NewPointer frost$unsafe$NewPointer$init$frost$core$Int(frost$core$Int p_value);
frost$unsafe$NewPointer frost$unsafe$NewPointer$alloc$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(frost$core$Int p_count, int64_t pointerSize);
frost$core$Object* frost$unsafe$NewPointer$get$R$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer self);
void frost$unsafe$NewPointer$set$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer self, frost$core$Object* p_value);
frost$core$Object* frost$unsafe$NewPointer$$IDX$frost$core$Int$R$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer self, frost$core$Int p_index, int64_t pointerSize);
void frost$unsafe$NewPointer$$IDXEQ$frost$core$Int$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer self, frost$core$Int p_index, frost$core$Object* p_value, int64_t pointerSize);
frost$unsafe$NewPointer frost$unsafe$NewPointer$realloc$frost$core$Int$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(frost$unsafe$NewPointer self, frost$core$Int p_oldCount, frost$core$Int p_newCount, int64_t pointerSize);
frost$unsafe$NewPointer frost$unsafe$NewPointer$$ADD$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(frost$unsafe$NewPointer self, frost$core$Int p_count, int64_t pointerSize);
void frost$unsafe$NewPointer$destroy(frost$unsafe$NewPointer self);
frost$core$Int frost$unsafe$NewPointer$get_asInt$R$frost$core$Int(frost$unsafe$NewPointer self);
void frost$unsafe$NewPointer$clear$frost$core$Int(frost$unsafe$NewPointer self, frost$core$Int p_index);
frost$core$Object* frost$unsafe$NewPointer$convertTo$R$frost$unsafe$NewPointer$convertTo$T(frost$unsafe$NewPointer self);
void frost$unsafe$NewPointer$cleanup(frost$unsafe$NewPointer self);

