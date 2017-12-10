#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/SimpleRange.LTpanda/core/String/Index.Q.GT.h"

typedef struct panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT {
    panda$core$String$Index$nullable min;
    panda$core$String$Index$nullable max;
    panda$core$Bit inclusive;
} panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$class_type;
extern panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$class_type panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$class;
typedef struct panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT value;
} panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$wrapper;
typedef struct panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$nullable {
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT value;
    bool nonnull;
} panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$wrapperclass_type;
extern panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$wrapperclass_type panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$wrapperclass;
panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$wrapper* wrap_panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT(panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT self);

#ifndef PANDA_TYPESONLY
#include "panda/core/SimpleRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT* self, panda$core$String$Index$nullable p_min, panda$core$String$Index$nullable p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT self);

#endif
