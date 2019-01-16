#pragma once
#include "panda_c.h"
#include "UTF8Iterator_types.h"
typedef struct panda$core$String$UTF8Iterator panda$core$String$UTF8Iterator;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"
#include "panda/core/Char8_types.h"

void panda$core$String$UTF8Iterator$init$panda$core$String(panda$core$String$UTF8Iterator* self, panda$core$String* p_str);
panda$core$Bit panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF8Iterator* self);
panda$core$Char8 panda$core$String$UTF8Iterator$next$R$panda$core$Char8(panda$core$String$UTF8Iterator* self);
void panda$core$String$UTF8Iterator$cleanup(panda$core$String$UTF8Iterator* self);

