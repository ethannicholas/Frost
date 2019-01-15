#pragma once
#include "frost_c.h"
#include "UTF8Iterator_types.h"
typedef struct frost$core$String$UTF8Iterator frost$core$String$UTF8Iterator;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
#include "frost/core/Char8_types.h"

void frost$core$String$UTF8Iterator$init$frost$core$String(frost$core$String$UTF8Iterator* self, frost$core$String* p_str);
frost$core$Bit frost$core$String$UTF8Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF8Iterator* self);
frost$core$Char8 frost$core$String$UTF8Iterator$next$R$frost$core$Char8(frost$core$String$UTF8Iterator* self);
void frost$core$String$UTF8Iterator$cleanup(frost$core$String$UTF8Iterator* self);

