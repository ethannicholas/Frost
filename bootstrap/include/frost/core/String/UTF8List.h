#pragma once
#include "frost_c.h"
#include "UTF8List_types.h"
typedef struct frost$core$String$UTF8List frost$core$String$UTF8List;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Char8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;

void frost$core$String$UTF8List$init$frost$core$String(frost$core$String$UTF8List* self, frost$core$String* p_str);
frost$core$Char8 frost$core$String$UTF8List$$IDX$frost$core$Int$R$frost$core$Char8(frost$core$String$UTF8List* self, frost$core$Int p_index);
frost$core$Int frost$core$String$UTF8List$get_count$R$frost$core$Int(frost$core$String$UTF8List* self);
frost$collections$Iterator* frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT(frost$core$String$UTF8List* self);
void frost$core$String$UTF8List$cleanup(frost$core$String$UTF8List* self);

