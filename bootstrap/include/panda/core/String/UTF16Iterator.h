#pragma once
#include "panda_c.h"
#include "UTF16Iterator_types.h"
typedef struct panda$core$String$UTF16Iterator panda$core$String$UTF16Iterator;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"
#include "panda/core/Char16_types.h"

void panda$core$String$UTF16Iterator$init$panda$core$String(panda$core$String$UTF16Iterator* self, panda$core$String* p_str);
panda$core$Bit panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF16Iterator* self);
panda$core$Char16 panda$core$String$UTF16Iterator$next$R$panda$core$Char16(panda$core$String$UTF16Iterator* self);
void panda$core$String$UTF16Iterator$cleanup(panda$core$String$UTF16Iterator* self);

