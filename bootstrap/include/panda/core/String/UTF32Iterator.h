#pragma once
#include "panda_c.h"
#include "UTF32Iterator_types.h"
typedef struct panda$core$String$UTF32Iterator panda$core$String$UTF32Iterator;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"
#include "panda/core/Char32_types.h"

void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* self, panda$core$String* p_str);
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self);
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self);
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self);

