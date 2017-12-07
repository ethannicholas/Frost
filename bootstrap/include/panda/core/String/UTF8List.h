#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$String$UTF8List {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* str;
} panda$core$String$UTF8List;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$core$String$UTF8List$class_type;
extern panda$core$String$UTF8List$class_type panda$core$String$UTF8List$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String$UTF8List panda$core$String$UTF8List;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Char8.h"
#include "panda/core/Int64.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;

void panda$core$String$UTF8List$init$panda$core$String(panda$core$String$UTF8List* self, panda$core$String* p_str);
panda$core$Char8 panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(panda$core$String$UTF8List* self, panda$core$Int64 p_index);
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* self);
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* self);

#endif
