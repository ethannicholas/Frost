#pragma once
#include "frost_c.h"
#include "UTF32Iterator_types.h"
typedef struct frost$core$String$UTF32Iterator frost$core$String$UTF32Iterator;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
#include "frost/core/Char32_types.h"

void frost$core$String$UTF32Iterator$init$frost$core$String(frost$core$String$UTF32Iterator* self, frost$core$String* p_str);
frost$core$Bit frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF32Iterator* self);
frost$core$Char32 frost$core$String$UTF32Iterator$next$R$frost$core$Char32(frost$core$String$UTF32Iterator* self);
void frost$core$String$UTF32Iterator$cleanup(frost$core$String$UTF32Iterator* self);

