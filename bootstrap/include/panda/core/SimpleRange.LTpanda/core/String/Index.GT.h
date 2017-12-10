#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/SimpleRange.LTpanda/core/String/Index.GT.h"

typedef struct panda$core$SimpleRange$LTpanda$core$String$Index$GT {
    panda$core$String$Index min;
    panda$core$String$Index max;
    panda$core$Bit inclusive;
} panda$core$SimpleRange$LTpanda$core$String$Index$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SimpleRange$LTpanda$core$String$Index$GT$class_type;
extern panda$core$SimpleRange$LTpanda$core$String$Index$GT$class_type panda$core$SimpleRange$LTpanda$core$String$Index$GT$class;
typedef struct panda$core$SimpleRange$LTpanda$core$String$Index$GT$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$SimpleRange$LTpanda$core$String$Index$GT value;
} panda$core$SimpleRange$LTpanda$core$String$Index$GT$wrapper;
typedef struct panda$core$SimpleRange$LTpanda$core$String$Index$GT$nullable {
    panda$core$SimpleRange$LTpanda$core$String$Index$GT value;
    bool nonnull;
} panda$core$SimpleRange$LTpanda$core$String$Index$GT$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SimpleRange$LTpanda$core$String$Index$GT$wrapperclass_type;
extern panda$core$SimpleRange$LTpanda$core$String$Index$GT$wrapperclass_type panda$core$SimpleRange$LTpanda$core$String$Index$GT$wrapperclass;
panda$core$SimpleRange$LTpanda$core$String$Index$GT$wrapper* wrap_panda$core$SimpleRange$LTpanda$core$String$Index$GT(panda$core$SimpleRange$LTpanda$core$String$Index$GT self);

#ifndef PANDA_TYPESONLY
#include "panda/core/SimpleRange.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$SimpleRange$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(panda$core$SimpleRange$LTpanda$core$String$Index$GT* self, panda$core$String$Index p_min, panda$core$String$Index p_max, panda$core$Bit p_inclusive);
panda$core$String* panda$core$SimpleRange$LTpanda$core$String$Index$GT$convert$R$panda$core$String(panda$core$SimpleRange$LTpanda$core$String$Index$GT self);

#endif
