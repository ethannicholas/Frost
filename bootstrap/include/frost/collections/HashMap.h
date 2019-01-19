#pragma once
#include "frost_c.h"
#include "HashMap_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$MapView frost$collections$MapView;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$String frost$core$String;

void frost$collections$HashMap$init(frost$collections$HashMap* self);
void frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(frost$collections$HashMap* self, frost$collections$MapView* p_map);
void frost$collections$HashMap$cleanup(frost$collections$HashMap* self);
frost$core$Int64 frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(frost$collections$HashMap* self, frost$collections$Key* p_key);
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(frost$collections$HashMap* self, frost$collections$Key* p_key);
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* self, frost$collections$Key* p_key);
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* self, frost$collections$Key* p_key, frost$core$Object* p_value);
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* self, frost$collections$Key* p_key);
void frost$collections$HashMap$clear(frost$collections$HashMap* self);
void frost$collections$HashMap$incrementCount(frost$collections$HashMap* self);
frost$collections$Iterator* frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT(frost$collections$HashMap* self);
frost$collections$Iterator* frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT(frost$collections$HashMap* self);
frost$core$Int64 frost$collections$HashMap$get_count$R$frost$core$Int64(frost$collections$HashMap* self);
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* self);

