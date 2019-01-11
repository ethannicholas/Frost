#pragma once
#include "panda_c.h"
#include "UTF8List_types.h"
typedef struct panda$core$String$UTF8List panda$core$String$UTF8List;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Char8_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;

void panda$core$String$UTF8List$init$panda$core$String(panda$core$String$UTF8List* self, panda$core$String* p_str);
panda$core$Char8 panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(panda$core$String$UTF8List* self, panda$core$Int64 p_index);
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* self);
panda$collections$Iterator* panda$core$String$UTF8List$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* self);
void panda$core$String$UTF8List$cleanup(panda$core$String$UTF8List* self);

