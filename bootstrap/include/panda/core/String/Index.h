#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/String/Index.h"

typedef struct panda$core$String$Index {
    panda$core$Int64 value;
} panda$core$String$Index;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$core$String$Index$class_type;
extern panda$core$String$Index$class_type panda$core$String$Index$class;
typedef struct panda$core$String$Index$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$String$Index value;
} panda$core$String$Index$wrapper;
typedef struct panda$core$String$Index$nullable {
    panda$core$String$Index value;
    bool nonnull;
} panda$core$String$Index$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$String$Index$wrapperclass_type;
extern panda$core$String$Index$wrapperclass_type panda$core$String$Index$wrapperclass;
panda$core$String$Index$wrapper* wrap_panda$core$String$Index(panda$core$String$Index self);

#ifndef PANDA_TYPESONLY
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

void panda$core$String$Index$init$panda$core$Int64(panda$core$String$Index* self, panda$core$Int64 p_value);
panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Bit panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Int64 panda$core$String$Index$hash$R$panda$core$Int64(panda$core$String$Index self);

#endif
