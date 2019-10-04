#pragma once
#include "frost_c.h"
#include "Pointer_types.h"
#include "frost/unsafe/Pointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
frost$unsafe$Pointer frost$unsafe$Pointer$init$frost$core$Int(frost$core$Int p_value);
frost$unsafe$Pointer frost$unsafe$Pointer$alloc$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$core$Int p_count, int64_t pointerSize);
frost$core$Object* frost$unsafe$Pointer$get$R$frost$unsafe$Pointer$T(frost$unsafe$Pointer self);
void frost$unsafe$Pointer$set$frost$unsafe$Pointer$T(frost$unsafe$Pointer self, frost$core$Object* p_value);
frost$core$Object* frost$unsafe$Pointer$$IDX$frost$core$Int$R$frost$unsafe$Pointer$T(frost$unsafe$Pointer self, frost$core$Int p_index, int64_t pointerSize);
void frost$unsafe$Pointer$$IDXEQ$frost$core$Int$frost$unsafe$Pointer$T(frost$unsafe$Pointer self, frost$core$Int p_index, frost$core$Object* p_value, int64_t pointerSize);
frost$unsafe$Pointer frost$unsafe$Pointer$realloc$frost$core$Int$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$unsafe$Pointer self, frost$core$Int p_oldCount, frost$core$Int p_newCount, int64_t pointerSize);
frost$unsafe$Pointer frost$unsafe$Pointer$$ADD$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$unsafe$Pointer self, frost$core$Int p_count, int64_t pointerSize);
frost$unsafe$Pointer frost$unsafe$Pointer$$SUB$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$unsafe$Pointer self, frost$core$Int p_count, int64_t pointerSize);
void frost$unsafe$Pointer$destroy(frost$unsafe$Pointer self);
frost$core$Int frost$unsafe$Pointer$get_asInt$R$frost$core$Int(frost$unsafe$Pointer self);
void frost$unsafe$Pointer$clear(frost$unsafe$Pointer self);
void frost$unsafe$Pointer$clear$frost$core$Int(frost$unsafe$Pointer self, frost$core$Int p_index);
frost$core$Object* frost$unsafe$Pointer$convertTo$R$frost$unsafe$Pointer$convertTo$T(frost$unsafe$Pointer self);
frost$core$String* frost$unsafe$Pointer$get_asString$R$frost$core$String(frost$unsafe$Pointer self);
void frost$unsafe$Pointer$cleanup(frost$unsafe$Pointer self);

