#pragma once
#include "frost_c.h"
#include "MapView_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$collections$MapView frost$collections$MapView;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;

frost$core$Int64 frost$collections$MapView$get_count$R$frost$core$Int64(frost$collections$MapView* self);
frost$core$Object* frost$collections$MapView$$IDX$frost$collections$MapView$K$R$frost$collections$MapView$V$Q(frost$collections$MapView* self, frost$core$Object* p_key);
frost$core$Bit frost$collections$MapView$contains$frost$collections$MapView$K$R$frost$core$Bit(frost$collections$MapView* self, frost$core$Object* p_key);
frost$collections$Iterator* frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT(frost$collections$MapView* self);
frost$collections$Iterator* frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT(frost$collections$MapView* self);

